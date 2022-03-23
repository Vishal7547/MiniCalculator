#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void display();                    //function declaration
int result(float x,char z,float y);  //function declaration
void finalResult(float a);            //function declaration
int main(){
    float var1;
    float var2;
    char operator;
    float ans;
    display();                         // display function call
    scanf("%f%c%f",&var1,&operator,&var2);
   ans= result(var1,operator,var2);    // result function call
   finalResult(ans);                      //finalResult function is call

}

//---------------------------------Function definition-------------------------------------------------
int result(float x,char z,float y)  {
    float answer;
     switch(z){
        case '+':
        answer = x+y;
        break;

         case '-':
        answer = x-y;
        break;
        

         case '*':
        answer = x*y;
        break;
        

         case '/':
        answer = x/y;
        break;
        

         case '^':
        answer = pow(x,y);
        break;
        

      //    case '%':
      //   answer = x%y;
      //   break;

     }     
     return answer;         
     
}


////////////----------------------definition of display function-----------------------------

void display(){
   

   printf("\n\n\tMini calculator\n\n");
   printf("\tEnter value one value 2 with mathematical operator like 2+5\n\n");
   

  
}

//----------------------------------definition of finalResult -------------------------
void finalResult(float a){
    printf("\tAnswer is: %f ",a);
}


