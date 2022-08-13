//11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33.\
 Now display whether the candidate passed the examination or failed.
 #include<stdio.h>
 void main()
 {
     int s[5];
     for(int i=0;i<5;++i)
     {
         scanf("%d",&s[i]);
     }
     int cnt=0;
     for(int i=0;i<5;++i)
     {
         if(s[i]<33)
            ++cnt;
     }
     if(cnt==0)
        printf("student has passed the test");
     else
        printf("student has failed the test");
 }
