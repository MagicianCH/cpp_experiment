#include <iostream>
using namespace std;

int main()
{
	char b[10][100];
	for (int i = 0; i<10; i++)
	{gets(b[i]);
	}
	char *t;
	int j;
	for (int i = 1; i<10; i++){
			{ for (int j = 1; j<10; j++)
				if (strcmp(b[i], b[j])<0)
					strcpy(t, b[i]);
			strcpy(b[i], b[j]);
			strcpy(b[j], t); }
	}
	cout << b[10][100] << endl;
	return 0;
}
