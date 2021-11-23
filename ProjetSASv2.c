#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int choice, numAccounts = 1, menu, temp, i, answer;
    char search, found, fname[50], lname[50], ID[20];
    double Pamount[numAccounts], amount, withdrawAmount, depositAmount, newAmount;
    system("color 3");
Exit:
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To YouCode Bank \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n");
    printf("\n\t\t\t*********************** Main Menu ***********************");
    printf("\n");

    printf("\n\t\t1. Create new account \n");
    printf("\n\t\t2. Create more than one account\n");
    printf("\n\n\t\t Enter your choice:\t");
    scanf("%d", &choice);
    while (choice < 1 || choice > 2)
    {

        printf("\n\n\t\t Enter your choice:\t");
        scanf("%d", &choice);
    }

    //page 1 sign in, 1 seul compte

    if (choice == 1)
    {

        printf("\n\t\t Enter your first and your last name:\t");
        scanf("%s %s", &fname, &lname);
        printf("\n\t\t Enter your ID number:\t");
        scanf("%s", &ID);
        printf("\n\t\t Enter the amount to deposit:$");
        scanf("%lf", &amount);
        system("cls");
        //affichage
        //affichage

        printf("\n\t\t Account created successfully!");
        printf("\n\t\t\t\t ######## Profile Information ########");

        printf("\n\t\t Full name:\t%s %s", fname, lname);
        printf("\n\t\t ID number:\t%s", ID);
        printf("\n\t\t Your current balance is:$\t%.2lf ", amount);

        //go back to the menu
        printf("\n\t\t Enter number 0 to go to the program menu:\t");
        scanf("%d", &menu);
        system("cls");

        if (menu == 0)
        {
        Menu:

            printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To YouCode Bank \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
            printf("\n");
            printf("\n\t\t\t*********************** Main Menu ***********************");
            printf("\n");

            printf("\n\t\t1. View Account \n");
            printf("\n\t\t2. Transfer funds \n");
            printf("\n\t\t3. Deposit money \n");
            printf("\n\t\t4. Log out\n");

            printf("\n\n\t\t Enter your choice:\t");
            scanf("%d", &choice);
            while (choice < 1 || choice > 4)
            {

                printf("\n\n\t\t Enter your choice:\t");
                scanf("%d", &choice);
            }
        }
        switch (choice)
        {
        case 1:
        {
            system("cls");

            printf("\n\t\t\t\t ######## Profile Information ########");

            printf("\n\t\t full name:\t%s %s", fname, lname);
            printf("\n\t\t ID number:\t%s", ID);
            printf("\n\t\t Your current balance is:\t$%.2lf ", amount);
        }
            printf("\n\tEnter 1 to go back to the menu:\t");
            scanf("%d", &choice);
            if (choice == 1)
            {
                system("cls");
                goto Menu;
            }
            break;

        case 2:
        {
            system("cls");
            printf("\n\t\t\t**********Process a cash withdrawal.**********\n");
            printf(" Enter Amount to Withdraw");
            scanf("%lf", &withdrawAmount);

            if (amount < withdrawAmount)
            {

                printf("\n\t\tYou don't have enough money available in your account");
            }
            else
            {
                amount = amount - withdrawAmount;
                printf("\n\tdone!!Your new balance is: $%lf\n", amount);
            }
        }
            printf("\n\tenter 1 to go back to the menu:\t");
            scanf("%d", &choice);
            if (choice == 1)
            {
                system("cls");
                goto Menu;
            }
            break;
        case 3:
        {
            system("cls");

            printf("\n\t\t\t**********Process a cash deposit.**********\n");
            printf("\n\tEnter the amount of the deposit:\t");
            scanf("%lf", &depositAmount);

            amount = amount + depositAmount;
            printf("\n\tdone!!Your new balance is: $%lf\n", amount);

            printf("\n\tenter 1 to go back to the menu:\t");
            scanf("%d", &choice);

            if (choice == 1)
            {
                system("cls");
                goto Menu;
            }
        }
        break;

        case 4:
        {
            system("cls");
            goto Exit;
        }
        break;
        }
        ///222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
        //    more than one accouant
        //    more than one accouant
        //    more than one accouant
        //    more than one accouant
    }
    else if (choice == 2)
    {
        char Pfname[numAccounts][20], Plname[numAccounts][20], PID[numAccounts][20];
        printf("\n\n\t\tnumber of accounts you want to create:\t");
        scanf("%d", &numAccounts);
        for (i = 0; i < numAccounts; i++)
        {
            //create1
            //create
            printf("\n\t\tEnter your first and your last name:\t");
            scanf("%s %s", &Pfname[i], &Plname[i]);
            printf("\n\t\tEnter your ID number:\t");
            scanf("%s", &PID[i]);
            printf("\n\t\tEnter the amount to deposit:$\t");
            scanf("%lf", &Pamount[i]);
            printf("**********************************");
            system("cls");
            //affichage
            //affichage

            printf("\nAccount created successfully!");
            printf("\n######## Profile Information ########");
            printf("\nFull name:\t%s %s", Pfname[i], Plname[i]);
            printf("\nID number:\t%s", PID[i]);
            printf("\nYour current balance is:\t%.2lf ", Pamount[i]);
        }
        system("cls");

    firstMenu:
        for (i = 0; i < numAccounts; i++)
        {
            printf("\nFull name:\t%s %s", Pfname[i], Plname[i]);
            printf("\nID number:\t%s", PID[i]);
            printf("\nYour current balance is:\t%.2lf ", Pamount[i]);
            printf("\n");
        }

        printf("\n\t\t Enter number 0 to go to the program menu:\t");
        scanf("%d", &menu);
        system("cls");

        if (menu == 0)
        {
        Menu1:

            // menu
            // menu
            // menu
            // menu

            printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To YouCode Bank \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
            printf("\n");
            printf("\n\t\t\t*********************** Main Menu ***********************");
            printf("\n");

            printf("\n\t\t1. View Accounts \n");
            printf("\n\t\t2. Operation\n");
            printf("\n\t\t3. search\n");
            printf("\n\t\t4. Ascending order\n");
            printf("\n\t\t5. Descending Order\n");
            printf("\n\t\t6. Loyalty\n");
            printf("\n\t\t7. Log out\n");

            printf("\n\n\t\t Enter your choice:\t");
            scanf("%d", &choice);
            while (choice < 1 || choice > 7)
            {

                printf("\n\n\t\t Enter your choice:\t");
                scanf("%d", &choice);
            }
        }
        switch (choice)
        {
        //View Accounts
        //View Accounts
        //View Accounts
        //View Accounts
        case 1:
        {
            for (i = 0; i < numAccounts; i++)
            {
                printf("\n Accounts N %d:\n \nfull name:\t %s %s \n\nID:\t %s \n\namount:\t $%.2lf\n\n", i + 1, Pfname[i], Plname[i], PID[i], Pamount[i]);
                printf("\n");
            }

            printf("\n\tenter 1 to go back to the menu:\t");
            scanf("%d", &choice);
            while (choice != 1)
            {

                printf("\n\n\t\t Enter your choice:\t");
                scanf("%d", &choice);
            }
            if (choice == 1)
            {
                system("cls");
                goto Menu1;
            }
            break;
        }
            //Operation
            //Operation
            //Operation
            //finishAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
        case 2:
        {

            printf("\n\t\t[1]withdrawal.");
            printf("\n\t\t[2]Deposit.");

            printf("your choice:\t");
            scanf("%d", &choice);

            for (i = 0; i < numAccounts; i++)
            {
                printf("\n Accounts N %d:\n \nfull name:\t%s %s \n\nID:\t %s\n\namount:\t $%.2lf\n\n", i + 1, Pfname[i], Plname[i], PID[i], Pamount[i]);
                printf("\n");
            }
            printf("\t\t\t************************************************************");
            printf("\nChoose the number of account you want to work with:\t");
            scanf("%d", &answer);

            if (choice == 1)
            {
                system("cls");
                printf("\n\t\t\t********** Process a cash withdrawal. **********\n");
                printf(" Enter Amount to Withdraw");
                scanf("%lf", &withdrawAmount);

                if (Pamount[answer - 1] < withdrawAmount)
                {

                    printf("\n\t\tYou don't have enough money available in your account");
                }
                else
                {
                    Pamount[answer - 1] = Pamount[answer - 1] - withdrawAmount;
                    printf("\n\tdone!!Your new balance is: $%.2lf\n", Pamount[answer - 1]);
                }

                printf("\n\tenter 1 to go back to the menu:\t");
                scanf("%d", &choice);
                while (choice != 1)
                {

                    printf("\n\n\t\t Enter your choice:\t");
                    scanf("%d", &choice);
                }
                if (choice == 1)
                {
                    system("cls");
                    goto Menu1;
                }
                break;
            }
            else
            {
                system("cls");

                printf("\n\t\t\t**********Process a cash deposit.**********\n");
                printf("\n\tEnter the amount of the deposit:\t");
                scanf("%lf", &depositAmount);

                Pamount[answer - 1] = Pamount[answer - 1] + depositAmount;
                printf("\n\tdone!!Your new balance is: $%.2lf\n", Pamount[answer - 1]);

                printf("\n\tenter 1 to go back to the menu:\t");
                scanf("%d", &choice);
                while (choice != 1)
                {

                    printf("\n\n\t\t Enter your choice:\t");
                    scanf("%d", &choice);
                }
                if (choice == 1)
                {
                    system("cls");
                    goto Menu1;
                }
            }
            break;
        }
            //aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
            //recherch
            //recherch
            //recherch
        case 3:
        {

            printf("to 'search' for an account enter number 1\n");
            scanf("%d", &answer);
            if (answer == 1)
            {
            chercherAgain:
                system("cls");
                printf("  enter ID's account: ");
                char rechercheID[20];
                bool flag = false; // check if there is an acounte with same ID;
                scanf("%s", &rechercheID);
                for (int i = 0; i < numAccounts; i++)
                {
                    if (!strcmp(rechercheID, PID[i]))
                    {
                        //strcmp is for checking if recherche CIN value is in ID[i].
                        printf("\n  the search result: \n");
                        printf("\n\tFull name: %s %s.\n\tID : %s.\n\tAmount : %.2lf.\n", Pfname[i], Plname[i], PID[i], Pamount[i]);
                        printf("\n--------------------------------------------------------------\n\n");
                        flag = true;
                        break;
                    }
                }

                if (flag == false)
                {
                    printf("\n\t there is no bank account with this ID!.\n\n");
                    printf("  \tEntre:\t\t1-to try again..\n");
                    printf("\nEnter your choice: ");
                    int r; // store the choice that given above.
                    scanf("%d", &r);
                    while (r != 1)
                    {
                        printf("  \tEntre:\t1 to try again..\n");
                        printf("\nEnter your choice: ");
                        scanf("%d", &r);
                    }
                    if (r == 1)
                    {
                        goto chercherAgain; // again
                    }
                }
            }
            printf("\n\tenter 1 to go back to the menu:\t");
            scanf("%d", &choice);
            while (choice != 1)
            {

                printf("\n\n\t\t Enter your choice:\t");
                scanf("%d", &choice);
            }
            if (choice == 1)
            {
                system("cls");
                goto Menu1;
            }
            break;
        }
            //AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
        case 4:
        {

            // variables pour enregistrer les minimum acounts apres chaque tour de bocle.
            int APlname[50][50];
            int APfname[50][50];
            int APID[100][30];
            double minMontant[100];
            //hfezuhqiugfliuGFUIEGFUIGEUIFGZIQGFILQUIFEZUIGFUIZQGFEUILGQEUFLZIGLUIQFZGUILQUIGFUEIQZGUIGFEUIGUIFQGUIFEGUIQGUIFGUIQGZUI
            for (int i = 1; i < numAccounts; i++)
            {

                for (int j = 0; j < numAccounts - 1; j++)
                {
                    if (Pamount[j] > Pamount[i])
                    {
                        // check for the minimun account.

                        minMontant[100] = Pamount[i];
                        Pamount[i] = Pamount[j];
                        Pamount[j] = minMontant[100];

                        strcpy(APID[i], PID[i]);
                        strcpy(PID[i], PID[j]);
                        strcpy(PID[j], APID[i]);

                        strcpy(APfname[i], Pfname[i]);
                        strcpy(APlname[i], Plname[i]);

                        strcpy(Pfname[i], Pfname[j]);
                        strcpy(Plname[i], Plname[j]);

                        strcpy(Pfname[j], APfname[i]);
                        strcpy(Plname[j], APlname[i]);
                    }
                }
            }
            for (int i = 0; i < numAccounts; i++)
            {
                // display les comptes qui est enregistrer.
                printf("Compte N%d :\n", i + 1);
                printf("\t\tFull name : %s %s.\n\tID: %s.\n\tAmount: $%.2lf.\n", Pfname[i], Plname[i], PID[i], Pamount[i]);
                printf("--------------------------------------------------------------\n");
            }

            printf("\n\tenter 1 to go back to the menu:\t");
            scanf("%d", &choice);
            while (choice > 1)
            {

                printf("\n\n\t\t Enter your choice:\t");
                scanf("%d", &choice);
            }

            if (choice == 1)
            {
                system("cls");
                goto Menu1;
            }
        }
        break;

        case 5:
        {

            // variables pour enregistrer les minimum acounts apres chaque tour de bocle.
            int DPlname[50][50];
            int DPfname[50][50];
            int DPID[100][30];
            double minMontant[100];

            for (int i = 1; i < numAccounts; i++)
            {

                for (int j = 0; j < numAccounts - 1; j++)
                {
                    if (Pamount[j] < Pamount[i])
                    {
                        // check for the minimun account.

                        minMontant[100] = Pamount[i];
                        Pamount[i] = Pamount[j];
                        Pamount[j] = minMontant[100];

                        strcpy(DPID[i], PID[i]);
                        strcpy(PID[i], PID[j]);
                        strcpy(PID[j], DPID[i]);

                        strcpy(DPfname[i], Pfname[i]);
                        strcpy(DPlname[i], Plname[i]);

                        strcpy(Pfname[i], Pfname[j]);
                        strcpy(Plname[i], Plname[j]);

                        strcpy(Pfname[j], DPfname[i]);
                        strcpy(Plname[j], DPlname[i]);
                    }
                }
            }
            for (int i = 0; i < numAccounts; i++)
            {
                // display les comptes qui est enregistrer.
                printf("Compte N%d :\n", i + 1);
                // printf("\t\tFull name : %s %s.\n\tID: %s.\n\tAmount: $%.2lf.\n",Pfname[i],Plname[i],PID[i],Pamount[i]);

                printf("full name:%s %s\n", Pfname[i], Plname[i]);
                printf("ID:%s\n", PID[i]);
                printf("amount:%.2lf\n", Pamount[i]);
            }

            printf("\n\tenter 1 to go back to the menu:\t");
            scanf("%d", &choice);
            while (choice > 1)
            {

                printf("\n\n\t\t Enter your choice:\t");
                scanf("%d", &choice);
            }

            if (choice == 1)
            {
                system("cls");
                goto Menu1;
            }
        }
        break;

        case 6:
        {
            int DPlname[50][50];
            int DPfname[50][50];
            int DPID[100][30];
            double minMontant[100];

            for (int i = 1; i < numAccounts; i++)
            {

                for (int j = 0; j < numAccounts - 1; j++)
                {
                    if (Pamount[j] < Pamount[i])
                    {
                        // check for the minimun account.

                        minMontant[100] = Pamount[i];
                        Pamount[i] = Pamount[j];
                        Pamount[j] = minMontant[100];

                        strcpy(DPID[i], PID[i]);
                        strcpy(PID[i], PID[j]);
                        strcpy(PID[j], DPID[i]);

                        strcpy(DPfname[i], Pfname[i]);
                        strcpy(DPlname[i], Plname[i]);

                        strcpy(Pfname[i], Pfname[j]);
                        strcpy(Plname[i], Plname[j]);

                        strcpy(Pfname[j], DPfname[i]);
                        strcpy(Plname[j], DPlname[i]);
                    }
                }
            }
            for (int i = 0; i < 3; i++)
            {
                Pamount[i] += Pamount[i] * 1.013;

                // display les comptes qui est enregistrer.
                printf("Compte N%d :\n", i + 1);
                // printf("\t\tFull name : %s %s.\n\tID: %s.\n\tAmount: $%.2lf.\n",Pfname[i],Plname[i],PID[i],Pamount[i]);

                printf("full name:%s %s\n", Pfname[i], Plname[i]);
                printf("ID:%s\n", PID[i]);
                printf("amount:%.2lf\n", Pamount[i]);
            }
            printf("\n\tenter 1 to go back to the menu:\t");
            scanf("%d", &choice);
            while (choice > 1)
            {

                printf("\n\n\t\t Enter your choice:\t");
                scanf("%d", &choice);
            }

            if (choice == 1)
            {
                system("cls");
                goto Menu1;
            }
            break;
        }

        case 7:
        {
            system("cls");
            goto Exit;
        }
        break;
        }
    }
    return 0;
}
