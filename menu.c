#include <stdio.h>
int main()
{
    int item=0,qty,qty1,qty2,qty3,qty4,cost,total;
    qty=qty1=qty2=qty3=qty4=total=0;
    float gst;
    printf("=============SRS's Cafe=============\n");
    printf("\n");
    printf("-Code-        -Item-        -Price-\n");
    printf("\n");
    printf(" 1            Coffee           30\n");
    printf(" 2             Tea             25\n");
    printf(" 3            Biscuits         10\n");
    printf(" 4            Cookie           15\n");
    printf(" 5             Exit           xxx\n");

    while(item!=5)
    {   printf("Select Items: \n");
        scanf("%d",&item);

        switch (item)
        {
        case 1:
            {
                cost=30;
                printf("You have chosen Coffee\n");
                printf("Quantity: ");
                scanf("%d",&qty);
                qty1=qty+qty1;
                cost=cost*qty;
                total=total+cost;
            }
            break;

         case 2:
            {
                cost=25;
                printf("You have chosen Tea\n");
                printf("Quantity: ");
                scanf("%d",&qty);
                qty2=qty+qty2;
                cost=cost*qty;
                total=total+cost;
            }
            break;

         case 3:
            {
                cost=10;
                printf("You have chosen Biscuits\n");
                printf("Quantity: ");
                scanf("%d",&qty);
                qty3=qty+qty3;
                cost=cost*qty;
                total=total+cost;
            }
            break;

         case 4:
            {
                cost=15;
                printf("You have chosen Cookie\n");
                printf("Quantity: ");
                scanf("%d",&qty);
                qty4=qty+qty4;
                cost=cost*qty;
                total=total+cost;
            }
            break;

         case 5:
            {
               printf("Exit:\n"); 
            }   
            break;

            
         default:
         {
            printf("-- Invalid Choice =( --\n");
            printf("- Please try again =D -\n");
         }  
          break;
        }
    }
    if (total>0)
    {
     printf("Item      qty      cost\n");
     if (qty1>0)
     {
        printf("Coffee     %d       %d\n",qty1,qty1*30);
     }
     if (qty2>0)
     {
        printf("Tea        %d       %d\n",qty2,qty2*25); 
     }
     if (qty3>0)
     {
        printf("Biscuits   %d       %d\n",qty3,qty3*10); 
     }
     if (qty4>0)
     {
        printf("Cookie     %d       %d\n",qty4,qty4*15); 
     }
     printf("\n");
     printf("Total:            %d\n",total);
     gst=(total*18/100);
     printf("GST:              %g\n",gst);
     printf("Grand Total:      %g",total+gst); 
     printf("\n");
     printf("Thank you!! Visit Again!!\n");
    }
    else
    printf("Thank you!! Visit Again!!\n");

    return 0;
}