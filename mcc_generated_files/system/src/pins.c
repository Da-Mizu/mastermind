/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 3.0.0
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

#include "../pins.h"

void (*S1_InterruptHandler)(void);
void (*S2_InterruptHandler)(void);

void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers
    */
    LATA = 0x0;
    LATB = 0x0;
    LATC = 0x0;

    /**
    TRISx registers
    */
    TRISA = 0xBC;
    TRISB = 0xFE;
    TRISC = 0xC0;

    /**
    ANSELx registers
    */
    ANSELA = 0xBF;
    ANSELB = 0xFF;
    ANSELC = 0xE4;

    /**
    WPUx registers
    */
    WPUA = 0x0;
    WPUB = 0x0;
    WPUC = 0x0;
    WPUE = 0x0;
  
    /**
    ODx registers
    */
   
    ODCONA = 0x0;
    ODCONB = 0x0;
    ODCONC = 0x0;
    /**
    SLRCONx registers
    */
    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xE3;
    /**
    INLVLx registers
    */
    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xE3;
    INLVLE = 0x8;

    /**
    PPS registers
    */
    RC4PPS = 0x15;  //RC4->MSSP1:SDO1;
    RC5PPS = 0x01;  //RC5->CLC1:CLC1OUT;
    RA1PPS = 0x0F;  //RA1->PWM7:PWM7OUT;
    RA0PPS = 0x0E;  //RA0->PWM6:PWM6OUT;
    SSP1CLKPPS = 0x13;  //RC3->MSSP1:SCK1;
    RC3PPS = 0x14;  //RC3->MSSP1:SCK1;
    CCP1PPS = 0x12;  //RC2->CCP1:CCP1;
    RC2PPS = 0x09;  //RC2->CCP1:CCP1;
    CCP2PPS = 0x8;  //RB0->CCP2:CCP2;
    RB0PPS = 0x0A;  //RB0->CCP2:CCP2;

    /**
    APFCON registers
    */

   /**
    IOCx registers 
    */
    IOCAP = 0x40;
    IOCAN = 0x0;
    IOCAF = 0x0;
    IOCBP = 0x0;
    IOCBN = 0x0;
    IOCBF = 0x0;
    IOCCP = 0x0;
    IOCCN = 0x1;
    IOCCF = 0x0;
    IOCEP = 0x0;
    IOCEN = 0x0;
    IOCEF = 0x0;

    S1_SetInterruptHandler(S1_DefaultInterruptHandler);
    S2_SetInterruptHandler(S2_DefaultInterruptHandler);

    // Enable PIE0bits.IOCIE interrupt 
    PIE0bits.IOCIE = 1; 
}
  
void PIN_MANAGER_IOC(void)
{
    // interrupt on change for pin S1}
    if(IOCAFbits.IOCAF6 == 1)
    {
        S1_ISR();  
    }
    // interrupt on change for pin S2}
    if(IOCCFbits.IOCCF0 == 1)
    {
        S2_ISR();  
    }
}
   
/**
   S1 Interrupt Service Routine
*/
void S1_ISR(void) {

    // Add custom IOCAF6 code

    // Call the interrupt handler for the callback registered at runtime
    if(S1_InterruptHandler)
    {
        S1_InterruptHandler();
    }
    IOCAFbits.IOCAF6 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF6 at application runtime
*/
void S1_SetInterruptHandler(void (* InterruptHandler)(void)){
    S1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF6
*/
void S1_DefaultInterruptHandler(void){
    // add your S1 interrupt custom code
    // or set custom function using S1_SetInterruptHandler()
}
   
/**
   S2 Interrupt Service Routine
*/
void S2_ISR(void) {

    // Add custom IOCCF0 code

    // Call the interrupt handler for the callback registered at runtime
    if(S2_InterruptHandler)
    {
        S2_InterruptHandler();
    }
    IOCCFbits.IOCCF0 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF0 at application runtime
*/
void S2_SetInterruptHandler(void (* InterruptHandler)(void)){
    S2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF0
*/
void S2_DefaultInterruptHandler(void){
    // add your S2 interrupt custom code
    // or set custom function using S2_SetInterruptHandler()
}
/**
 End of File
*/