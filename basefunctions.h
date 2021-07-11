void clear(){
    system("cls");
}

void mainMenu(){
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|                        MENU                        |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|              Happy to be of assistance!            |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                    [1] Calculator                  |\n");
    printf("\t\t\t\t|                    [2] Materials                   |\n");
    printf("\t\t\t\t|                    [3] Leave                       |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\t\t\t\tSelect your choice: ");
}

void quitScreen(){
    clear();
    printf("\n\n\n\t\t\tThank you for using this program. See you next time!");
    printf("\n\n\t\t\tPress any key to continue...");
    getch();
}

void wrongInput(){
    clear();
    printf("\n\n\n\t\t\tInvalid input.");
    printf("\n\n\t\t\tPress any key to continue...");
    getch();
    clear();
}