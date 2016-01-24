#include <iostream> 
#include <string>

using namespace std; 

// void emergencySubstitution(){

int SubMenu()
{

	int choice = 0;

	cout << "Emergency Substitutions: " << endl;
	cout << "Below is a list of common cooking substitutions " << endl;
	cout << "Find an ingredient you would like to find a substitute for and enter in the number next to it." << endl;
	cout << "1. baking powder" << endl;
	cout << "2. baking soda" << endl;
	cout << "3. broth: beef or chicken " << endl;
	cout << "4. brown sugar" << endl;
	cout << "5. buttermilk" << endl;
	cout << "6. cake flour" << endl;
	cout << "7. cheddar cheese" << endl; 
	cout << "8. cocoa" << endl;
	cout << "9. corn syrup" << endl;
	cout << "10. cornstarch" << endl;
	cout << "11. cottage cheese" << endl;
	cout << "12. cream of tartar" << endl;
	cout << "13. fats for baking" << endl;
	cout << "14. garlic" << endl;
	cout << "15. granulated sugar" << endl;
	cout << "16. half and half cream" << endl;
	cout << "17. heavy cream" << endl;
	cout << "18. honey" << endl;
	cout << "19. hot pepper sauce" << endl;
	cout << "20. light cream" << endl;
	cout << "21. mayonnaise" << endl;
	cout << "22. molasses" << endl;
	cout << "23. plain yogurt" << endl;
	cout << "24. salted butter" << endl;
	cout << "25. semisweet chocolate chips" << endl;
	cout << "26. shortening" << endl;
	cout << "27. sour cream" << endl;
	cout<< "28. soy sauce" << endl;
	cout << "29. unsalted butter" << endl;
	cout << "30. unsweetened chocolate" << endl;
	cout << "31. vegetable oil- for baking" << endl;
	cout << "32. vegetable oil- for frying" << endl;
	cout << "33. white sugar" << endl;
	cout << "34. wine" << endl;
	cout << "Ingredient number: ";
	cin >> choice;

	if(choice < 0 || choice > 34)
	{
		cout << "Error: Invalid choice" << endl;
	}
	//baking powder
	else if(choice == 1)
	{
		cout << "1 teaspoon baking powder : 1/4 teaspoon baking soda and 1/2 teaspoon cream of tartar and 1/4 teaspoon cornstarch OR 1/4 teaspoon baking soda and 1/2 cup buttermilk, sour milk, or yogurt to replace 1/2 cup of liquid" << endl;
	}
	//baking soda
	else if(choice == 2)
	{
		cout << "1/2 teaspoon baking soda : 2 teaspoons double-acting baking powder (also replace acidic liquid in recipe with non-acidic liquid)" << endl;
	}
	//broth: beef or chicken
	else if(choice == 3)
	{
		cout << "1 cup broth: beef or chicken : 1 bouillon cube and 1 cup boiling water OR 1 tablespoon soy sauce and enough water to make 1 cup" << endl;
	}
	//brown sugar
	else if(choice == 4)
	{
		cout << "1 cup brown sugar : 1 cup white sugar and 1/4 cup molasses (decrease recipe liquid by 1/4 cup)" << endl;
	}
	//buttermilk
	else if(choice == 5)
	{
		cout << "1 cup buttermilk : 1 tablespoon lemon juice or white or cider vinegar and enough milk to make 1 cup (let stand for 5 minutes)" << endl;
	}
	//cake flour
	else if(choice == 6)
	{
		cout << "1 cup cake flour : 1 cup minus 2 tablespoons all-purpose flour" << endl;
	}
	//cheddar cheese
	else if(choice == 7)
	{
		cout << "1 cup cheddar cheese : 1 cup shredded Monterey Jack cheese" << endl;
	}
	//cocoa
	else if(choice == 8)
	{
		cout << "1/4 cup cocoa : 1 ounce unsweetened chocolate" << endl;
	}
	//corn syrup
	else if(choice == 9)
	{
		cout << "1 cup corn syrup : 1 1/4 cup white sugar and 1/3 cup water" << endl;
	}
	//corn starch
	else if(choice == 10)
	{
		cout << "1 tablespoon cornstarch : 2 tablespoons of all-purpose flour" << endl;
	}
	//cottage cheese
	else if(choice == 11)
	{
		cout << "1 cup cottage cheese : 1 cup ricotta cheese" << endl;
	}
	// cream of tartar
	else if(choice == 12)
	{
		cout << "1/2 teaspoon cream of tartar : 1/2 teaspoon white vinegar or lemon juice" << endl;
	}
	//fats for baking
	else if(choice == 13)
	{
		cout << "1 cup fats for baking : 1 cup applesauce or 1 cup fruit puree" << endl;
	}
	//garlic
	else if(choice == 14)
	{
		cout << "1 clove garlic : 1/8 teaspoon garlic powder" << endl;
	}
	//granulated sugar
	else if(choice == 15)
	{
		cout << "1 cup granulated sugar : 1 cup packed brown sugar or 2 cups sifted powdered sugar" << endl;
	}
	//half and half cream
	else if(choice == 16)
	{
		cout << "1 cup half and half cream : 7/8 cup milk and 1 tablespoon butter" << endl;
	}
	// heavy cream
	else if(choice == 17)
	{
		cout << "1 cup heavy cream : 2/3 cup whole milk and 1/3 cup melted unsalted butter" << endl;
	}
	// honey
	else if(choice == 18)
	{
		cout << "1 cup honey : 3/4 cup maple syrup and 1/2 cup granulated white sugar OR 1 1/4 cups granulated sugar and 1/3 cup liquid" << endl;
	}
	// hot pepper sauce
	else if(choice == 19)
	{
		cout << "1 teaspoon hot pepper sauce : 3/4 teaspon cayenne pepper and 1 teaspoon vinegar" << endl;
	}
	// light cream
	else if(choice == 20)
	{
		cout << "1 cup light cream : 2 tablespoons butter plus 1 cup minus 2 tablespoons milk" << endl;
	}
	// mayonnaise
	else if(choice == 21)
	{
		cout << "1 cup mayonnaise : 1 cup sour cream OR 1 cup plain yogurt" << endl;
	}
	// molasses
	else if(choice == 22)
	{
		cout << "1 cup molasses : 1 cup honey or 1 cup maple syrup" << endl;
	}
	// plain yogurt
	else if(choice == 23)
	{
		cout << "1 cup plain yogurt : 1 cup sour cream or 1 cup buttermilk" << endl;
	}
	//salted butter
	else if(choice == 24)
	{
		cout << "1 cup salted butter : 1 cup margarine OR 7/8 cup vegetable oil and 1/2 teaspoon salt" << endl;
	}
	// semisweet chocolate chips
	else if(choice == 25)
	{
		cout << "1 cup semisweet chocolate chips : 1 cup chocolate candies OR 1 cup peanut butter or other flavored chips" << endl;
	}
	//shortening
	else if(choice == 26)
	{
		cout << "1 cup shortening : 1 cup butter" << endl;
	}
	//sour cream
	else if(choice == 27)
	{
		cout << "1 cup sour cream : 1 cup plain yogurt" << endl;
	}
	//soy sauce
	else if(choice == 28)
	{
		cout << "1/2 cup soy sauce : 1/4 cup Worcestershire sauce mixed with 1 tablespon water" << endl;
	}
	// unsalted butter
	else if(choice == 29)
	{
		cout << "1 cup unsalted butter : 1 cup shortening OR 7/8 cup vegetable oil" << endl;
	}
	//unsweetened chocolate
	else if(choice == 30)
	{
		cout << "1 ounce unsweetened chocolate : 3 tablespoons unsweetened cocoa powder and 1 tablespoon butter or margarine" << endl;
	}
	// vegetable oil - for baking
	else if(choice == 31)
	{
		cout << "1 cup vegetable oil- for baking : 1 cup applesauce or 1 cup fruit puree" << endl;
	}
	// vegetable oil - for frying
	else if(choice == 32)
	{
		cout << "1 cup vegetable oil- for frying : 1 cup lard" << endl;
	}
	// white sugar
	else if(choice == 33)
	{
		cout << "1 cup white sugar : 1 cup brown sugar OR 3/4 cup honey" << endl;
	}
	// wine
	else if(choice == 34)
	{
		cout << "1 cup wine : 1 cup chicken or beef broth OR 1 cup fruit juice mixed with 2 teaspons vinegar" << endl;
	}
	//improper input
	else{
		cout << "Error: Invalid input" << endl;
		return -1; //return to main menu
	}

	return 0; // return to main menu

}

