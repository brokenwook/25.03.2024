#include <iostream>
#include <vector>

std::vector<int> create_arr()
{
	int num;
	std::vector <int> arr;
	std::cout << "Enter number " << std::endl;
	std::cin >> num;

	for (int i = 0; i <= num; i++)
	{
		arr.push_back(i);
	}
	
	return arr;
}

int main()
{
	std::vector<int>res_arr = create_arr();
	
	for (int i = 0; i < res_arr.size(); i++)
	{
		std::cout << res_arr[i] << " ";
	}
}
