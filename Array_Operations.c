#include <stdio.h>
int main()
{
     int size,operation,insert_element,insert_location,delete_option,delete_element,delete_location,search_element,search_flag,sort_option,exit_flag=0;
     printf("Enter the total number of elements : ");
     scanf("%d",&size);
     int array[size];
     printf("Enter the elements : ");
     for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    while(1)
    {
        printf("\nWhich array operation would you like to perform?\n");
        printf("1 :- Print all elements \n2 :- Insert new element \n3 :- Delete existing element \n4 :- Search an element \n5 :- Sort the elements \n6 :- Complete the process \nEnter your choice : ");
        scanf("%d",&operation);
        switch (operation)
        {
        case 1:
            printf("\n\nPRINT ALL ELEMENTS.\n");
            for(int i=0;i<size;i++)
                {
                    printf("%d\t",array[i]);
                }
                printf("\n\nPRINT SUCCESSFUL.\n\n\n");
            break;

        case 2:
            printf("\n\nINSERT NEW ELEMENT.\n");
            printf("Enter the elemant to insert : ");
            scanf("%d",&insert_element);
            printf("Enter the location to insert the element : ");
            scanf("%d",&insert_location);
            if(insert_location>0 && insert_location<=size+1)
            {
                size++;
                insert_location--;
                for(int i=size;i>insert_location;i--)
                {
                    array[i]=array[i-1];
                }
                array[insert_location]=insert_element;
                printf("\nINSERTION SUCCESSFUL.\n\n\n");
            }
            else
            {
                printf("\nINSERTION UNSUCCESSFUL.\n\n\n");
            }
        break;
            
        case 3:
            printf("\n\nDELETING EXISTING ELEMENT.\n\n");
            printf("Which one do you prefer?\n1 :- Element wise deletion\n2 :- Position wise deletion\nChoose : ");
            scanf("%d",&delete_option);
            if (delete_option==1)
            {
                printf("Enter the element to delete : ");
                scanf("%d",&delete_element);
                for(int i=0;i<size;i++)
                {
                    if (array[i]==delete_element)
                    {
                        int temp=i;
                        while(temp<size)
                        {
                            array[temp]=array[temp+1];
                            temp++;
                        }
                        size--;
                        printf("\nDELETION SUCCESSFUL.\n\n\n");
                    }
                }
            }   
            else if(delete_option==2)
            {
                printf("Enter the location to delete the elemant : ");
                scanf("%d",&delete_location);
                delete_location--;
                for(int i=delete_location;i<size;i++)
                {
                    array[i]=array[i+1];
                }
                size--;
                printf("\nDELETION SUCCESSFUL.\n\n\n");
            }
            else
            {
                printf("\nINVALID OPTION!!! \nDELETION UNSUCCESSFUL.\n\n\n");
            }
        break;
                
        case 4:
            printf("\n\nSEARCH AN ELEMENT.\n");
            printf("Enter the element to search : ");
            scanf("%d",&search_element);
            search_flag=0;
            for(int i=0;i<size;i++)
            {
                if(array[i]==search_element)
                {
                    printf("%d found in position %d\n",search_element,i+1);
                    search_flag=1;
                }
            }
            if(search_flag==0)
            {
                printf("\nSEARCH UNSUCCESSFUL. ELEMENT NOT FOUND.");
            }
            printf("\n\n\n");
        break;

        case 5:
            printf("\n\nSORT THE ELEMENTS.\n");
            printf("Select the sorting order \n1 :- Ascending Order\n2 :- Descending Order \nChoose : ");
            scanf("%d",&sort_option);
            if(sort_option==1)
            {
                for(int i=0;i<size-1;i++)
                {
                    for(int j=i+1;j<size;j++)
                    {
                        if(array[i]>array[j])
                        {
                            array[i]=array[i]+array[j];
                            array[j]=array[i]-array[j];
                            array[i]=array[i]-array[j];
                        }
                    }
                }
                printf("\nSORT SUCCESSFUL.\n\n\n");
            }
            else if(sort_option==2)
            {
                for(int i=0;i<size-1;i++)
                {
                    for(int j=i+1;j<size;j++)
                    {
                        if(array[i]<array[j])
                        {
                            array[i]=array[i]+array[j];
                            array[j]=array[i]-array[j];
                            array[i]=array[i]-array[j];
                        }
                    }
                }
                printf("\nSORT SUCCESSFUL.\n\n\n");
            }
            else
            {
                printf("\nINVALID OPTION!!! \nSORT UNSUCCESSFUL.\n\n\n");
            }
        break;

        case 6:
            printf("\n\nPROCESSING.....\n");
            exit_flag=1;
        break;

        default:
            printf("\nINVALID OPTION!!!");
        break;
        }
        if(exit_flag==1)
        {
            printf("\nFinal Elements :- \n");
             for(int i=0;i<size;i++)
                {
                    printf("%d\t",array[i]);
                }
                printf("\n\nPROCESS SUCCESSFUL.\n\n\n");
            break;
        }
    }
    return 0;
}