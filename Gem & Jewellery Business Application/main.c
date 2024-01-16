
#include<stdio.h>
#include<stdlib.h>


float madus;

struct variables
{
    float buying;
    float selling;
    float gems;
    float jwelleries;
    float price;
    float bill;

}

selling,buying, Ruby, Spinel, Sunstone, Tanzanite, Citrine,Earrings,Necklaces,Bracelets,RIngs,Pendents;


void compname()
{
    printf("\n\n                                             RASHIDA GEMS & JEWELLERY\n\n ");
    printf("   No.235,\n");
    printf("    Hikkaduwa,\n");
    printf("    Galle");
    printf("\n______________________________________________________________________________________________________________________");
    printf("\n\n");
}


void mainmenu()
{
    system("COLOR F0");
    int choice = 0;

    system("cls");
    compname();

    reenterchoice:
    printf("\n\t[1] -> Purchase \n\t[2] -> Sale \n\t[3] -> Update price of items\n\t[4] -> Exit the system\n");
    printf("\n\tEnter your choice : ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        purchasemenue();
    }
    else if(choice == 2)
    {
        salesmenu();
    }
    else if(choice == 3)
    {
        updateprice();
    }
    else if(choice == 4)
    {
        printf("\n\n\tThank you for using our system\n\n");
    }
    else
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto reenterchoice;
    }
}


void purchasemenue()
{
    int choice = 0;

    system("cls");
    compname();

    printf("\n\tYou are in the purchas portal\n");

    reenterchoice:
    printf("\n\t[1] -> Buying jewelleries \n\t[2] -> Buying gems \n\t[3] -> Return main menu");
    printf("\n\n\tEnter your choice : ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        buyingjwellaries();
    }
    else if(choice == 2)
    {
        buyinggems();
    }
    else if(choice == 3)
    {
        mainmenu();
    }
    else
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto reenterchoice;
    }
}


void buyingjwellaries()

{
    int choice = 0;
    int choiceCarat = 0;
    int quantity = 0;
    float tot = 0;

    system("cls");
    compname();

    printf("\n\tYou are in jwellery Buying portal\n\n");

    reenterchoice:
    printf("\n\t[1] -> Earrings \n\t[2] -> Necklaces\n\t[3] -> Bracelets \n\t[4] -> RIngs \n\t[5] -> Pendents \n\t[6] -> Return to purchas menu\n\n");
    printf("\tEnter your choice : ");
    scanf("%d",&choice);

    if(choice == 6)
    {
        purchasemenue();

    }
    else if(choice>6)
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto reenterchoice;
    }

    printf("\n\tEnter the qunatity : ");
    scanf("%d",&quantity);

    lable:
    printf("\n\t[1] -> 22K \n\t[2] -> 24K \n\n\tEnter your choice : ");
    scanf("%d",&choiceCarat);

    if(choiceCarat>2)
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto lable;
    }

    system("cls");
    compname();

    if(choice == 1 && choiceCarat == 1)
    {
        tot = Earrings.price * quantity;
        madus = Earrings.price;
    }
    else if(choice == 1 && choiceCarat == 2)
    {
        tot = (Earrings.price*1.5) * quantity;
        madus = Earrings.price*1.5;
    }
    else if(choice ==2 && choiceCarat == 1)
    {
        tot = Necklaces.price* quantity;
        madus = Necklaces.price;
    }
    else if(choice ==2 && choiceCarat == 2)
    {
        tot = (Necklaces.price*1.5) * quantity;
        madus = Necklaces.price*1.5;
    }
    else if(choice == 3 && choiceCarat == 1)
    {
        tot = Bracelets.price * quantity;
        madus = Bracelets.price;
    }
    else if(choice == 3 && choiceCarat == 2)
    {
        tot = (Bracelets.price*1.5) * quantity;
        madus = Bracelets.price*1.5;
    }
    else if(choice == 4 && choiceCarat == 1)
    {
        tot = RIngs.price * quantity;
        madus = RIngs.price;
    }
    else if(choice == 4 && choiceCarat ==2)
    {
        tot = (RIngs.price*1.5) * quantity;
        madus = RIngs.price*1.5;
    }
    else if(choice == 5 && choiceCarat == 1)
    {
        tot = Pendents.price * quantity;
        madus = Pendents.price;
    }
    else if(choice == 5 && choiceCarat == 2)
    {
        tot = (Pendents.price*1.5) * quantity;
        madus = Pendents.price*1.5;
    }
    else
    {

    }

    printf("price = %f qty = %d",madus,quantity);
    system("pause");

    system("cls");
    compname();

    printf("\n\tYour Bill is : %.2f\n\n",tot);

    lable11:
    printf("\n\tIf you wish to sell another item please enter your choice");
    printf("\n\t[1] -> main menue\n\t[2] -> exit");
    printf("\n\n\tEnter your choice : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        mainmenu();
    }
    else if(choice>2)
    {
        system("cls");
        compname();

        printf("\tInvalid input try again !\n\n");
        goto lable11;
    }
    else
    {
        printf("\n\n\tThank you for using our system\n\n");
    }

}


