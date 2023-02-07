 #include <stdio.h>

  int fib(int n) {
        int n1 = 0, n2 = 1, temp, temp = 0;
        
        if (n == n1 || n == n2) 
        {
                return 1;
        }

       
        while (n2 <= n) {
                temp = n2;
                n2 = n1 + n2;
                n1 = temp;
                if (n2 == n) 
                {
                        return 1;
                }
        }

        return 0;
  }

  int main() 
  {
        int  n, flag;
        printf("Enter the value for n:");
        scanf("%d", &n);
        
        for (int i = 1; i <= n; i++) 
        {
                flag = fib(i);
                if (!flag)
                        printf("%d ", i);
        }

        printf("\n");
        return 0;
  }

