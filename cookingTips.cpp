#include <iostream>
#include <string>

using namespace std;

int printCookingTips(){
	cout << "1. Best cooking utensils to have" << endl;
	cout << "2. Tips for grilling" << endl;
	cout << "3. Tips for baking" << endl;
	cout << "4. Tips for stovetop cooking" << endl;

	int choice = 0;
	cin >> choice;
	//utensils found from http://www.thekitchn.com/essential-kitchen-tools-prep-utensils-and-equipment-setting-up-a-kitchen-166469
	if(choice == 1)
	{
		cout << "Measuring Spoons " << endl;
		cout << "Dry Ingredient Measuring Cups" << endl;
		cout << "Liquid Ingredient Measuring Cups" << endl;
		cout << "Three Mixing Bowls" << endl;
		cout << "Cutting Boards" << endl;
		cout << "A Chef's Knife and a Pairing Knife" << endl;
		cout << "Wooden Spoons" << endl;
		cout << "Vegetable Peeler" << endl;
		cout << "Colander or Fine-Mesh Strainer" << endl;
		cout << "Ramekins and Small Bowls" << endl;
		cout << "Microplane grater" << endl;
		cout << "Can Opener" << endl;
		cout << "Tongs" << endl;
		cout << "Rubber or Silicone Spatula" << endl;
		cout << "Metal Spatula or Turner" << endl;
		cout << "Slotted Spoon" << endl;
		cout << "Oven Mitts or Hot Pad" << endl;
		cout << "Steamer Basket" << endl;
		cout << "Silpat or Parchment Paper" << endl;
		cout << "Timer" << endl;
		cout << "Cooling Rack" << endl;
		cout << "Instant Read Thermometer" << endl;
		cout << "Small 2- to 3- quart saucepan with lid" << endl;
		cout << "Large 4-Quart to 2-Gallon Saucepan " << endl;
		cout << "Medium 10- to 14- inch Saute Pan with Lid" << endl;
		cout << "Two Commercial-Quality Half Sheet Pans" << endl;
		cout << "A Muffin Pan" << endl;
		cout << "Hand-held Mixer or Stand Mixer" << endl;
		cout << "Countertop Blender" << endl;
		cout << "Toaster Oven" << endl;
	}
	// Tips found from http://www.eatingwell.com/node/14989?page=8
	else if(choice == 2)
	{
		cout << "Tip 1: " << endl;
		cout << "Preheat your gril 15 to 25 minutes before you start cooking to make sure it reaches the right temperature." << endl;
		cout << "Tip 2: " << endl;
		cout << "To clean your grill, it is easier to remove debris when the grill is hot, so after preheating, use a long-handled wire grill brush on your grill rack to clean off charred debris from prior meals" << endl;
		cout << "Tip 3: " << endl;
		cout << "Reduce sticking by oiling your hot grill rack with a vegetable oil-soaked paper towel: hold it with tongs and rub over rack" << endl;
		cout << "Tip 4: " << endl;
		cout << "Marinate your meat to infuse it with flavor and inhibit the formation of potentially carcinogenic HCAs." << endl;
		cout << "Tip 5: " << endl;
		cout << "The best way to know if your food is fully done is to check its internal temperature with an instant-read thermometer" << endl;
		cout << "Tip 6: " << endl;
		cout << "Use a grill basket for foods that might fall through the grill rack or are too cumbersome to turn over one by one" << endl;
		cout << "Tip 7: " << endl;
		cout << "To reduce flare-ups, select lean cuts of meat, trim excess fat and remove poultry skin." << endl;
		cout << "Tip 8" << endl;
		cout << "Let finished meats rest on a clean platter, tented with foil, for about 10 minutes to allow juices to redistribute evenly" << endl;

	}
	// Tips found from http://www.bonappetit.com/test-kitchen/cooking-tips/article/make-baked-good-better
	else if(choice == 3)
	{
		cout << "Tip 1: " << endl;
		cout << "Use Room-Temperature Ingredients" << endl;
		cout << "Tip 2: " << endl;
		cout << "Make sure your ingredients are also the same temperature" << endl;
		cout << "Tip 3: " << endl;
		cout << "Invest in Quality Bakeware" << endl;
		cout << "Tip 4: " << endl;
		cout << "Butter and flour your pans generously." << endl;
		cout << "Tip 5: " << endl;
		cout << "Weign ingredients" << endl;
		cout << "Tip 6: "<< endl;
		cout << "Toss the old stuff" << endl;
		cout << "Tip 7: " << endl;
		cout << "Take your time to fully complete each step" << endl;
		cout << "Tip 8: " << endl;
		cout << "Use salt" << endl;
		cout << "Tip 9: " << endl;
		cout << "Rotate halfway through" << endl;
		cout << "Tip 10: " << endl;
		cout << "Don't mess with oven temperature and cooking time" << endl;
		cout << "Tip 11: " << endl;
		cout << "Let it cool completely" << endl;
		cout << "Tip 12" << endl;
		cout << "Use substitutions at your own risk" << endl;
	}
	// Tips found from http://www.thekitchn.com/avoid-the-5-most-common-mistakes-when-cooking-meat-on-the-stovetop-tips-from-the-kitchn-208512
	else if(choice == 4)
	{
		cout << "Tip 1: " << endl;
		cout << "While cooking meat on the stove, avoid adding meat to the pan too soon. Wait for the pan to be piping hot." << endl;
		cout << "Tip 2: " << endl;
		cout << "While cooking meat on the stove, avoid flipping the meat too soon and avoid moving the meat around the pan too much. " << endl;
		cout << "Tip 3: " << endl;
		cout << "While cooking pasta, when the water starts boiling, lower the flame so that the bubbles are small." << endl;
		cout << "Tip 4: " << endl;
		cout << "While cooking pasta, don't boil pasta in a covered pot or it will quickly overflow." << endl;
		cout << "Tip 5: " << endl;
		cout << "While cooking pasta, get pasta sauce on the pasta immediately after you drain it." << endl;
		cout << "Tip 6: " << endl;
		cout << "For cooking vegetables on a stove, fill pan with approximately 1 inch of water and bring to a boil." << endl;
		cout << "Tip 7: " << endl;
		cout << "For cooking pancakes on a stove, use a wide heavy-bottomed pan." << endl;
	}
	else
	{
		cout << "Error: Invalid Input" << endl;
	}
	return 0;
}