void buyinggems()
{
    int choice = 0;
    int choiceCarat = 0;
    int quantity = 0;
    float tot = 0;

    system("cls");
    compname();

    printf("\n\tYou are in Gems Buying portal\n\n");

    reenterchoice:
    printf("\t[1] -> Ruby \n\t[2] -> Spinel \n\t[3] -> Sunstone \n\t[4] -> Tanzanite \n\t[5] -> Citrine \n\t[6] -> Return to sales menu\n\n");
    printf("\tEnter your choice : ");
    scanf("%d",&choice);

    if(choice == 6)
    {
        purchasemenue();
    }
    else if(choice>6)
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto reenterchoice;
    }

    printf("\n\tEnter the qunatity : ");
    scanf("%d",&quantity);

    lable:
    printf("\n\t[1] -> 22K \n\t[2] -> 24K \n\n\tEnter your choice : ");
    scanf("%d",&choiceCarat);

    if(choiceCarat>2)
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto lable;
    }
    else
    {

    }

    system("cls");
    compname();

    if(choice == 1 && choiceCarat==1)
    {
        tot = Ruby.price * quantity;
        madus = Ruby.price;
    }
    else if(choice == 1 && choiceCarat == 2)
    {
        tot = (Ruby.price*1.5) * quantity;
        madus = Ruby.price*1.5;
    }
    else if(choice ==2 && choiceCarat == 1)
    {
        tot = Spinel.price * quantity;
        madus = Spinel.price;
    }
    else if(choice ==2 && choiceCarat == 2)
    {
        tot = (Spinel.price*1.5) * quantity;
        madus = Spinel.price*1.5;
    }
    else if(choice == 3 && choiceCarat == 1)
    {
        tot =   Sunstone.price * quantity;
        madus = Sunstone.price;
    }
    else if(choice == 3 && choiceCarat == 2)
    {
        tot = (Sunstone.price*1.5) * quantity;
        madus = Sunstone.price*1.5;
    }
    else if(choice == 4 && choiceCarat == 1)
    {
        tot = Tanzanite.price * quantity;
        madus = Tanzanite.price;
    }
    else if(choice == 4 && choiceCarat == 2)
    {
        tot = (Tanzanite.price*1.5)*quantity;
        madus =  Tanzanite.price*1.5;
    }
    else if(choice == 5 && choiceCarat == 1)
    {
        tot = Citrine.price * quantity;
        madus = Citrine.price;
    }
    else if(choice == 5 && choiceCarat == 2)
    {
        tot = (Citrine.price*1.5) * quantity;
        madus = Citrine.price*1.5;
    }
    else if(choice == 6)
    {
        purchasemenue();
    }

    else if(choice>6)
    {
        system("cls");
        compname();

        printf("\tInvalid input try again !\n\n");
        goto reenterchoice;
    }
    else
    {

    }

    printf("price = %f qty = %d",madus,quantity);
    system("pause");

    system("cls");
    compname();

    printf("\n\tYour Bill is : %.2f\n\n",tot);


    lable11:
    printf("\n\tIf you wish to sell another item please enter your choice");
    printf("\n\t[1] -> main menue\n\t[2] -> exit");
    printf("\n\n\tEnter your choice : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        mainmenu();
    }
    else if(choice>2)
    {
        system("cls");
        compname();

        printf("\tInvalid input try again !\n\n");
        goto lable11;

    }
    else
    {
        printf("\n\n\tThank you for using our system\n\n");
    }

}


