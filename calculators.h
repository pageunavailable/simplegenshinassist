#include "basefunctions.h"
int remainingEXP = 0, materialAmount = 0;

void mainCalculatorMenu(){
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|                   CALCULATOR MENU                  |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|           What do you want to compute today?       |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                [1] Adventure Rank EXP              |\n");
    printf("\t\t\t\t|                [2] Materials                       |\n");
    printf("\t\t\t\t|                [3] Return                          |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\t\t\t\tSelect your choice: ");
}

void targetAR_CalculatorMenu(){
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|              ADVENTURER EXP CALCULATOR             |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|             What AR do you want to get to?         |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                 [1] Adventure Rank 55              |\n");
    printf("\t\t\t\t|                 [2] Adventure Rank 50              |\n");
    printf("\t\t\t\t|                 [3] Return                         |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\t\t\t\tSelect your choice: ");
}

void currentAR_EXP(){
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|              ADVENTURER EXP CALCULATOR             |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|      How much adventure experience do you have?    |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\t\t\t\tEnter amount: ");
}

void requiredAR_EXP(){
    clear();
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|              ADVENTURER EXP CALCULATOR             |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|  You need this much EXP to get to your desired AR. |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t                         %d\n", remainingEXP);
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\n\n\t\t\t\tPress any key to return to the previous menu...");
    remainingEXP = 0;
    getch();
    clear();
}

void materialCalculatorMenu(){
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|                  MATERIAL CALCULATOR               |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|                How many left to grind?             |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|              [1] Compute for 5* Material           |\n");
    printf("\t\t\t\t|              [2] Compute for 4* Material           |\n");
    printf("\t\t\t\t|              [3] Compute for 3* Material           |\n");
    printf("\t\t\t\t|              [4] Compute for 2* Material           |\n");
    printf("\t\t\t\t|              [5] Return                            |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t|                                                    |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\t\t\t\tSelect your choice: ");
}

void material_5star(){
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|                  MATERIAL CALCULATOR               |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|            How many 5* materials do you need?      |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\t\t\t\tEnter amount: ");
}

void material_5_required(){
    clear();
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|                  MATERIAL CALCULATOR               |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|           You need this many 4* materials.         |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t                          %d\n", (materialAmount*3));
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|           You need this many 3* materials.         |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t                          %d\n", (materialAmount*3*3));
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|           You need this many 2* materials.         |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t                          %d\n", (materialAmount*3*3*3));
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\n\n\t\t\t\tPress any key to return to the previous menu...");
    materialAmount = 0;
    getch();
    clear();
}

void material_4star(){
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|                  MATERIAL CALCULATOR               |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|            How many 4* materials do you need?      |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\t\t\t\tEnter amount: ");
}

void material_4_required(){
    clear();
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|                  MATERIAL CALCULATOR               |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|           You need this many 3* materials.         |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t                          %d\n", (materialAmount*3));
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|           You need this many 2* materials.         |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t                          %d\n", (materialAmount*3*3));
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\n\n\t\t\t\tPress any key to return to the previous menu...");
    materialAmount = 0;
    getch();
    clear();
}

void material_3star(){
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|                  MATERIAL CALCULATOR               |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|            How many 3* materials do you need?      |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\t\t\t\tEnter amount: ");
}

void material_3_required(){
    clear();
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|                  MATERIAL CALCULATOR               |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|           You need this many 2* materials.         |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t                          %d\n", (materialAmount*3));
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\n\n\t\t\t\tPress any key to return to the previous menu...");
    materialAmount = 0;
    getch();
    clear();
}

void material_2star(){
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|                  MATERIAL CALCULATOR               |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|            How many 2* materials do you need?      |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\t\t\t\tEnter amount: ");
}

void material_2_required(){
    clear();
    printf("\n\n\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|               GENSHIN IMPACT ASSISTANT             |\n");
    printf("\t\t\t\t ==================================================== \n");
    printf("\t\t\t\t|                  MATERIAL CALCULATOR               |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t|           You need this many 1* materials.         |\n");
    printf("\t\t\t\t ---------------------------------------------------- \n");
    printf("\t\t\t\t                          %d\n", (materialAmount*3));
    printf("\t\t\t\t ==================================================== \n");
    printf("\n\n\n");
    printf("\n\n\t\t\t\tPress any key to return to the previous menu...");
    materialAmount = 0;
    getch();
    clear();
}