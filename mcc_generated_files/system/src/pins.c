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

void (*E1_InterruptHandler)(void);
void (*E2_InterruptHandler)(void);
void (*E3_InterruptHandler)(void);
void (*E4_InterruptHandler)(void);

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
    TRISA = 0xBF;
    TRISB = 0xFF;
    TRISC = 0xC4;

    /**
    ANSELx registers
    */
    ANSELA = 0x83;
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
    SLRCONC = 0xE7;
    /**
    INLVLx registers
    */
    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xE7;
    INLVLE = 0x8;

    /**
    PPS registers
    */
    RC4PPS = 0x15;  //RC4->MSSP1:SDO1;
    RC5PPS = 0x01;  //RC5->CLC1:CLC1OUT;
    SSP1CLKPPS = 0x13;  //RC3->MSSP1:SCK1;
    RC3PPS = 0x14;  //RC3->MSSP1:SCK1;

    /**
    APFCON registers
    */

   /**
    IOCx registers 
    */
    IOCAP = 0x0;
    IOCAN = 0x3C;
    IOCAF = 0x0;
    IOCBP = 0x0;
    IOCBN = 0x0;
    IOCBF = 0x0;
    IOCCP = 0x0;
    IOCCN = 0x0;
    IOCCF = 0x0;
    IOCEP = 0x0;
    IOCEN = 0x0;
    IOCEF = 0x0;

    E1_SetInterruptHandler(E1_DefaultInterruptHandler);
    E2_SetInterruptHandler(E2_DefaultInterruptHandler);
    E3_SetInterruptHandler(E3_DefaultInterruptHandler);
    E4_SetInterruptHandler(E4_DefaultInterruptHandler);

    // Enable PIE0bits.IOCIE interrupt 
    PIE0bits.IOCIE = 1; 
}
  
void PIN_MANAGER_IOC(void)
{
    // interrupt on change for pin E1}
    if(IOCAFbits.IOCAF2 == 1)
    {
        E1_ISR();  
    }
    // interrupt on change for pin E2}
    if(IOCAFbits.IOCAF3 == 1)
    {
        E2_ISR();  
    }
    // interrupt on change for pin E3}
    if(IOCAFbits.IOCAF4 == 1)
    {
        E3_ISR();  
    }
    // interrupt on change for pin E4}
    if(IOCAFbits.IOCAF5 == 1)
    {
        E4_ISR();  
    }
}
   
/**
   E1 Interrupt Service Routine
*/
void E1_ISR(void) {

    // Add custom IOCAF2 code

    // Call the interrupt handler for the callback registered at runtime
    if(E1_InterruptHandler)
    {
        E1_InterruptHandler();
    }
    IOCAFbits.IOCAF2 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF2 at application runtime
*/
void E1_SetInterruptHandler(void (* InterruptHandler)(void)){
    E1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF2
*/
void E1_DefaultInterruptHandler(void){
    // add your E1 interrupt custom code
    // or set custom function using E1_SetInterruptHandler()
}
   
/**
   E2 Interrupt Service Routine
*/
void E2_ISR(void) {

    // Add custom IOCAF3 code

    // Call the interrupt handler for the callback registered at runtime
    if(E2_InterruptHandler)
    {
        E2_InterruptHandler();
    }
    IOCAFbits.IOCAF3 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF3 at application runtime
*/
void E2_SetInterruptHandler(void (* InterruptHandler)(void)){
    E2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF3
*/
void E2_DefaultInterruptHandler(void){
    // add your E2 interrupt custom code
    // or set custom function using E2_SetInterruptHandler()
}
   
/**
   E3 Interrupt Service Routine
*/
void E3_ISR(void) {

    // Add custom IOCAF4 code

    // Call the interrupt handler for the callback registered at runtime
    if(E3_InterruptHandler)
    {
        E3_InterruptHandler();
    }
    IOCAFbits.IOCAF4 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF4 at application runtime
*/
void E3_SetInterruptHandler(void (* InterruptHandler)(void)){
    E3_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF4
*/
void E3_DefaultInterruptHandler(void){
    // add your E3 interrupt custom code
    // or set custom function using E3_SetInterruptHandler()
}
   
/**
   E4 Interrupt Service Routine
*/
void E4_ISR(void) {

    // Add custom IOCAF5 code

    // Call the interrupt handler for the callback registered at runtime
    if(E4_InterruptHandler)
    {
        E4_InterruptHandler();
    }
    IOCAFbits.IOCAF5 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF5 at application runtime
*/
void E4_SetInterruptHandler(void (* InterruptHandler)(void)){
    E4_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF5
*/
void E4_DefaultInterruptHandler(void){
    // add your E4 interrupt custom code
    // or set custom function using E4_SetInterruptHandler()
}
/**
 End of File
*/