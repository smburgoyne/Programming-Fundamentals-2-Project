#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "unitConverter.cpp"
#include "emergencySubstitution.cpp"
#include "cookingTerms.cpp"
#include "cookingTips.cpp"

using namespace std;


class Recipe {

public:

        vector<string> ingred_list;
        vector<string> direc_list;
        string recipe_name;
        string author_name;
        string category;
        bool fav;

        Recipe()
        {
                recipe_name = "";
                author_name = "";
                category = "";
                fav = false;
        }

        Recipe(string r, string a, string c, bool f)
        {
                recipe_name = r;
                author_name = a;
                category = c;
                fav = f;
        }

        void addIngredient(string i)
        {
                ingred_list.push_back(i);
        }

        void addDirection(string d)
        {
                direc_list.push_back(d);
        }

};


class Node {

public:

        Recipe recipe;
        Node* next;

        Node()
        {
                recipe = Recipe();
                next = NULL;
        }

};


class LinkedList {

public:

        Node * head;

        LinkedList()
        {
                head = NULL;
        }

        void insertEnd(Recipe r) 
        {
                Node* n = new Node();
                n->recipe = r;
                n->next = head;

                head = n;
        }

        bool isMember(string recipename)
        {
                bool isMember = false;
                Node * current = head;

                while (current != NULL) {

                        if (current->recipe.recipe_name == recipename)
                        {
                                isMember = true;
                        }

                        current = current->next;

                }

                return isMember;
        }

        void remove(string recipename) {

                if (head->recipe.recipe_name == recipename)
                {
                        Node* temp = head;
                        head = head->next;
                        delete temp;
                }
                else
                {
                        Node * current = head;
                        while (current->next != NULL) 
                        {
                                if (current->next->recipe.recipe_name == recipename)
                                {
                                        if (current->next->next == NULL)
                                        {
                                                Node* temp = current->next;
                                                current->next = NULL;
                                                delete temp;
                                        }
                                        else
                                        {
                                                Node* temp = current->next;
                                                current->next = current->next->next;
                                                delete temp;
                                        }
                                }
                                current = current->next;
                        }
                }

        }

        vector<Recipe> getFavorites() 
        {
                Node * temp;
                temp = head;
                vector<Recipe> favorites;

                while (temp != NULL) {

                        if (temp->recipe.fav == true) 
                        {
                                favorites.push_back(temp->recipe);
                                //add name of current recipe to vector                                               
                        }
                        temp = temp->next;

                }

                return favorites;
        }

        void printRecipe(string recipename) {

                Node * current = head;

                while (current != NULL) {
                        if (current->recipe.recipe_name == recipename)
                        {
                                cout << current->recipe.recipe_name << endl;
                                cout << current->recipe.author_name << endl;
                                cout << current->recipe.category << endl;
                                if (current->recipe.fav)
                                {
                                        cout << "Favorite" << endl;
                                }
                                for (int i = current->recipe.ingred_list.size() - 1; i >= 0; --i)
                                {
                                        cout << current->recipe.ingred_list[i] << endl;
                                }
                                for (int i = current->recipe.direc_list.size() - 1; i >= 0; --i)
                                {
                                        cout << current->recipe.direc_list[i] << endl;
                                }
                        }

                        current = current->next;
                }

                //prints out specific recipe
        }

        void printFavorites() {

                Node * temp;
                temp = head;

                while (temp != NULL) {

                        if (temp->recipe.fav == true)
                        {
                                cout << temp->recipe.recipe_name << endl;
                        }

                        temp = temp->next;
                }
                //print out the list of favorite recipes by recipe name
        }

        void printAllRecipeNames() {

                Node* n = head;

                while (n != NULL)
                {
                        cout << n->recipe.recipe_name << endl;
                        n = n->next;
                }

        }

        void printByCategory(string category) {

                Node * current = head;

                while (current != NULL) {
                        if (current->recipe.category == category)
                        {
                                cout << current->recipe.recipe_name << endl;
                        }

                        current = current->next;
                }
                //prints out the list of recipe names by categories
        }
        void printByAuthor(string author){

                Node * current = head;

                while (current != NULL) {
                        if (current->recipe.author_name == author)
                        {
                                cout << current->recipe.recipe_name << endl;
                        }
                        current = current->next;
                }
        }

};


