/* ----------------------------------------------------------------------------
 *         SAM Software Package License 
 * ----------------------------------------------------------------------------
 * Copyright (c) 2011, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */

#include "variant.h"

/*
 * Pins descriptions
 */
extern const PinDescription g_APinDescription[]=
{
  // LEDS, 0..2
  { PIOC, PIO_PC21, ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // LED AMBER PIN 13
  { PIOC, PIO_PC14, ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // LED AMBER RXL
  { PIOC, PIO_PC19, ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // LED AMBER TXL

  // UART (Serial), 3..5
  { PIOA, PIO_PA11A_URXD, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // URXD
  { PIOA, PIO_PA12A_UTXD, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // UTXD
  { PIOA, PIO_PA11A_URXD|PIO_PA12A_UTXD, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // All UART pins

  // USART0 (Serial2), 6..8
  { PIOA, PIO_PA19A_RXD0, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // RXD0
  { PIOA, PIO_PA18A_TXD0, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // TXD0
  { PIOA, PIO_PA19A_RXD0|PIO_PA18A_TXD0, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // All USART0 pins

  // USART1 (Serial3), 9..11
  { PIOA, PIO_PA21A_RXD1, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // RXD1
  { PIOA, PIO_PA20A_TXD1, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // TXD1
  { PIOA, PIO_PA21A_RXD1|PIO_PA20A_TXD1, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // All USART1 pins

  // USART2 (Serial4), 12..14
  { PIOA, PIO_PA23A_RXD2, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // RXD2
  { PIOA, PIO_PA22A_TXD2, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // TXD2
  { PIOA, PIO_PA23A_RXD2|PIO_PA22A_TXD2, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // All USART2 pins

  // SPI, 15..18
  { PIOA, PIO_PA13A_MISO, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // MISO
  { PIOA, PIO_PA14A_MOSI, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // MOSI
  { PIOA, PIO_PA15A_SPCK, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // SPCK
  { PIOC, PIO_PA16A_NPCS0, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // NPCS0

  // TWI0, 19..21
  { PIOA, PIO_PA9A_TWD0, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // TWD0 - SDA1
  { PIOA, PIO_PA10A_TWCK0, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // TWCK0 - SCL1
  { PIOA, PIO_PA9A_TWD0|PIO_PA10A_TWCK0, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // All TWI0 pins
  
  // TWI1, 22..24
  { PIOA, PIO_PA24A_TWD1, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // TWD1 - SDA0
  { PIOA, PIO_PA25A_TWCK1, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // TWCK1 - SCL0
  { PIOA, PIO_PA24A_TWD1|PIO_PA25A_TWCK1, ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT }, // All TWI1 pins
  
  // Analog, 25..38
  { PIOB, PIO_PB5X1_AD0, ID_PIOB, PIO_INPUT, PIO_DEFAULT }, // AD0
  { PIOB, PIO_PB6X1_AD1, ID_PIOB, PIO_INPUT, PIO_DEFAULT }, // AD1
  { PIOB, PIO_PB7X1_AD2, ID_PIOB, PIO_INPUT, PIO_DEFAULT }, // AD2
  { PIOB, PIO_PB8X1_AD3, ID_PIOB, PIO_INPUT, PIO_DEFAULT }, // AD3
  { PIOC, PIO_PC28X1_AD4, ID_PIOC, PIO_INPUT, PIO_DEFAULT }, // AD4
  { PIOC, PIO_PC29X1_AD5, ID_PIOC, PIO_INPUT, PIO_DEFAULT }, // AD5
  { PIOC, PIO_PC30X1_AD6, ID_PIOC, PIO_INPUT, PIO_DEFAULT }, // AD6
  { PIOC, PIO_PC31X1_AD7, ID_PIOC, PIO_INPUT, PIO_DEFAULT }, // AD7
  
  { PIOB, PIO_PB3X1_AD12B2, ID_PIOB, PIO_INPUT, PIO_DEFAULT }, // AD8
  { PIOB, PIO_PB4X1_AD12B3, ID_PIOB, PIO_INPUT, PIO_DEFAULT }, // AD9
  { PIOC, PIO_PC15X1_AD12B4, ID_PIOC, PIO_INPUT, PIO_DEFAULT }, // AD10
  { PIOC, PIO_PC16X1_AD12B5, ID_PIOC, PIO_INPUT, PIO_DEFAULT }, // AD11
  { PIOC, PIO_PC17X1_AD12B6, ID_PIOC, PIO_INPUT, PIO_DEFAULT }, // AD12
  { PIOC, PIO_PC18X1_AD12B7, ID_PIOC, PIO_INPUT, PIO_DEFAULT }, // AD13
  
  // External DAC, 39..41
  { PIOB, PIO_PB9, ID_PIOB, PIO_OUTPUT_1, PIO_DEFAULT }, // DAC-CS
  { PIOB, PIO_PB10, ID_PIOB, PIO_OUTPUT_1, PIO_DEFAULT }, // DAC-SCK
  { PIOB, PIO_PB14, ID_PIOB, PIO_OUTPUT_1, PIO_DEFAULT }, // DAC-DIN
  
  // PWM, 42..50
  { PIOA, PIO_PA30B_TIOA2, ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT }, // PWM
  { PIOA, PIO_PA4B_PWMH0, ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT }, // PWMH0
  { PIOA, PIO_PA5B_PWMH1, ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT }, // PWMH1
  { PIOA, PIO_PA6B_PWMH2, ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT }, // PWMH2
  { PIOB, PIO_PB16B_PWMH3, ID_PIOB, PIO_PERIPH_B, PIO_DEFAULT }, // PWMH3
  { PIOC, PIO_PC6B_PWML0, ID_PIOC, PIO_PERIPH_B, PIO_DEFAULT }, // PWML0
  { PIOC, PIO_PC7B_PWML1, ID_PIOC, PIO_PERIPH_B, PIO_DEFAULT }, // PWML1
  { PIOC, PIO_PC8B_PWML2, ID_PIOC, PIO_PERIPH_B, PIO_DEFAULT }, // PWML2
  { PIOC, PIO_PC9B_PWML3, ID_PIOC, PIO_PERIPH_B, PIO_DEFAULT }, // PWML3
  
  // 51
  { PIOA, PIO_PA1, ID_PIOA, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 10
  
  // Digital, 52..83
  { PIOC, PIO_PC3 , ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 22
  { PIOC, PIO_PC2 , ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 23
  { PIOC, PIO_PC1 , ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 24
  { PIOC, PIO_PC0 , ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 25
  { PIOB, PIO_PB28, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 26
  { PIOB, PIO_PB27, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 27
  { PIOB, PIO_PB26, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 28
  { PIOB, PIO_PB25, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 29
  { PIOB, PIO_PB24, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 30
  { PIOB, PIO_PB23, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 31
  { PIOB, PIO_PB22, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 32
  { PIOB, PIO_PB21, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 33
  { PIOB, PIO_PB20, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 34
  { PIOB, PIO_PB19, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 35
  { PIOB, PIO_PB18, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 36
  { PIOB, PIO_PB17, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 37
  { PIOA, PIO_PA28, ID_PIOA, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 38
  { PIOA, PIO_PA29, ID_PIOA, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 39
  { PIOC, PIO_PC22, ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 40
  { PIOA, PIO_PA31, ID_PIOA, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 41
  { PIOC, PIO_PC23, ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 42
  { PIOB, PIO_PB0 , ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 43
  { PIOC, PIO_PC24, ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 44
  { PIOB, PIO_PB1 , ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 45
  { PIOC, PIO_PC25, ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 46
  { PIOB, PIO_PB2 , ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 47
  { PIOC, PIO_PC26, ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 48
  { PIOB, PIO_PB11, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 49
  { PIOB, PIO_PB12, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 50
  { PIOB, PIO_PB13, ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 51
  { PIOC, PIO_PC27, ID_PIOC, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 52
  { PIOA, PIO_PA27, ID_PIOA, PIO_OUTPUT_0, PIO_DEFAULT }, // PIN 53

  { NULL, 0, 0, PIO_NOT_A_PIN, PIO_DEFAULT } // END
} ;

/*
 * UART objects
 */
RingBuffer rx_buffer1 ;
RingBuffer tx_buffer1 ;

UARTClass Serial( UART, UART_IRQn, ID_UART, &rx_buffer1, &tx_buffer1 ) ;

#ifdef __cplusplus
extern "C" {
#endif

// IT handlers
extern void UART_IrqHandler( void )
{
  Serial.IrqHandler() ;
}

#ifdef __cplusplus
}
#endif

// ----------------------------------------------------------------------------
/*
 * USART objects
 */
RingBuffer rx_buffer2 ;
RingBuffer tx_buffer2 ;
RingBuffer rx_buffer3 ;
RingBuffer tx_buffer3 ;
RingBuffer rx_buffer4 ;
RingBuffer tx_buffer4 ;

USARTClass Serial2( USART0, USART0_IRQn, ID_USART0, &rx_buffer2, &tx_buffer2 ) ;
USARTClass Serial3( USART1, USART1_IRQn, ID_USART1, &rx_buffer3, &tx_buffer3 ) ;
USARTClass Serial4( USART2, USART2_IRQn, ID_USART2, &rx_buffer4, &tx_buffer4 ) ;

#ifdef __cplusplus
extern "C" {
#endif

// IT handlers
extern void USART0_IrqHandler( void )
{
  Serial2.IrqHandler() ;
}

extern void USART1_IrqHandler( void )
{
  Serial3.IrqHandler() ;
}

extern void USART2_IrqHandler( void )
{
  Serial4.IrqHandler() ;
}

#ifdef __cplusplus
}
#endif

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
 *
 */
extern void init( void )
{
	SystemInit() ;

    /* Set Systick to 1ms interval, common to all SAM3 variants */
	if ( SysTick_Config( SystemCoreClock / 1000 ) )
  {
    /* Capture error */
    while ( 1 ) ;
	}

  /* Disable watchdog, common to all SAM variants */
  WDT_Disable( WDT ) ;

  // Initialize Serial port UART, common to all SAM3 variants
  PIO_Configure( g_APinDescription[PINS_UART].pPort, g_APinDescription[PINS_UART].ulPinType,
                 g_APinDescription[PINS_UART].ulPin, g_APinDescription[PINS_UART].ulPinAttribute ) ;
}
#ifdef __cplusplus
}
#endif

