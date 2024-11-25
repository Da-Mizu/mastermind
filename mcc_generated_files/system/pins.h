/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA2 aliases
#define E1_TRIS                 TRISAbits.TRISA2
#define E1_LAT                  LATAbits.LATA2
#define E1_PORT                 PORTAbits.RA2
#define E1_WPU                  WPUAbits.WPUA2
#define E1_OD                   ODCONAbits.ODCA2
#define E1_ANS                  ANSELAbits.ANSA2
#define E1_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define E1_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define E1_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define E1_GetValue()           PORTAbits.RA2
#define E1_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define E1_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define E1_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define E1_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define E1_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define E1_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define E1_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define E1_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
#define RA2_SetInterruptHandler  E1_SetInterruptHandler
// get/set IO_RA3 aliases
#define E2_TRIS                 TRISAbits.TRISA3
#define E2_LAT                  LATAbits.LATA3
#define E2_PORT                 PORTAbits.RA3
#define E2_WPU                  WPUAbits.WPUA3
#define E2_OD                   ODCONAbits.ODCA3
#define E2_ANS                  ANSELAbits.ANSA3
#define E2_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define E2_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define E2_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define E2_GetValue()           PORTAbits.RA3
#define E2_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define E2_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define E2_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define E2_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define E2_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define E2_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define E2_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define E2_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)
#define RA3_SetInterruptHandler  E2_SetInterruptHandler
// get/set IO_RA4 aliases
#define E3_TRIS                 TRISAbits.TRISA4
#define E3_LAT                  LATAbits.LATA4
#define E3_PORT                 PORTAbits.RA4
#define E3_WPU                  WPUAbits.WPUA4
#define E3_OD                   ODCONAbits.ODCA4
#define E3_ANS                  ANSELAbits.ANSA4
#define E3_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define E3_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define E3_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define E3_GetValue()           PORTAbits.RA4
#define E3_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define E3_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define E3_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define E3_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define E3_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define E3_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define E3_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define E3_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)
#define RA4_SetInterruptHandler  E3_SetInterruptHandler
// get/set IO_RA5 aliases
#define E4_TRIS                 TRISAbits.TRISA5
#define E4_LAT                  LATAbits.LATA5
#define E4_PORT                 PORTAbits.RA5
#define E4_WPU                  WPUAbits.WPUA5
#define E4_OD                   ODCONAbits.ODCA5
#define E4_ANS                  ANSELAbits.ANSA5
#define E4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define E4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define E4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define E4_GetValue()           PORTAbits.RA5
#define E4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define E4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define E4_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define E4_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define E4_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define E4_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define E4_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define E4_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)
#define RA5_SetInterruptHandler  E4_SetInterruptHandler
// get/set IO_RA6 aliases
#define S1_TRIS                 TRISAbits.TRISA6
#define S1_LAT                  LATAbits.LATA6
#define S1_PORT                 PORTAbits.RA6
#define S1_WPU                  WPUAbits.WPUA6
#define S1_OD                   ODCONAbits.ODCA6
#define S1_ANS                  ANSELAbits.ANSA6
#define S1_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define S1_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define S1_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define S1_GetValue()           PORTAbits.RA6
#define S1_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define S1_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define S1_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define S1_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define S1_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define S1_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define S1_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define S1_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)
// get/set IO_RC0 aliases
#define S2_TRIS                 TRISCbits.TRISC0
#define S2_LAT                  LATCbits.LATC0
#define S2_PORT                 PORTCbits.RC0
#define S2_WPU                  WPUCbits.WPUC0
#define S2_OD                   ODCONCbits.ODCC0
#define S2_ANS                  ANSELCbits.ANSC0
#define S2_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define S2_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define S2_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define S2_GetValue()           PORTCbits.RC0
#define S2_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define S2_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define S2_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define S2_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define S2_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define S2_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define S2_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define S2_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC1 aliases
#define S3_TRIS                 TRISCbits.TRISC1
#define S3_LAT                  LATCbits.LATC1
#define S3_PORT                 PORTCbits.RC1
#define S3_WPU                  WPUCbits.WPUC1
#define S3_OD                   ODCONCbits.ODCC1
#define S3_ANS                  ANSELCbits.ANSC1
#define S3_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define S3_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define S3_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define S3_GetValue()           PORTCbits.RC1
#define S3_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define S3_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define S3_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define S3_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define S3_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define S3_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define S3_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define S3_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
// get/set IO_RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.WPUC3
#define IO_RC3_OD                   ODCONCbits.ODCC3
#define IO_RC3_ANS                  ANSELCbits.ANSC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)
// get/set IO_RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.WPUC5
#define IO_RC5_OD                   ODCONCbits.ODCC5
#define IO_RC5_ANS                  ANSELCbits.ANSC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the E1 pin functionality
 * @param none
 * @return none
 */
void E1_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for E1 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for E1 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void E1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for E1 pin.
 *        This is a dynamic interrupt handler to be used together with the E1_SetInterruptHandler() method.
 *        This handler is called every time the E1 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*E1_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for E1 pin. 
 *        This is a predefined interrupt handler to be used together with the E1_SetInterruptHandler() method.
 *        This handler is called every time the E1 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void E1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the E2 pin functionality
 * @param none
 * @return none
 */
void E2_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for E2 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for E2 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void E2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for E2 pin.
 *        This is a dynamic interrupt handler to be used together with the E2_SetInterruptHandler() method.
 *        This handler is called every time the E2 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*E2_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for E2 pin. 
 *        This is a predefined interrupt handler to be used together with the E2_SetInterruptHandler() method.
 *        This handler is called every time the E2 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void E2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the E3 pin functionality
 * @param none
 * @return none
 */
void E3_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for E3 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for E3 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void E3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for E3 pin.
 *        This is a dynamic interrupt handler to be used together with the E3_SetInterruptHandler() method.
 *        This handler is called every time the E3 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*E3_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for E3 pin. 
 *        This is a predefined interrupt handler to be used together with the E3_SetInterruptHandler() method.
 *        This handler is called every time the E3 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void E3_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the E4 pin functionality
 * @param none
 * @return none
 */
void E4_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for E4 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for E4 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void E4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for E4 pin.
 *        This is a dynamic interrupt handler to be used together with the E4_SetInterruptHandler() method.
 *        This handler is called every time the E4 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*E4_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for E4 pin. 
 *        This is a predefined interrupt handler to be used together with the E4_SetInterruptHandler() method.
 *        This handler is called every time the E4 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void E4_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/