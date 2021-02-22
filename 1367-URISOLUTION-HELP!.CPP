#include <bits/stdc++.h>
using namespace std;

int ami[26];
int tmi[26];

int main()
{
	int n, t, a, s, p;
	char c, str[20];

	while(scanf("%d", &n) && n)
	{
		s = 0; p = 0;
		memset(ami, 0, sizeof(ami));
		memset(tmi, 0, sizeof(tmi));
  while(n--)
		{
			getchar();
			scanf("%c %d %s", &c, &t, &str);

			if(strcmp("correct", str) == 0 && tmi[(int)c - 65] == 0)
				tmi[(int)c - 65] = t;

			if(strcmp("incorrect", str) == 0 && tmi[(int)c - 65] == 0)
				ami[(int)c - 65] += 20;
		}

		for (a = 0; a < 26; a++)
		{
			if(tmi[a] != 0){
				s++;
				p += (tmi[a] + ami[a]);
			}
		}

		printf("%d %d\n", s, p);
	}

	return 0;
}