void salesmenu()
{
    int choice = 0;

    system("cls");
    compname();

    printf("\n\tYou are in the sales portal\n");

    reenterchoice:
    printf("\n\t[1] -> Selling jewelleries \n\t[2] -> Selling gems \n\t[3] -> Return main menu");
    printf("\n\n\tEnter your choice : ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        sellingjwellaries();
    }
    else if(choice == 2)
    {
        sellinggems();
    }
    else if(choice == 3)
    {
        mainmenu();
    }
    else
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto reenterchoice;
    }
}


void sellingjwellaries()
{
    int choice = 0;
    int choiceCarat = 0;
    int quantity = 0;
    float tot = 0;


    system("cls");
    compname();

    printf("\n\tYou are in jwellery selling portal\n\n");

    reenterchoice:
    printf("\n\t[1] -> Earrings \n\t[2] -> Necklaces\n\t[3] -> Bracelets \n\t[4] -> RIngs \n\t[5] -> Pendents \n\t[6] -> Return to sales menu\n\n");
    printf("\tEnter your choice : ");
    scanf("%d",&choice);

    if(choice == 6)
    {
        salesmenu();
    }
    else if(choice>6)
    {
        system("cls");
        compname();

        printf("\tInvalid input try again !\n\n");
        goto reenterchoice;
    }

    printf("\n\tEnter the qunatity : ");
    scanf("%d",&quantity);

    lable:
    printf("\n\t[1] -> 22K \n\t[2] -> 24K \n\n\tEnter your choice : ");
    scanf("%d",&choiceCarat);

    if(choiceCarat>2)
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto lable;
    }
    else
    {

    }

    system("cls");
    compname();


    if(choice == 1 && choiceCarat==1)
    {
        tot = Earrings.price * quantity;
        madus = Earrings.price;
    }
    else if(choice == 1 && choiceCarat == 2)
    {
        tot = (Earrings.price*1.5) * quantity;
        madus = Earrings.price*1.5;
    }
    else if(choice ==2 && choiceCarat == 1)
    {
        tot = Necklaces.price * quantity;
        madus = Necklaces.price;
    }
    else if(choice ==2 && choiceCarat ==2)
    {
        tot = (Necklaces.price *1.5)* quantity;
        madus = Necklaces.price*1.5;
    }
    else if(choice == 3 && choiceCarat == 1)
    {
        tot = Bracelets.price * quantity;
        madus = Bracelets.price;
    }
    else if(choice == 3 && choiceCarat == 2)
    {
        tot = (Bracelets.price*1.5)* quantity;
        madus = Bracelets.price*1.5;
    }
    else if(choice == 4 && choiceCarat == 1)
    {
        tot = RIngs.price * quantity;

        madus = RIngs.price;
    }
    else if(choice == 4 && choiceCarat == 2)
    {
        tot = (RIngs.price *1.5)* quantity;
        madus = RIngs.price*1.5;
    }
    else if(choice == 5 && choiceCarat == 1)
    {
        tot = Pendents.price * quantity;
        madus = Pendents.price;
    }
    else if(choice == 5 && choiceCarat == 2)
    {
        tot = (Bracelets.price*1.5) * quantity;
        madus = Bracelets.price*1.5;
    }
    else if(choice == 6)
    {
        salesmenu();
    }
    else if(choice>6)
    {
        system("cls");
        compname();
        printf("\tInvalid  try again !\n\n");
        goto reenterchoice;
    }


    printf("price = %f qty = %d",madus,quantity);
    system("pause");

    system("cls");
    compname();

    printf("\n\tYour Bill is : %.2f\n\n",tot);

    lable11:
    printf("\n\tIf you wish to sell another item please enter your choice");
    printf("\n\t[1] -> main menue\n\t[2] -> exit");
    printf("\n\n\tEnter your choice : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        mainmenu();
    }
    else if(choice>2)
    {
        system("cls");
        compname();

        printf("\tInvalid input try again !\n\n");
        goto lable11;
    }
    else
    {
        printf("\n\n\tThank you for using our system\n\n");
    }

}


