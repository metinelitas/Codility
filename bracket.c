/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define LEFT_BRACKET(x) ((x == "(") || (x == "{") || (x == "[")) ? 1 : 0
#define RIGHT_BRACKET(x) ((x == ")") || (x == "}") || (x == "]")) ? 1 : 0


int solution(char *S)
{
    int len = strlen(S);
    if (S < 2)
        return 1;
        
    char Q[strlen];
    int qIndex = 0;
    int x;
    
    for (int i = 0; i < strlen(S); i++) 
    {
        if (LEFT_BRACKET(S[i]))
        {
            Q[qIndex] = S[i];
        }
        else
        {
            if (((Q[qIndex] == "[") && (S[i] == "]")) || ((Q[qIndex] == "[") && (S[i] == "]")) || ((Q[qIndex] == "[") && (S[i] == "]")))
			{
				qIndex--;
			}
			else
			{
				return 0;
			}
			qIndex++;
			
        }
		
    }
}


int main()
{
    char *S = "[]()";
    
    printf("solution:%d",solution(S));
    
    return 0;
}