// To check wheather a triangle is Acute or Right-angled or Obstuse

// Variable declarations
// s1, s2 and s3 are going to store user inputs and will be used as sides of triangle
#include <stdio.h>
int s1, s2, s3, flag = 0;
int bigger_btn_3(int s1, int s2, int s3); //For checking which side is bigger
int acute_triangle(int s1, int s2, int s3); // For checking acute triangle or not
int right_angled_triangle(int s1, int s2, int s3); // For checking right-angled triangle or not
int obtuse_triangle(int s1, int s2, int s3); // For checking obtuse triangle or not

int main() {
    printf("Enter the sides of the triangle:- ");
    scanf("%d %d %d", &s1, &s2, &s3);
    printf("\n\nChecking it's a valid triangle or not...\n\n");
    bigger_btn_3(s1, s2, s3);
    switch (flag) {
        case 0: //
        return 0;
        break;
        case 1: //s1 is greater
        acute_triangle(s1, s2, s3);
        right_angled_triangle(s1, s2, s3);
        obtuse_triangle(s1, s2, s3);
        break;
        case 2: //s2 is greater
        acute_triangle(s2, s1, s3);
        right_angled_triangle(s2, s1, s3);
        obtuse_triangle(s2, s1, s3);
         break;
        case 3: //s3 is greater
        right_angled_triangle(s3, s2, s1);
        acute_triangle(s3, s2, s1);
        obtuse_triangle(s3, s2, s1);
         break;
        default:
        return 0;  
    }
}

int bigger_btn_3(int s1, int s2, int s3) { 
    if(s1>s2 && s1>s3) {
        //s1 is greater
        (s1<(s2+s3))? printf("Yeah it's a valid triangle\n\n"),flag=1:printf("It's not a valid triangle\nReason:- %d + %d is not bigger than %d",s2,s3,s1);
        
    }
    else if(s2>s3) {
        //s2 is greater
        (s2<(s1+s3))? printf("Yeah it's a valid triangle\n\n"),flag=2:printf("It's not a valid triangle\nReason:- %d + %d is not bigger than %d",s1,s3,s2);
        
    }
    else {
        //s3 is greater
        (s3<(s1+s2))? printf("Yeah it's a valid triangle\n\n"),flag=3:printf("It's not a valid triangle\nReason:- %d + %d is not bigger than %d",s1,s2,s3);
    }
}

int acute_triangle(int s1, int s2, int s3) {
    if (s1*s1<((s2*s2)+(s3*s3)))
    {
        printf("It's an Acute triangle.");
        return 0;
    }
    
}

int right_angled_triangle(int s1, int s2, int s3) {
    if (s1*s1==((s2*s2)+(s3*s3)))
    {
        printf("It's a Right angled triangle.");
        return 0;
    }
    
}
int obtuse_triangle(int s1, int s2, int s3) {
    if (s1*s1>((s2*s2)+(s3*s3)))
    {
        printf("It's an Obtuse triangle.");
        return 0;
    }
    
}