void sellinggems()
{
    int choice = 0;
    int choiceCarat = 0;
    int quantity = 0;
    float tot =0;

    system("cls");
    compname();
    printf("\n\tYou are in gems selling portal\n\n");

    reenterchoice:
    printf("\t[1] -> Ruby \n\t[2] -> Spinel \n\t[3] -> Sunstone \n\t[4] -> Tanzanite \n\t[5] -> Citrine \n\t[6] -> Return to sales menu\n\n");
    printf("\tEnter your choice : ");
    scanf("%d",&choice);

    if(choice == 6)
    {
        salesmenu();
    }
    else if(choice>6)
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto reenterchoice;
    }

    printf("\n\tEnter the qunatity : ");
    scanf("%d",&quantity);

    lable:
    printf("\n\t[1] -> 22K \n\t[2] -> 24K \n\n\tEnter your choice : ");
    scanf("%d",&choiceCarat);

    if(choiceCarat>2)
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto lable;
    }
    system("cls");
    compname();

    if(choice == 1 && choiceCarat == 1)
    {
        tot = Ruby.price * quantity;
        madus = Ruby.price;
    }
    else if(choice == 1 && choiceCarat == 2)
    {
        tot =  (Ruby.price * 1.5) * quantity;
        madus = Ruby.price * 1.5 ;
    }
    else if(choice ==2 && choiceCarat == 1)
    {
        tot = Spinel.price * quantity;
        madus = Spinel.price;
    }
    else if(choice ==2 && choiceCarat == 2)
    {
        tot = (Spinel.price * 1.5) * quantity;
        madus = Spinel.price;
    }
    else if(choice == 3 && choiceCarat == 1)
    {
        tot = Sunstone.price * quantity;
        madus = Sunstone.price;

    }
    else if(choice == 3 && choiceCarat == 2)
    {
        tot = (Sunstone.price * 1.5) * quantity;
        madus = Sunstone.price;
    }
    else if(choice == 4 && choiceCarat == 1)
    {
        tot = Tanzanite.price * quantity;
        madus = Tanzanite.price;
    }
    else if(choice == 4 && choiceCarat == 2)
    {
        tot = (Tanzanite.price * 1.5) * quantity;
        madus = Tanzanite.price;
    }
    else if(choice == 5 && choiceCarat == 1)
    {
        tot = Citrine.price * quantity;
        madus = Citrine.price;
    }
    else if(choice == 5 && choiceCarat == 2)
    {
        tot = (Citrine.price * 1.5) * quantity;
        madus = Citrine.price;
    }
    else if(choice == 6)
    {
        salesmenu();
    }
    else if(choice>6)
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto reenterchoice;
    }

    printf("price = %f qty = %d",madus,quantity);

    system("pause");

    system("cls");
    compname();


    printf("\n\tYour Bill is : %.2f\n\n",tot);
    lable11:
    printf("\n\tIf you wish to sell another item please enter your choice");
    printf("\n\t[1] -> main menue\n\t[4] -> exit");
    printf("\n\n\tEnter your choice : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        system("cls");
        mainmenu();
    }
    else if(choice>4)
    {
        system("cls");
        compname();

        printf("\tInvalid input try again !\n");
        goto lable11;
    }
    else

    {
        printf("\n\n\tThank you for using our system\n\n");
    }
}


