#include<studio.h>
int main()
{
   //1.Display the menu
   Printf("pick an item:\n1.pen\n2.pencil\n3.eraser\n4.book");
  //2.read their choice
    int choice=0;
    Scanf("%d",&choice);
  //3.Display based on their choice
    Switch(choice)
    {
      Case 1:
           Printf("you picked pen.");
           break;
      Case 2:
           Printf("you picked pencil.");
           break;
     Case 3:
           Printf("you picked eraser.");
           break;
     Case 4:
           Printf("you picked book.");
           break;
     default:printf("Invalid choice");
     }
}
