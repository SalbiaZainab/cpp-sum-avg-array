#include <iostream>
using namespace std;
int main()
{
	int arr[4] = {1,13,12,6};
	int sum = 0;
	
	for(int i = 0; i < 4; i++)
	{
		sum = sum + arr[i];
	}
	float avg = (float)sum / 4;
	cout << "Sum: " << sum << endl;
	cout << "Average: " << avg << endl;
	return 0;
}
