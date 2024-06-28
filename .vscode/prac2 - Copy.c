#include<stdio.h>

float circlearea(float radius);
float rectanglearea(float length,float breadth);
float squarearea(float side);

int main(){
    float length,breadth,side,radius;
    scanf("%f",&side);
    
    scanf("%f",&radius);
     printf("%f\n",squarearea(side));
     printf("%f\n",circlearea(radius));
     
    return 0;
}
float circlearea(float radius){
    return 3.14*radius*radius;
}
float rectanglearea(float length,float breadth){
      return length*breadth;
}
float squarearea(float side){
    return side*side;
}