

#include <iostream>

using namespace std;

int main()
{
	int num;
	int len,i,j,k;
	char str[100];
	char *p;
	cin >> num;

	while (num--)
	{
		cin >> str;
		i=0;
		len = strlen(str);
		k = len/8;

		while(i<k)
		{
			for (j=0;j<8;j++)
			{
				cout << str[j];
			}
			i++;
			cout << endl;
		}
		k = len%8;
		while (k)
		{
			cout << str[len-k];
			k--;
		}
		if(len%8)
		{
			for (j=len%8;j<8;j++)
			{
				cout << '0';
			}
			cout << endl;
		}

	}

	return 0;
}