int main(int argc, char* argv[])
{
        if (argc != 2) {
                cout << "ERROR: Wrong number of args\n";
                return -1;
        }
        
        string line;
        ofstream cookbookfile(argv[1]);

        if (!cookbookfile)
        {
                cerr << "Input file could not be opened" << endl;
                return -1;
        }

        bool exit = false;
        string choice;
        LinkedList* Recipe_list = new LinkedList();

        while (!exit) {
                
                cout << "1.  Add recipe" << endl;
                cout << "2.  Search by recipe name" << endl;
                cout << "3.  Search by category" << endl;
                cout << "4.  List by author" << endl;
                cout << "5.  List all stored recipes" << endl;
                cout << "6.  List favorite recipes" << endl;
                cout << "7.  Delete recipe" << endl;
                cout << "8.  Unit Conversion" << endl;
                cout << "9.  Cooking Ingredient Substitutions" << endl;
                cout << "10. Cooking Terms Glossary" << endl;
                cout << "11. Cooking Tips" << endl;
                cout << "12. Exit" << endl;
                        
                cin >> choice;
                
                if (choice == "1")
                {
                        string name;                       
                        cout << "Enter the recipe name: \n";                       
                        cin.ignore();                                              
                        getline(cin, name);                       
                        cookbookfile << name << " \n";

                        if (Recipe_list->isMember(name))
                        {
                                cout << "Recipe already exists!" << endl;
                                cin.ignore();
                                continue;
                        }


                           string author;                        
                            cout << "Enter the author name: \n";                        
                            //cin.ignore();                        
                            getline(cin, author);                        
                            cookbookfile << author << " \n";

                        string category;
                        cout << "Enter the category the recipe belongs in: \n";
                        cout << "1. Breakfast \n";
                        cout << "2. Appetizers \n";
                        cout << "3. Sides \n";
                        cout << "4. Soups/Salads/Sandwiches \n";
                        cout << "5. Desserts \n";
                        cout << "6. Pasta \n";
                        cout << "7. Vegetarian \n";
                        cout << "8. Poultry \n";
                        cout << "9. Beef \n";
                        cout << "10. Seafood \n";
                        cout << "11. Casseroles \n";
                        cout << "12. Pork \n";
                        cout << "13. Other \n";
                        cout << "Category choice: ";
                        cin >> category;
                        cookbookfile << category << " \n";

                        bool favorite;
                        cout << "Would you like to make this recipe a favorite? (yes or no) \n";
                        string choice;
                        cin >> choice;
                        
                        if (choice == "yes") {
                                favorite = true;
                                cookbookfile << "Favorite" << " \n";
                        }
                        else {
                                favorite = false;
                                cookbookfile << "Not Favorite" << " \n";
                        }

                        Recipe recipe = Recipe(name, author, category, favorite);
                
                        string ingred;
                        bool done = false;
                        cout << "Enter each ingredient then press enter. Enter DONE when finished: " << endl;
                        //cin.ignore();
                        cookbookfile << "\nIngredients: ";
        
                        while (!done)
                        {
              
                                getline(cin, ingred);
                                if (ingred == "DONE")
                                {
                                        done = true;
                                }
                                else
                                {
                                        recipe.addIngredient(ingred);
                                        cookbookfile << ingred << " ";
                                }
                                cookbookfile << endl;
                        }

                        string direc;
                        bool done2 = false;
                        cout << "Enter each direction then press enter. Enter DONE when finished: " << endl;
                        //cin.ignore();
                        cookbookfile << "Directions: \n";                        
                        
                        while (!done2)
                        {
                                getline(cin, direc);
                                if (direc == "DONE")
                                {
                                        done2 = true;
                                }
                                else
                                {
                                        recipe.addDirection(direc);
                                        cookbookfile << direc << " ";
                                }
                                cookbookfile << endl;
                        }
        
                        Recipe_list->insertEnd(recipe);
                        cout << "Recipe successfully added!" << endl;
                        continue;
                }
                if (choice == "2")
                {
                        string recipename;
                        cout << "Enter recipe name: " << endl;
                        cin.ignore();
                        getline(cin, recipename);
                        Recipe_list->printRecipe(recipename);
                }
                if (choice == "3")
                {
                        string category;
                        cout << "Enter category: " << endl;
                        cin >> category;
                        Recipe_list->printByCategory(category);

                        string recipename;
                        cout << "Choose recipe: " << endl;
                        cin.ignore();
                        getline(cin, recipename);
                        Recipe_list->printRecipe(recipename);

                }
                if (choice == "4")
                {
                        string author;
                        cout << "Enter author name: " << endl;
                        cin.ignore();
                        getline(cin, author);
                        Recipe_list->printByAuthor(author);

                        string recipename;
                        cout << "Choose recipe: " << endl;
                        cin.ignore();
                        getline(cin, recipename);
                        Recipe_list->printRecipe(recipename);

                }
                if (choice == "5")
                {
                        Recipe_list->printAllRecipeNames();

                        string recipename;
                        cout << "Choose recipe: " << endl;
                        cin.ignore();
                        getline(cin, recipename);
                        Recipe_list->printRecipe(recipename);

                }
                if (choice == "6")
                {
                        Recipe_list->printFavorites();

                        string recipename;
                        cout << "Choose recipe: " << endl;
                        cin.ignore();
                        getline(cin, recipename);
                        Recipe_list->printRecipe(recipename);


                }
                if (choice == "7")
                {
                        string recipe;
                        cout << "Enter name of recipe you wish to delete: ";
                        cin.ignore();
                        getline(cin, recipe);

                        if (Recipe_list->isMember(recipe))
                        {
                                Recipe_list->remove(recipe);
                                cout << "Recipe successfully deleted!" << endl;
                        }
                        else
                        {
                                cout << "Recipe of that name is not on file." << endl;
                        }
                }
                if(choice == "8"){
                    Menu();
                }
                if(choice == "9"){
                    SubMenu();
                }
                if(choice == "10"){
                    TermsMenu();
                }
                if(choice == "11"){
                    printCookingTips();
                }
                if (choice == "12")
                {
                        exit = true;
                        break;
                }
                else
                {
                        cout << "Please enter an integer from 1-12" << endl;
                        cin.clear();
                        continue;
                }
        }

        cookbookfile.close();
        return 0;

}



