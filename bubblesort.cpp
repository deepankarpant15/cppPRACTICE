#include <iostream>
using namespace std;
void bubble_sort(int a[], int n) 
{
    int i, j, tmp, flag;
    for (i = 0; i < n; i++)
	{  
		flag =0;
        for (j = 0; j < n - i - 1; j++)
		{
            if (a[j] > a[j + 1])
			{   
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                flag =1;
			}
		}
		if(! flag)
		    break;
	}
}
int main() {
  int n;
  cout << "Enter number of elements in the array:\n";
  cin >> n; 
  int a[n];
  cout << "Enter integers\n";
  for (int i = 0; i < n; i++)
    cin >> a[i];
  bubble_sort(a, n);
  cout << "Printing the sorted array:\n" ;
  for (int i = 0; i < n; i++)
    cout << a[i] << "\n";
}