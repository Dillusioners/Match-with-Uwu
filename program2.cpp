# include <iostream>
# include <map>

/*
	Team: Dillusioners
	Made By: LeeTuah
	For: Duel against UwU
*/


int main(int argc, char const *argv[]){
	int tree_count, fruit_count, total_fruits = 0, unhealthy_count;

	std::cout << "\n\n\t\tDillusioners Old Man Helper\n\n";
	std::cout << "How many trees are there in the garden?: "; // asking for tree count
	std::cin >> tree_count;

	if(tree_count <= 0){
		std::cout << "[Program] Why are you counting fruits if there are no trees?\n";
		return 0;
	}
	else if(tree_count > 100){
		std::cout << "[Program] Sorry Old Man! We don't have that many trees in my Garden.\n";
		return 0;
	}

	// asking for fruit count
	for(int i = 0; i != tree_count; i++){
		std::cout << "Enter the number of fruits for tree #" << i+1<< ": ";
		std::cin >> fruit_count;
		if(fruit_count <= 0){
			std::cout << "[Program] There are no fruits in this tree. Why bother counting it?\n";
			fruit_count = 0;
		}
		else if(fruit_count > 1000){
			std::cout << "[Program] Sorry Man but we don't have so many fruits in a single tree!\n";
			fruit_count = 1000;
		}
		total_fruits += fruit_count;
	}

	// asking for unhealthy fruit count
	std::cout << "How many unhealthy fruits are there? ";
	std::cin >> unhealthy_count;

	if(unhealthy_count > total_fruits){
		std::cout << "[Program] How do you have more unhealthy fruits than healthy fruits?\n[Program] Considering unhealthy fruits as 0";
		unhealthy_count = 0;
	}

	total_fruits -= unhealthy_count;

	std::cout << "[Program] These are how many trees in this garden: " << total_fruits << '\n';

	return 0;
}