void updateprice()
{
    int choice;
    float newPrice = 0;

    system("cls");
    compname();

    reenterchoice:
    printf("\n\tYou are in inventry menu\n\n");
    printf("\n\t[1] -> Update gem price \n\t[2] -> Update jwellery price \n\t[3] -> Main menu\n\n");
    printf("\n\tEnter your choice : ");
    scanf("%d",&choice);
    system("cls");

    compname();

    if(choice == 1)
    {
        reenterchoice10:
        printf("\n\t[1] -> Ruby \n\t[2] -> Spinel \n\t[3] -> Sunstone \n\t[4] -> Tanzanite \n\t[5] -> Citrine \n\t[6] -> Return to salse menu\n\n");
        printf("\n\tEnter your choice : ");
        scanf("%d",&choice);

        printf("\n\tEnter the new price : ");
        scanf("%f",&newPrice);

        if(choice == 1)
        {
            Ruby.price = newPrice;
        }

        else if(choice == 2)

        {
            Spinel.price = newPrice;
        }

        else if(choice == 3)
        {
            Sunstone.price = newPrice;
        }

        else if(choice == 4)

        {
            Tanzanite.price = newPrice;
        }
        else if(choice == 5)
        {
            Citrine.price = newPrice;
        }
        else if(choice == 6)
        {
            updateprice();
        }
        else
        {
            system("cls");
            compname();
            printf("\tInvalid input try again !\n\n");
            goto reenterchoice10;
        }
        system("cls");
        compname();

        printf("\n\tPrice updated succesfully\n\n");

        reenterchoice2:
        printf("\n\t[1] -> To update more price \n\t[2] -> Main menu\n\n ");
        printf("\tEnter your choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            updateprice();
        }
        else if(choice ==2)
        {
            mainmenu();
        }
        else
        {
            system("cls");
            compname();
            printf("\tInvalid input try again !\n\n");
            goto reenterchoice2;
        }
    }
    if(choice == 2)
    {
        printf("\n\t[1] -> Earrings \n\t[2] -> Necklaces\n\t[3] -> Bracelets \n\t[4] -> RIngs \n\t[5] -> Pendents \n\t[6] -> Return to purchas menu\n\n");
        printf("\tEnter your choice : ");
        scanf("%d",&choice);
        printf("\n\tEnter the new price : ");
        scanf("%f",&newPrice);

        if(choice == 1)
        {
            Earrings.price = newPrice;
        }

        else if(choice == 2)

        {
            Necklaces.price = newPrice;
        }

        else if(choice == 3)
        {
            Bracelets.price = newPrice;
        }

        else if(choice == 4)

        {
            RIngs.price = newPrice;
        }
        else if(choice == 5)
        {
            Pendents.price = newPrice;
        }
        else if(choice == 6)
        {
            updateprice();
        }
        else if(choice>5)
        {
            system("cls");
            compname();
            printf("\tInvalid input try again !\n\n");
            goto reenterchoice10;
        }

        system("cls");
        compname();

        printf("\n\tPrice updated succesfully\n\n");

        reenterchoice20:
        printf("\n\t[1] -> To update more price \n\t[2] -> Main menu\n\n ");
        printf("\tEnter your choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            updateprice();
        }
        else if(choice ==2)
        {
            mainmenu();
        }
        else
        {
            system("cls");
            compname();
            printf("\tInvalid input try again !\n\n");
            goto reenterchoice20;
        }
    }
    else if(choice == 3)
    {
        mainmenu();
    }
    else
    {
        system("cls");
        compname();
        printf("\tInvalid input try again !\n\n");
        goto reenterchoice;
    }
}

int main()
{
    mainmenu();
    return 0;
}
