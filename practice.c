// #include <stdio.h>
// #include <stdlib.h>
// #define maxsize 5
// void insert();
// void delete ();
// void display();
// int front = -1, rear = -1;
// int queue[maxsize];
// void main()
// {
//     int choice;
//     while (choice != 4)
//     {

//         printf("1.insert an element\n");
//         printf("2.Delete an element\n");
//         printf("3.Display the queue\n");
//         printf("4.Exit\n");
//         printf("\nEnter your choice ?");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             insert();
//             break;
//         case 2:
//             delete ();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             exit(0);
//             break;
//         default:
//             printf("\nEnter valid choice??\n");
//         }
//     }
// }
// void insert()
// {
//     int item;
//     printf("\nEnter the element\n");
//     scanf("\n%d", &item);
//     if (rear == maxsize - 1)
//     {
//         printf("\nOVERFLOW\n");
//         return;
//     }
//     if (front == -1 && rear == -1)
//     {
//         front = 0;
//         rear = 0;
//     }
//     else
//     {
//         rear = rear + 1;
//     }
//     queue[rear] = item;
//     printf("\nValue inserted ");
// }
// void delete ()
// {
//     int item;
//     if (front == -1 || front > rear)
//     {
//         printf("\nUNDERFLOW\n");
//         return;
//     }
//     else
//     {
//         item = queue[front];
//         if (front == rear)
//         {
//             front = -1;
//             rear = -1;
//         }
//         else
//         {
//             front = front + 1;
//         }
//         printf("\nvalue deleted ");
//     }
// }

// void display()
// {
//     int i;
//     if (rear == -1)
//     {
//         printf("\nEmpty queue\n");
//     }
//     else
//     {
//         printf("\nprinting values .....\n");
//         for (i = front; i <= rear; i++)
//         {
//             printf("\n%d\n", queue[i]);
//         }
//     }
// }


// #include<stdio.h>
// #include<stdlib.h>
// #define cap 5
// void insert();
// int front = -1, rear = -1;
// int queue[cap];
// void main()
// {
//     int item;
//     printf("\n Enter the element : ");
//     scanf("\n%d",&item);
   
//     if(front == -1 && rear == -1)
//     {
//         front = 0;
//         rear = 0;
//     }
//     else
//     {
//         rear = rear+1;
//     }
//     queue[rear] = item;
//     printf("\n Value is inserted. ");
//     return 0;
// }


