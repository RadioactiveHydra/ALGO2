// TODO REWRITE

#include "main.h"
#include "utils/math.c"

int main()
{
    double a = 0;
    double b = 0;
    char op[3];
    int on = true;

    printf("Choose a number: ");
    //printf("0");
    
    system("clear");
    scanf("%lf", &a);
    


    //printf("%f %c %f = ", a,op, b);
  do{
      
        
        printf("Choose an operator: ");
        scanf("%1s",op);
        printf("Choose another number: ");
        scanf("%lf", &b);
        
        double result;
        if(strcmp(op, "+") == 0){
            result = add(a,b);
            printf("%.9lf", result);
            a = result;
        }
        else if(strcmp(op, "-") == 0){
            result = subtract(a,b);
            printf("%.9lf", result);
            a = result;
        }
        else if(strcmp(op, "*") == 0){
            result = multiply(a,b);
            printf("%.9lf", result);
            a = result;
        }
        else if(strcmp(op, "/") == 0){
            result = divide(a,b);
            printf("%.9lf", result);
            a= result;
        }
        else if(strcmp(op, "sin") == 0){
            result = sin(b*PI/180);
            printf("%.9lf", result);
            a= result;
        }
        else if(strcmp(op, "cos") == 0){
            result = sin(b*PI/180);
            printf("%.9lf", result);
            a= result;
        }
        else if(strcmp(op, "%") == 0){
            if((float)(int)a != a || (float)(int)b != b){
                printf(YEL "WARNING! MOD CANNOT SUPPORT DECIMALS. CONVERTING TO INTEGER.\n" RESET);
                a = (int)a;
                b = (int)b;
            }
            result = mod(a,b);
            printf("%.9lf", result);
            a= result;
        }

        
  
    //system("clear");
    }while(on == true);
    return 0;
}

// Functions are now defined in math.c