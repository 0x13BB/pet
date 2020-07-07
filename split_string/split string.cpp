//https://www.codewars.com/kata/515de9ae9dcfc28eb6000001
//Split Strings (6 kyu)
//
//Complete the solution so that it splits the string into pairs of two characters.
//If the string contains an odd number of characters 
//then it should replace the missing second character of the final pair with an underscore('_').
//
//Examples:
//solution("abc") // should return {"ab", "c_"}
//solution("abcdef") // should return {"ab", "cd", "ef"}


#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> solution(const std::string &s)
{
	std::string String = s;
	std::vector<std::string> Vector;
	std::string tail = "_";
	int Size = String.size();

	if (Size % 2 > 0)
	{
		String.append(tail);
		Size += 1;
	}

	for (size_t i = 0; i < Size / 2; i++)
	{
		std::string substr = String.substr(0, 2);
		Vector.push_back(substr);
		String.erase(0, 2);
	}

	return Vector;
}

int main()
{
	std::string S(9, 'z');
	std::vector<std::string> Vec;
	Vec = solution(S);

	for (std::vector<std::string>::iterator i = Vec.begin(); i != Vec.end(); i++)
	{
		std::cout << *i << std::endl;
	}

	std::cin.get();

}
