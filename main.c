/*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
 */

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
 */
#include "mcc_generated_files/system/system.h"
//https://www.mycompiler.io/view/GIsg47tvPNK

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#define TOTAL_DES_COULEURS 8          // Défini le nombre total de couleurs disponibles
#define LONGUEUR_CODE_SECRET  4       // Défini la longueur du code secret à deviner
#define MAX_TENTATIVES 16             // Défini le nombre maximum d'essais
#define HAUTEURS 16                       //nombre de ligne
#define LARGEURS 8 
/*
    Main application
 */



int code_secret[LONGUEUR_CODE_SECRET];
void gencodesecret(void);
void propositionj2(void);
void compare(void);
void matrice(void);
void init(void);
void set_couleur(void);
void gen_digi(void);

uint8_t chenille(void);
void detec(uint8_t colonne);
uint8_t ToucheE1(void);

typedef struct {
    char green;
    char red;
    char blue;
} Led;

const Led magenta = {0, 255, 255};
const Led rouge = {0, 255, 0};
const Led carotte = {102, 244, 27};
const Led jaune = {255, 255, 0};
const Led vert = {255, 0, 0};
const Led cyan = {255, 0, 255};
const Led bleu = {0, 0, 255};
const Led violet = {0, 127, 255};

const Led blanc = {255, 255, 255};
const Led rose = {182, 255, 193};
const Led noir = {0, 0, 0};

Led Data[128];

int main(void) {
    SYSTEM_Initialize();

    uint8_t i;



    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Enable the Peripheral Interrupts 
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 

    SPI1_Open(0);

    memset(Data, 0x00, sizeof (Data)); // raz tableau
    //envoie magenta dans premiere led 

    /*Data[9] = rouge;
    Data[10] = blanc;
    Data[11] = rouge;
    Data[12] = rouge;
    Data[13] = rouge;
    Data[17] = rouge;
    Data[18] = blanc;
    Data[19] = rouge;
    Data[20] = rouge;
    Data[25] = rouge;
    Data[26] = rouge;
    Data[27] = rouge;
    Data[28] = rouge;
    Data[29] = rouge;
    Data[34] = rouge;
    Data[35] = rouge;
    
    Data[82] = rouge;
    Data[91] = rouge;
    Data[100] = rouge;
    Data[98] = rouge;
    Data[84] = rouge;
    Data[96] = rouge;
    Data[105] = rouge;
    Data[73] = rouge;
    Data[66] = rouge;
    Data[77] = rouge;
    Data[86] = rouge;
    Data[109] = rouge;
    Data[116] = rouge;*/












    SPI1_BufferExchange(Data, sizeof (Data)); //penser a interdire les IT durant l'echange

    while (1) {
        chenille();
        __delay_ms(1);
        detec(chenille());

    }
}

/*
  void gencodesecret(void)
{
    int couleurs_utilise[TOTAL_DES_COULEURS] = {0}; // Tableau pour s'assurer de l'unicité des couleurs
    int couleur;
    char i;
    for (i = 0; i < LONGUEUR_CODE_SECRET; i++)
    {

        couleur = rand() % TOTAL_DES_COULEURS; // nous permet de générer un indice de couleur aléatoire
        code_secret[i] = couleur;
    }
}
void propositionj2(void)
{
    char i;
    for (i = 0; i < LONGUEUR_CODE_SECRET; i++)
    {
        scanf("%d", le clavier);
    }
}
void compare(void)
{
    char i, y;
    int compte_bp = 0, compte_mp = 0, compte_comb;
    for (i=0;i<LONGUEUR_CODE_SECRET;i++)
    {
        
        if()//tab qui s'incremente avec la boucle i et qui compare avec code secret (==) (bonne position)
        {
            compte_bp++;
        }
        else
        {
            for (y=0;y<LONGUEUR_CODE_SECRET;y++)
            {
                if()//regarde si la couleur fait partie du code seret mais n'est pas bien palce
                {
                    compte_comb++;
                }
                else
                {
                    compte_mp++;
                }
            }
        }
    }
}
void matrice(void)
{
    const char matrix[HAUTEURS][LARGEURS] = 
    {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {9, 10, 11, 12, 13, 14, 15, 16},
        {17, 18, 19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30, 31, 32},
        {33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48},
        {49, 50, 51, 52, 53, 54, 55, 56},
        {57, 58, 59, 60, 61, 62, 63, 64},
        {65, 66, 67, 68, 69, 70, 71, 72},
        {73, 74, 75, 76, 77, 78, 79, 80},
        {81, 82, 83, 84, 85, 86, 87, 88},
        {89, 90, 91, 92, 93, 94, 95, 96},
        {97, 98, 99, 100, 101, 102, 103, 104},
        {105, 106, 107, 108, 109, 110, 111, 112},
        {113, 114, 115, 116, 117, 118, 119, 120},
        {121, 122, 123, 124, 125, 126, 127, 128}
    }
}*/
void init(void) {

    typedef struct {
        char vert;
        char rouge;
        char bleu;
    } Led;
    const Led magenta = {0, 255, 255};
    const Led rouge = {0, 255, 0};
    const Led carotte = {102, 244, 27};
    const Led jaune = {255, 255, 0};
    const Led vert = {255, 0, 0};
    const Led cyan = {255, 0, 255};
    const Led bleu = {0, 0, 255};
    const Led violet = {0, 127, 255};

    const Led blanc = {255, 255, 255};
    const Led rose = {182, 255, 193};
    const Led noir = {0, 0, 0};

    //int matrix[HAUTEURS][LARGEURS]={0};

}

void set_couleur(void) {

}

uint8_t chenille(void) {
    uint8_t i, colonne = 0;
    for (i = 0; i <= 3; i++) {
        switch (i) {
            case 1:
                S3_SetHigh();
                S1_SetLow();
                colonne = 1;
                break;
            case 2:
                S1_SetHigh();
                S2_SetLow();
                colonne = 2;
                break;
            case 3:
                S2_SetHigh();
                S3_SetLow();
                colonne = 3;
                break;
        }
    }
    return colonne;

}

void detec(uint8_t colonne) {
    uint8_t valeur, ligne, touche;


    if (E1_GetValue() == 1) {
        ligne = 1;
    }
    if (E2_GetValue() == 1) {
        ligne = 2;
    }
    if (E3_GetValue() == 1) {
        ligne = 3;
    }
    if (E4_GetValue() == 1) {
        ligne = 4;
    }

    valeur = (10 * colonne) + ligne;

    switch (valeur) {
        case(11):
            touche = 1;
            break;
        case(12):
            touche = 4;
            break;
        case(13):
            touche = 7;
            break;
        case(14):
            touche = 10;
            break;
        case(21):
            touche = 2;
            break;
        case(22):
            touche = 5;
            break;
        case(23):
            touche = 8;
            break;
        case(24):
            touche = 0;
            break;
        case(31):
            touche = 3;
            break;
        case(32):
            touche = 6;
            break;
        case(33):
            touche = 9;
            break;
        case(34):
            touche = 12;
            break;

            printf("%hhu", touche);
    }
}



