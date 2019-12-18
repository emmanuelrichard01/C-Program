#include<stdio.h>
int main()
{
    int level = 0;
    char dept = ' ';
    printf("Enter your Level: ");
    scanf("%d",&level);
    printf("Enter your Department: ");
    scanf("%c",&dept);

    //Start of Switch
    switch(level)
    {
    case 100:
        printf("You Offer: \n English, Maths and Science");
        break;
    //Start of Inner Switch
    case 200:
        //Case 200
        scanf("%c",&dept);
        switch(dept)
        {
        case 'C':
            printf("You Offer: \n Operating System, Java and Data Structure");
            break;
        case 'E':
            printf("You Offer: \n Microprocessing and Logic Switching theory");
            break;
        case 'M':
            printf("You Offer: \n Drawing and Manufacturing Machine");
            break;
        default:
            printf("You have not chosen a department, C, E or M...");
        }
        break;
    //Case 300
    case 300:
        scanf("%c",&dept);
        switch(dept)
        {
        case 'C':
            printf("You Offer: \n Computer Organization and Multimedia");
            break;
        case 'E':
            printf("You Offer: \n Fundamental of Logic Design and Microelectronics");
            break;
        case 'M':
            printf("You Offer: \n Internal Combustion Engine and Mechanical Vibration");
            break;
        default:
            printf("You have not chosen a department, C, E or M...");
        }
        break;
    //Case 400
    case 400:
        scanf("%c",&dept);
        switch(dept)
        {
        case 'C':
            printf("You Offer: \n Data Communication and Networking Multimedia");
            break;
        case 'E':
            printf("You Offer: \n Embedded System and image processing");
            break;
        case 'M':
            printf("You Offer: \n Production Technology and Thermal Engineering");
            break;
        default:
            printf("You have not chosen a department, C, E or M...");
        }
        break;
    //End of Inner Switch
    default:
        printf("You have inputed a wrong level, please enter a valid level 100, 200, 300 or 400.....");
        //End of Switch
    }
    return 0;
}
