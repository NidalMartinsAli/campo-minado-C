#include <stdio.h>

int main()
{
	int i,j,m,n,aux=1;
	char kaboom [100][100];
	
	while (scanf("%d %d", &m, &n) !=EOF) {
		 if(n==0 || m==0) break;
		
		for (i=1;i<=m;i++) {
			
			for (j=1;j<=n;j++) {
				scanf (" %c", &kaboom[i][j]);
			}
		}
		
		for (i=1;i<=m;i++) {
			
			for (j=1;j<=n;j++) {
					
					if (kaboom[i][j] != 42) {
						kaboom[i][j]= 48;
					}
				}	
			}
		
		
		for (i=1;i<=m;i++) {
			
			for (j=1;j<=n;j++) {
					
					if (kaboom[i][j] == 42) {
						
						if (kaboom [i-1][j-1]!=42) {
							kaboom [i-1][j-1]++;
						}
						if (kaboom [i-1][j]!=42) {
							kaboom [i-1][j]++;
						}
						if (kaboom [i-1][j+1]!=42) {
							kaboom [i-1][j+1]++;
						}
						if (kaboom [i][j-1]!=42) {
							kaboom [i][j-1]++;
						}
						if (kaboom [i][j+1]!=42) {
							kaboom [i][j+1]++;
						}
						if (kaboom [i+1][j-1]!=42) {
							kaboom [i+1][j-1]++;
						}
						if (kaboom [i+1][j]!=42) {
							kaboom [i+1][j]++;
						}
						if (kaboom [i+1][j+1]!=42) {
							kaboom [i+1][j+1]++;
						}
					}
				}
			}
	
			printf ("Field #%d:\n",aux);	
			
			for (i=1;i<=m;i++) {
				for (j=1;j<=n;j++) {
				 printf ("%c", kaboom[i][j]);
				 }
				printf ("\n");
			}
			aux++;
			printf ("\n");	
		}
	
	return 0;
}

