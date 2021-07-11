#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "calculators.h"
#include "materials.h"

int mainmenuOpt = 0, mainCalcOpt = 0, targetAR = 0, materialCalcMenuOpt = 0, 
materialDayOpt = 0, AR50exp = 86400, AR55exp = 156000, arEXPamount = 0;

void main(){
    home:
        mainMenu();
        scanf("%d", &mainmenuOpt);
        if (mainmenuOpt == 1){              //calculator
            mainmenuOpt = 0;
            calcu_home:
                clear();
                mainCalculatorMenu();
                scanf("%d", &mainCalcOpt);
                if (mainCalcOpt == 1){          //exp calculator
                    mainCalcOpt = 0;
                    arexp_home:
                        clear();
                        targetAR_CalculatorMenu();
                        scanf("%d", &targetAR);
                        if (targetAR == 1){             //target ar is 55
                            targetAR = 0;
                            clear();
                            currentAR_EXP();
                            scanf("%d", &arEXPamount);
                            remainingEXP = AR55exp - arEXPamount;
                            requiredAR_EXP();
                            goto arexp_home;
                        }
                        else if (targetAR == 2){        //target ar is 50
                            targetAR = 0;
                            clear();
                            currentAR_EXP();
                            scanf("%d", &arEXPamount);
                            remainingEXP = AR50exp - arEXPamount;
                            requiredAR_EXP();
                            goto arexp_home;
                        }
                        else if (targetAR == 3){        //return to previous menu (calculator)
                            targetAR = 0;
                            clear();
                            goto calcu_home;
                        }
                        else{                   //for wrong input in ar exp calculator
                            targetAR = 0;
                            wrongInput();
                            goto arexp_home;
                        }
                }
                else if (mainCalcOpt == 2){     //materials calculator
                    mainCalcOpt = 0;
                    matsCalc_home:
                        clear();
                        materialCalculatorMenu();
                        scanf("%d", &materialCalcMenuOpt);
                        if (materialCalcMenuOpt == 1){
                            materialCalcMenuOpt = 0;
                            clear();
                            material_5star();
                            scanf("%d", &materialAmount);
                            clear();
                            material_5_required();
                            goto matsCalc_home;
                        }
                        else if (materialCalcMenuOpt == 2){
                            materialCalcMenuOpt = 0;
                            clear();
                            material_4star();
                            scanf("%d", &materialAmount);
                            clear();
                            material_4_required();
                            goto matsCalc_home;
                        }
                        else if (materialCalcMenuOpt == 3){
                            materialCalcMenuOpt = 0;
                            clear();
                            material_3star();
                            scanf("%d", &materialAmount);
                            clear();
                            material_3_required();
                            goto matsCalc_home;
                        }
                        else if (materialCalcMenuOpt == 4){
                            materialCalcMenuOpt = 0;
                            clear();
                            material_2star();
                            scanf("%d", &materialAmount);
                            clear();
                            material_2_required();
                            goto matsCalc_home;
                        }
                        else if (materialCalcMenuOpt == 5){
                            materialCalcMenuOpt = 0;
                            clear();
                            goto calcu_home;
                        }
                        else{
                            materialCalcMenuOpt = 0;
                            clear();
                            wrongInput();
                            goto matsCalc_home;
                        }
                }
                else if (mainCalcOpt == 3){     //return to previous menu (main)
                    mainCalcOpt = 0;
                    clear();
                    goto home;
                }
                else{               //in case of wrong input in main calcu menu
                    mainCalcOpt = 0;
                    wrongInput();
                    goto calcu_home;
                }
        }
        else if (mainmenuOpt == 2){         //materials
            mainmenuOpt = 0;
            material_home:
                clear();
                mainMaterialsMenu();
                scanf("%d", &materialDayOpt);
                if (materialDayOpt == 1 || materialDayOpt == 4){            //materials for mon and thu
                    materialDayOpt = 0;
                    clear();
                    materials_MON_THU();
                    goto material_home;
                }
                else if (materialDayOpt == 2 || materialDayOpt == 5){       //materials for tue and fri
                    materialDayOpt = 0;
                    clear();
                    materials_TUE_FRI();
                    goto material_home;
                }
                else if (materialDayOpt == 3 || materialDayOpt == 6){       // materials for wed and sat
                    materialDayOpt = 0;
                    clear();
                    materials_WED_SAT();
                    goto material_home;
                }
                else if (materialDayOpt == 7){           //returns to previous menu
                    materialDayOpt = 0;
                    clear();
                    goto home;
                }
                else{                                   //in case of wrong input in material menu
                    materialDayOpt = 0;
                    wrongInput();
                    goto material_home;
                }
        }
        else if (mainmenuOpt == 3){                     //quit
            quitScreen();
        }
        else{                                           //in case of wrong input in main menu
            mainmenuOpt = 0;
            wrongInput();
            goto home;
        }
}