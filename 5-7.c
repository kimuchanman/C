#include <stdio.h>

int main(void)
{
    int x[2][3] = {{1,2,3}, {4, 5, 6}};
    int y[3][2] = {{1, 5}, {5, 3}, {8, 1}};
    int ans[2][2] = {0};
    int i, j, k, temp;
    
    
    for(i = 0; i < 2; i++) {
        for (k = 0; k < 2; k++) {
            temp = 0;
            for(j = 0; j < 3; j++) {
                temp += x[i][j] * y[j][k];
            }
            ans[i][k] = temp;
        }
    }
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%4d",ans[i][j]);
        }
        putchar('\n');
    }
    
    return(0);
}

