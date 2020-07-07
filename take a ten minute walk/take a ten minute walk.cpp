//https://www.codewars.com/kata/54da539698b8a2ad76000228
//Take a Ten Minute Walk (6 kyu)
//You live in the city of Cartesia where all roads are laid out in a perfect grid.
//You arrived ten minutes too early to an appointment, so you decided to take the opportunity to go for a short walk.
//The city provides its citizens with a Walk Generating App on their phones -- everytime you press the button 
//it sends you an array of one - letter strings representing directions to walk(eg.['n', 's', 'w', 'e']).
//You always walk only a single block in a direction and you know it takes you one minute to traverse one city block, 
//so create a function that will return true if the walk the app gives you will take you exactly ten minutes
//(you don't want to be early or late!) and will, of course, return you to your starting point. Return false otherwise.
//
//Note: you will always receive a valid array containing a random assortment of direction letters ('n', 's', 'e', or 'w' only). 
//It will never give you an empty array (that's not a walk, that's standing still!).






#include <vector>
#include <iostream>



bool isValidWalk(std::vector<char> walk)
{
	bool Result = false;
	int Size = walk.size();
	
	int N_S_Counter = 0;
	int W_E_Counter = 0;



	for (size_t i = 0; i < Size; i++)
	{
		if (walk[i] == 'n')
		{
			N_S_Counter += 1;
		}

		if (walk[i] == 's')
		{
			N_S_Counter -= 1;
		}

		if (walk[i] == 'w')
		{
			W_E_Counter += 1;
		}

		if (walk[i] == 'e')
		{
			W_E_Counter -= 1;
		}


	}

	if (Size == 10 and N_S_Counter == 0 and W_E_Counter == 0)
	{
		Result =  true;
	}

	return Result;
}

int main()
{
	std::vector<char> V1 = { 'n','s','e','w','n','s','e','w','n','n' };
	std::vector<char> V2 = { 's','e','w','n','n','s','e','w','n','s' };

	std::cout << isValidWalk(V1) << " " << isValidWalk(V2) << std::endl;

	std::cin.get();
}