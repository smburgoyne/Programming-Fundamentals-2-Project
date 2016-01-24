#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int TermsMenu(){

	int choice = 0;

	cout << "Glossary of terms (choose option number to get definition) : " << endl;

	cout << "1. Simmer" << endl;
	cout << "2. Saute" << endl;
	cout << "3. Marinate" << endl;
	cout << "4. Mince" << endl;
	cout << "5. Julienne" << endl;
	cout << "6. Chop" << endl;
	cout << "7. Dice" << endl; 
	cout << "8. Slice" << endl;
	cout << "9. Brown" << endl;
	cout << "10. Bake" << endl;
	cout << "11. Broil" << endl;
	cout << "12. Boil" << endl;
	cout << "13. Pan Fry" << endl;
	cout << "14. Shred" << endl;
	cout << "15. Grate" << endl;
	cout << "16. Dash" << endl;
	cout << "17. Pinch" << endl;
	cout << "18. Smidgen" << endl;
	cout << "19. Baste" << endl;
	cout << "20. Bind" << endl;

	cin >> choice;

	if(choice < 0 || choice > 20)
		{
			cout << "Error: Invalid choice" << endl;
			return -1;
		}
	if(choice == 1){
		cout << "Simmering means that you are heating a liquid to a temperature that is close to a boil, but not hot enough to create bubbles. I simmer foods on a 3 or 4 temperature setting on an electric stove. You still need to stir occassionally when simmering as food may still stick to the bottom." << endl;
	}
	if(choice == 2){
		cout << "To saute is to cook in oil over heat. An example of sauteing would be to saute an onion in olive oil." << endl;
	}
	if(choice == 3){
		cout << "To marinate is to take food and soak it in a mixture of spices, oil, and possibly vinegar to make it more tender and flavorful. You can generally marinate food for a half hour to days depending on the dish." << endl;
	}
	if(choice == 4){
		cout << "You may hear the word mince a lot with garlic. Mincing is chopping something into very tiny pieces." << endl;
	}
	if(choice == 5){
		cout << "Julienne is such a fancy word for a simple cut. Julienne means to cut something into long strips. This can be done with many vegetables like carrots. Make it easy on yourself and buy a julienne peeler, a little gadget that makes perfect julienne strips." << endl;
	}
	if(choice == 6){
		cout << "This is a very basic cooking technique. To chop is to cut into small pieces. The pieces don't have to be uniform or exactly the same." << endl;
	}
	if(choice == 7){
		cout << "To dice is like to chop, but the pieces are smaller." << endl;
	}
	if(choice == 8){
		cout << "Slicing is when you cut completely through an object. Think of slicing cheese, or bread. Same principle goes for veggies, meat and fruit." << endl;
	}
	if(choice == 9){
		cout << "To brown a meat means to cook until brown. You may brown the sides of a roast on the stovetop before cooking in a crockpot or oven." << endl;
	}
	if(choice == 10){
		cout << "Baking is all about surrounding your food with a consistent temperature and cooking it from all sides. So, when you're baking something, the entire oven reaches a temperature and cooks the entirety of your food as a whole." << endl;
	}
	if(choice == 11){
		cout << "Broiling works by exposing your food to direct heat much like a grill. If baking could be considered a shotgun, broiling is your kitchen's sniper rifle. When you turn on your broiler, you'll see a large flame at the top of your oven. You'll usually then set your food right under that flame to cook it quickly. Typically speaking, a broiler reaches a temperature of around 550 degrees." << endl;
	}
	if(choice == 12){
		cout << "Water boils around 212 °F depending on your elevation, and it usually requires turning your stove up to the maximum temperature so your water bubbles up. Boiling is good for vegetables, starchy foods like rice or noodles, and older chunks of tough meat." << endl;
	}
	if(choice == 13){
		cout << "Pan frying is when you cook larger chunks of food like chicken breasts or steak over a medium heat. You'll generally only flip your food once when pan frying your food." << endl;
	}
	if(choice == 14){
		cout << "Shredding is usually done with a grater that has bigger holes. The end result is long, smooth strips that cook or melt slowly because of their size." << endl;
	}
	if(choice == 15){
		cout << "Grating creates tiny pieces of food that look like powder. This is usually best when you want something like cheese to melt quickly over a dish, or a vegetable to hide away inside a sauce. This is done with the side of the grater with tiny holes." << endl;
	}
	if(choice == 16){
		cout << "Dash: 1/8 teaspoon" << endl;
	}
	if(choice == 17){
		cout << "Pinch: 1/16 teaspoon" << endl;
	}
	if(choice == 18){
		cout << "Smidgen: 1/32 teaspoon" << endl;
	}
	if(choice == 19){
		cout << "To brush or spoon liquid fat or juices over meat, fish poultry or vegetables during cooking to help keep moisture on the surface area. " << endl;
	}
	if(choice == 20){
		cout << "To thicken a sauce or hot liquid by stirring in ingredients such as roux, flour, butter, cornstarch, egg yolks, vegetable puree or cream. " << endl;
	}

return 0;

}



