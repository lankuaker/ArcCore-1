/**************************************************************************** 
 * PROJECT     : MPC5607B
 *               
 * FILE        : MPC5607B_2.01.h
 * 
 * DESCRIPTION : This is the header file describing the register
 *               set for MPC5607B
 * 
 * COPYRIGHT   :(c) 2011, Freescale  
 * 
 * VERSION     : 2.01 
 * DATE        : 3.30.2011 
 * AUTHOR      : r23668
 * HISTORY     : Based Upon Bolero 1M; Version 0.03 header file
 *			    Updated and corrected errors present on B1.5M 01.04.1 
 *				and have brought up to date and format with B3M. Corrected
 *              LinFlex error.
 * 
*
* Example instantiation and use:            
*                                           
*  <MODULE>.<REGISTER>.B.<BIT> = 1;         
*  <MODULE>.<REGISTER>.R       = 0x10000000;

*****************************************************************************/

#ifndef _JDP_H_
#define _JDP_H_

#include "typedefs.h"

#ifdef  __cplusplus
extern "C" {
#endif

#ifdef __MWERKS__
#pragma push
#pragma ANSI_strict off
#endif

//#define CUT2
/****************************************************************************/
/*                          MODULE : ADC0                                   */
/****************************************************************************/
    struct ADC0_tag {

        union { /* ADC0 Main Configuration Register (Base+0x0000) */
            vuint32_t R;
            struct {                
                vuint32_t OWREN:1;
                vuint32_t WLSIDE:1;
                vuint32_t MODE:1;
                vuint32_t:4;
                vuint32_t NSTART:1;
                vuint32_t:1;
                vuint32_t JTRGEN:1;
                vuint32_t JEDGE:1;
                vuint32_t JSTART:1;
                vuint32_t:2;
                vuint32_t CTUEN:1;
                vuint32_t:8;
                vuint32_t ADCLKSEL:1;
                vuint32_t ABORTCHAIN:1;
                vuint32_t ABORT:1;
                vuint32_t ACKO:1;
                vuint32_t:4;			
                vuint32_t PWDN:1;                
            } B;
        } MCR;                 
        
        union { /* ADC0 Main Status Register (Base+0x0004) */
            vuint32_t R;
            struct {                
                vuint32_t:7;
                vuint32_t NSTART:1;
                vuint32_t JABORT:1;
                vuint32_t:2;
                vuint32_t JSTART:1;
                vuint32_t:3;
                vuint32_t CTUSTART:1;
                vuint32_t CHADDR:7;
                vuint32_t:3;
                vuint32_t ACKO:1;
                vuint32_t:2; 
                vuint32_t ADCSTATUS:3;
            } B;
        } MSR;                 
        
      vuint8_t ADC0_reserved0[8]; /* Reserved 8 bytes (Base+0x0008-0x000F) */
        
        union { /* ADC0 Interrupt Status (Base+0x0010) */
            vuint32_t R;
            struct {
                vuint32_t:27;
                vuint32_t EOCTU:1;
                vuint32_t JEOC:1;
                vuint32_t JECH:1;
                vuint32_t EOC:1;
                vuint32_t ECH:1;
            } B;
        } ISR;                
 
		 
          union { /* ADC0 Channel Pending 0 (Base+0x0014) */
            vuint32_t R; /*      (For precision channels)        */
            struct {
                vuint32_t EOC_CH31:1;
                vuint32_t EOC_CH30:1;
                vuint32_t EOC_CH29:1;
                vuint32_t EOC_CH28:1;
                vuint32_t EOC_CH27:1;
                vuint32_t EOC_CH26:1;
                vuint32_t EOC_CH25:1;
                vuint32_t EOC_CH24:1;
                vuint32_t EOC_CH23:1;
                vuint32_t EOC_CH22:1;
                vuint32_t EOC_CH21:1;
                vuint32_t EOC_CH20:1;
                vuint32_t EOC_CH19:1;
                vuint32_t EOC_CH18:1;
                vuint32_t EOC_CH17:1;
                vuint32_t EOC_CH16:1;
                vuint32_t EOC_CH15:1;
                vuint32_t EOC_CH14:1;
                vuint32_t EOC_CH13:1;
                vuint32_t EOC_CH12:1;
                vuint32_t EOC_CH11:1;
                vuint32_t EOC_CH10:1;
                vuint32_t EOC_CH9:1;
                vuint32_t EOC_CH8:1;
                vuint32_t EOC_CH7:1;
                vuint32_t EOC_CH6:1;
                vuint32_t EOC_CH5:1;
                vuint32_t EOC_CH4:1;
                vuint32_t EOC_CH3:1;
                vuint32_t EOC_CH2:1;
                vuint32_t EOC_CH1:1;
                vuint32_t EOC_CH0:1;
            } B;
        } CEOCFR0;         
        
        
          union { /* ADC0 Channel Pending Register 1 (Base+0x0018)*/
            vuint32_t R;
            struct {
                vuint32_t EOC_CH63:1;
                vuint32_t EOC_CH62:1;
                vuint32_t EOC_CH61:1;
                vuint32_t EOC_CH60:1;
                vuint32_t EOC_CH59:1;
                vuint32_t EOC_CH58:1;
                vuint32_t EOC_CH57:1;
                vuint32_t EOC_CH56:1;
                vuint32_t EOC_CH55:1;
                vuint32_t EOC_CH54:1;
                vuint32_t EOC_CH53:1;
                vuint32_t EOC_CH52:1;
                vuint32_t EOC_CH51:1;
                vuint32_t EOC_CH50:1;
                vuint32_t EOC_CH49:1;
                vuint32_t EOC_CH48:1;
                vuint32_t EOC_CH47:1;
                vuint32_t EOC_CH46:1;
                vuint32_t EOC_CH45:1;
                vuint32_t EOC_CH44:1;
                vuint32_t EOC_CH43:1;
                vuint32_t EOC_CH42:1;
                vuint32_t EOC_CH41:1;
                vuint32_t EOC_CH40:1;
                vuint32_t EOC_CH39:1;
                vuint32_t EOC_CH38:1;
                vuint32_t EOC_CH37:1;
                vuint32_t EOC_CH36:1;
                vuint32_t EOC_CH35:1;
                vuint32_t EOC_CH34:1;
                vuint32_t EOC_CH33:1;
                vuint32_t EOC_CH32:1;
            } B;
        } CEOCFR1;       
        
		union { /* ADC0 Channel Pending 2 (Base+0x001C) */
			vuint32_t R; /*      (For external mux'd Channels)   */
			struct {
				vuint32_t EOC_CH95:1;
				vuint32_t EOC_CH94:1;
				vuint32_t EOC_CH93:1;
				vuint32_t EOC_CH92:1;
				vuint32_t EOC_CH91:1;
				vuint32_t EOC_CH90:1;
				vuint32_t EOC_CH89:1;
				vuint32_t EOC_CH88:1;
				vuint32_t EOC_CH87:1;
				vuint32_t EOC_CH86:1;
				vuint32_t EOC_CH85:1;
				vuint32_t EOC_CH84:1;
				vuint32_t EOC_CH83:1;
				vuint32_t EOC_CH82:1;
				vuint32_t EOC_CH81:1;
				vuint32_t EOC_CH80:1;
				vuint32_t EOC_CH79:1;
				vuint32_t EOC_CH78:1;
				vuint32_t EOC_CH77:1;
				vuint32_t EOC_CH76:1;
				vuint32_t EOC_CH75:1;
				vuint32_t EOC_CH74:1;
				vuint32_t EOC_CH73:1;
				vuint32_t EOC_CH72:1;
				vuint32_t EOC_CH71:1;
				vuint32_t EOC_CH70:1;
				vuint32_t EOC_CH69:1;
				vuint32_t EOC_CH68:1;
				vuint32_t EOC_CH67:1;
				vuint32_t EOC_CH66:1;
				vuint32_t EOC_CH65:1;
				vuint32_t EOC_CH64:1;
			} B;
		} CE0CFR2;		
        

        union { 	/* ADC0 Interrupt Mask (Base+0020) */
            vuint32_t R;
            struct {
                vuint32_t:27;
                vuint32_t MSKEOCTU:1;
                vuint32_t MSKJEOC:1;
                vuint32_t MSKJECH:1;
                vuint32_t MSKEOC:1;
                vuint32_t MSKECH:1;	
            } B;
        } IMR;                 
             


    union { /* ADC0 Channel Interrupt Mask 0 (Base+0x0024) */
        vuint32_t R; /*      (For Precision Channels)        */       
        struct {
            vuint32_t:16;
            vuint32_t CIM15:1;
            vuint32_t CIM14:1;
            vuint32_t CIM13:1;
            vuint32_t CIM12:1;
            vuint32_t CIM11:1;
            vuint32_t CIM10:1;
            vuint32_t CIM9:1;
            vuint32_t CIM8:1;
            vuint32_t CIM7:1;
            vuint32_t CIM6:1;
            vuint32_t CIM5:1;
            vuint32_t CIM4:1;
            vuint32_t CIM3:1;
            vuint32_t CIM2:1;
            vuint32_t CIM1:1;
            vuint32_t CIM0:1;
        } B;
    } CIMR0;

    union { /* ADC0 Channel Interrupt Mask 1 (+0x0028) */
        vuint32_t R; /*      (For Standard Channels)     */       
        struct {
            vuint32_t CIM63:1;
            vuint32_t CIM62:1;
            vuint32_t CIM61:1;
            vuint32_t CIM60:1;
            vuint32_t CIM59:1;
            vuint32_t CIM58:1;
            vuint32_t CIM57:1;
            vuint32_t CIM56:1;
            vuint32_t CIM55:1;
            vuint32_t CIM54:1;
            vuint32_t CIM53:1;
            vuint32_t CIM52:1;
            vuint32_t CIM51:1;
            vuint32_t CIM50:1;
            vuint32_t CIM49:1;
            vuint32_t CIM48:1;
            vuint32_t CIM47:1;
            vuint32_t CIM46:1;
            vuint32_t CIM45:1;
            vuint32_t CIM44:1;
            vuint32_t CIM43:1;
            vuint32_t CIM42:1;
            vuint32_t CIM41:1;
            vuint32_t CIM40:1;
            vuint32_t CIM39:1;
            vuint32_t CIM38:1;
            vuint32_t CIM37:1;
            vuint32_t CIM36:1;
            vuint32_t CIM35:1;
            vuint32_t CIM34:1;
            vuint32_t CIM33:1;
            vuint32_t CIM32:1;
        } B;
    } CIMR1;

    union { /* ADC0 Channel Interrupt Mask 2 (+0x002C) */
        vuint32_t R; /*      (For PExternal Mux'd Channels)  */   
        struct {
            vuint32_t CIM95:1;
            vuint32_t CIM94:1;
            vuint32_t CIM93:1;
            vuint32_t CIM92:1;
            vuint32_t CIM91:1;
            vuint32_t CIM90:1;
            vuint32_t CIM89:1;
            vuint32_t CIM88:1;
            vuint32_t CIM87:1;
            vuint32_t CIM86:1;
            vuint32_t CIM85:1;
            vuint32_t CIM84:1;
            vuint32_t CIM83:1;
            vuint32_t CIM82:1;
            vuint32_t CIM81:1;
            vuint32_t CIM80:1;
            vuint32_t CIM79:1;
            vuint32_t CIM78:1;
            vuint32_t CIM77:1;
            vuint32_t CIM76:1;
            vuint32_t CIM75:1;
            vuint32_t CIM74:1;
            vuint32_t CIM73:1;
            vuint32_t CIM72:1;
            vuint32_t CIM71:1;
            vuint32_t CIM70:1;
            vuint32_t CIM69:1;
            vuint32_t CIM68:1;
            vuint32_t CIM67:1;
            vuint32_t CIM66:1;
            vuint32_t CIM65:1;
            vuint32_t CIM64:1;
        } B;
    } CIMR2; 

        union { /* ADC0 Watchdog Threshold Interrupt Status (+0x0030)*/
            vuint32_t R;
            struct {             
                vuint32_t:20;
                vuint32_t WDG5H:1; 
                vuint32_t WDG5L:1; 
                vuint32_t WDG4H:1; 
                vuint32_t WDG4L:1; 
                vuint32_t WDG3H:1; 
                vuint32_t WDG3L:1; 
                vuint32_t WDG2H:1; 
                vuint32_t WDG2L:1; 
				vuint32_t WDG1H:1;
				vuint32_t WDG1L:1; 
				vuint32_t WDG0H:1; 
                vuint32_t WDG0L:1; 
            } B;  
        } WTISR;            
        
        union { /* ADC0 Watchdog Threshold Interrupt Mask (+0x0034) */
            vuint32_t R;
            struct {             
                vuint32_t:20;
                vuint32_t MSKWDG5H:1; 
                vuint32_t MSKWDG5L:1; 
                vuint32_t MSKWDG4H:1; 
                vuint32_t MSKWDG4L:1;
                vuint32_t MSKWDG3H:1; 
                vuint32_t MSKWDG2H:1; 
                vuint32_t MSKWDG1H:1; 
                vuint32_t MSKWDG0H:1; 
				vuint32_t MSKWDG3L:1; 
				vuint32_t MSKWDG2L:1; 
				vuint32_t MSKWDG1L:1; 
                vuint32_t MSKWDG0L:1; 
            } B;  
        } WTIMR;            

 vuint8_t ADC0_reserved1[8]; /* Reserved 8 bytes (Base+0x0038-0x003F) */
               
        union { /* ADC0 DMA Enable (Base+0x0040) */
            vuint32_t R;
            struct {             
                vuint32_t:30;
                vuint32_t DCLR:1;
                vuint32_t DMAEN:1;
            } B;
        } DMAE;           
        
		union { /* ADC0 DMA Channel Select 0 (Base+0x0044) */
			vuint32_t R; /*      (for precision channels)           */
            struct { 
	            vuint32_t:16;
                vuint32_t DMA15:1;
                vuint32_t DMA14:1;
                vuint32_t DMA13:1;
                vuint32_t DMA12:1;
                vuint32_t DMA11:1;
                vuint32_t DMA10:1;
                vuint32_t DMA9:1;
                vuint32_t DMA8:1;
                vuint32_t DMA7:1;
                vuint32_t DMA6:1;
                vuint32_t DMA5:1;
                vuint32_t DMA4:1;
                vuint32_t DMA3:1;
                vuint32_t DMA2:1;
                vuint32_t DMA1:1;
                vuint32_t DMA0:1;
            } B;
        } DMAR0;            
		   
	 union { /* ADC0 DMA Channel Select 1 (Base+0x0048) */
        vuint32_t R; /*      (for standard channels)      */      
        struct {
            vuint32_t DMA63:1;
            vuint32_t DMA62:1;
            vuint32_t DMA61:1;
            vuint32_t DMA60:1;
            vuint32_t DMA59:1;
            vuint32_t DMA58:1;
            vuint32_t DMA57:1;
            vuint32_t DMA56:1;
            vuint32_t DMA55:1;
            vuint32_t DMA54:1;
            vuint32_t DMA53:1;
            vuint32_t DMA52:1;
            vuint32_t DMA51:1;
            vuint32_t DMA50:1;
            vuint32_t DMA49:1;
            vuint32_t DMA48:1;
            vuint32_t DMA47:1;
            vuint32_t DMA46:1;
            vuint32_t DMA45:1;
            vuint32_t DMA44:1;
            vuint32_t DMA43:1;
            vuint32_t DMA42:1;
            vuint32_t DMA41:1;
            vuint32_t DMA40:1;
            vuint32_t DMA39:1;
            vuint32_t DMA38:1;
            vuint32_t DMA37:1;
            vuint32_t DMA36:1;
            vuint32_t DMA35:1;
            vuint32_t DMA34:1;
            vuint32_t DMA33:1;
            vuint32_t DMA32:1;
        } B;
    } DMAR1;

    union { /* ADC0 DMA Channel Select 2 (Base+0x004C) */
        vuint32_t R; /*      (for external mux'd channels) */     
        struct {
            vuint32_t DMA95:1;
            vuint32_t DMA94:1;
            vuint32_t DMA93:1;
            vuint32_t DMA92:1;
            vuint32_t DMA91:1;
            vuint32_t DMA90:1;
            vuint32_t DMA89:1;
            vuint32_t DMA88:1;
            vuint32_t DMA87:1;
            vuint32_t DMA86:1;
            vuint32_t DMA85:1;
            vuint32_t DMA84:1;
            vuint32_t DMA83:1;
            vuint32_t DMA82:1;
            vuint32_t DMA81:1;
            vuint32_t DMA80:1;
            vuint32_t DMA79:1;
            vuint32_t DMA78:1;
            vuint32_t DMA77:1;
            vuint32_t DMA76:1;
            vuint32_t DMA75:1;
            vuint32_t DMA74:1;
            vuint32_t DMA73:1;
            vuint32_t DMA72:1;
            vuint32_t DMA71:1;
            vuint32_t DMA70:1;
            vuint32_t DMA69:1;
            vuint32_t DMA68:1;
            vuint32_t DMA67:1;
            vuint32_t DMA66:1;
            vuint32_t DMA65:1;
            vuint32_t DMA64:1;
        } B;
    } DMAR2; 

    vuint8_t ADC0_reserved2[16]; /* Reserved 16 bytes (Base+0x0050-0x005F) */
        

	/*Note the threshold registers are split [0..3] then [4..5]. For this  
    reason thay are NOT implemented as an array in order to maintain    
    concistency through all THRHLR registers  */                          

    union { /* ADC0 Threshold  0 (Base+0x0060) */
        vuint32_t R;
        struct {
          vuint32_t:6;
            vuint32_t THRH:10;
            vuint32_t:6;
            vuint32_t THRL:10;
        } B;
    } THRHLR0;

    union { /* ADC0 Threshold  1 (Base+0x0064) */
        vuint32_t R;
        struct {
          vuint32_t:6;
            vuint32_t THRH:10;
            vuint32_t:6;
            vuint32_t THRL:10;
        } B;
    } THRHLR1;

    union { /* ADC0 Threshold  2 (Base+0x0068) */
        vuint32_t R;
        struct {
          vuint32_t:6;
            vuint32_t THRH:10;
            vuint32_t:6;
            vuint32_t THRL:10;
        } B;
    } THRHLR2;

    union { /* ADC0 Threshold  3 (Base+0x006C) */
        vuint32_t R;
        struct {
          vuint32_t:6;
            vuint32_t THRH:10;
            vuint32_t:6;
            vuint32_t THRL:10;
        } B;
    } THRHLR3; 
                        

    vuint8_t ADC0_reserved3[16]; /* Reserved 16 bytes (Base+0x0070-0x007F) */
	
        union { /* ADC0 Presampling Control (Base+0x0080) */
            vuint32_t R;
            struct {
	            vuint32_t:25;
                vuint32_t PREVAL2:2;
                vuint32_t PREVAL1:2;
                vuint32_t PREVAL0:2;
                vuint32_t PRECONV:1;        
            } B;
        } PSCR;  

			
      union { /* ADC0 Presampling 0 (Base+0x0084) */
			vuint32_t R; /*      (precision channels)  */
            struct {
                vuint32_t PRES31:1;
                vuint32_t PRES30:1;
                vuint32_t PRES29:1;
                vuint32_t PRES28:1;
                vuint32_t PRES27:1;
                vuint32_t PRES26:1;
                vuint32_t PRES25:1;
                vuint32_t PRES24:1;
                vuint32_t PRES23:1;
                vuint32_t PRES22:1;
                vuint32_t PRES21:1;
                vuint32_t PRES20:1;
                vuint32_t PRES19:1;
                vuint32_t PRES18:1;
                vuint32_t PRES17:1;
                vuint32_t PRES16:1;
                vuint32_t PRES15:1;
                vuint32_t PRES14:1;
                vuint32_t PRES13:1;
                vuint32_t PRES12:1;
                vuint32_t PRES11:1;
                vuint32_t PRES10:1;
                vuint32_t PRES9:1;
                vuint32_t PRES8:1;
                vuint32_t PRES7:1;
                vuint32_t PRES6:1;
                vuint32_t PRES5:1;
                vuint32_t PRES4:1;
                vuint32_t PRES3:1;
                vuint32_t PRES2:1;
                vuint32_t PRES1:1;
                vuint32_t PRES0:1;
            } B;
        } PSR0;		
		
	union { /* ADC0 Presampling 1 (Base+0x0088) */
        vuint32_t R; /*      (standard channels)  */       
        struct {
            vuint32_t PRES63:1;
            vuint32_t PRES62:1;
            vuint32_t PRES61:1;
            vuint32_t PRES60:1;
            vuint32_t PRES59:1;
            vuint32_t PRES58:1;
            vuint32_t PRES57:1;
            vuint32_t PRES56:1;
            vuint32_t PRES55:1;
            vuint32_t PRES54:1;
            vuint32_t PRES53:1;
            vuint32_t PRES52:1;
            vuint32_t PRES51:1;
            vuint32_t PRES50:1;
            vuint32_t PRES49:1;
            vuint32_t PRES48:1;
            vuint32_t PRES47:1;
            vuint32_t PRES46:1;
            vuint32_t PRES45:1;
            vuint32_t PRES44:1;
            vuint32_t PRES43:1;
            vuint32_t PRES42:1;
            vuint32_t PRES41:1;
            vuint32_t PRES40:1;
            vuint32_t PRES39:1;
            vuint32_t PRES38:1;
            vuint32_t PRES37:1;
            vuint32_t PRES36:1;
            vuint32_t PRES35:1;
            vuint32_t PRES34:1;
            vuint32_t PRES33:1;
            vuint32_t PRES32:1;
        } B;
    } PSR1;

    union { /* ADC0 Presampling 2 (Base+0x008C) */
        vuint32_t R; /*      (external mux'd channels)   */
        struct {
            vuint32_t PRES95:1;
            vuint32_t PRES94:1;
            vuint32_t PRES93:1;
            vuint32_t PRES92:1;
            vuint32_t PRES91:1;
            vuint32_t PRES90:1;
            vuint32_t PRES89:1;
            vuint32_t PRES88:1;
            vuint32_t PRES87:1;
            vuint32_t PRES86:1;
            vuint32_t PRES85:1;
            vuint32_t PRES84:1;
            vuint32_t PRES83:1;
            vuint32_t PRES82:1;
            vuint32_t PRES81:1;
            vuint32_t PRES80:1;
            vuint32_t PRES79:1;
            vuint32_t PRES78:1;
            vuint32_t PRES77:1;
            vuint32_t PRES76:1;
            vuint32_t PRES75:1;
            vuint32_t PRES74:1;
            vuint32_t PRES73:1;
            vuint32_t PRES72:1;
            vuint32_t PRES71:1;
            vuint32_t PRES70:1;
            vuint32_t PRES69:1;
            vuint32_t PRES68:1;
            vuint32_t PRES67:1;
            vuint32_t PRES66:1;
            vuint32_t PRES65:1;
            vuint32_t PRES64:1;
        } B;
    } PSR2; 

		vuint8_t ADC0_reserved4[4]; /* Reserved 4 bytes (Base+0x0090-0x0093) */
        
 

    /* Note the following CTR registers are NOT implemented as an array to */
    /*  try and maintain some concistency through the header file          */
    /*  (The registers are however identical)                              */

    union { /* ADC0 Conversion Timing 0 (Base+0x0094) */
        vuint32_t R; /*      (precision channels)       */       
        struct {
            vuint32_t:16;
            vuint32_t INPLATCH:1;
            vuint32_t:1;
            vuint32_t OFFSHIFT:2;
            vuint32_t:1;
            vuint32_t INPCMP:2;
            vuint32_t:1;
            vuint32_t INPSAMP:8;
        } B;
    } CTR0;

    union { /* ADC0 Conversion Timing 1 (Base+0x0098) */
        vuint32_t R; /*      (standard channels)        */      
        struct {
            vuint32_t:16;
            vuint32_t INPLATCH:1;
            vuint32_t:1;
            vuint32_t OFFSHIFT:2;
            vuint32_t:1;
            vuint32_t INPCMP:2;
            vuint32_t:1;
            vuint32_t INPSAMP:8;
        } B;
    } CTR1;

    union { /* ADC0 Conversion Timing 2 (Base+0x009C) */
        vuint32_t R; /*      (precision channels)       */       
        struct {
            vuint32_t:16;
            vuint32_t INPLATCH:1;
            vuint32_t:1;
            vuint32_t OFFSHIFT:2;
            vuint32_t:1;
            vuint32_t INPCMP:2;
            vuint32_t:1;
            vuint32_t INPSAMP:8;
        } B;
    } CTR2;		

        vuint8_t ADC0_reserved5[4]; /* Reserved 4 bytes (Base+0x00A0-0x00A3) */
            

union { /* ADC0 Normal Conversion Mask 0 (Base+0x00A4) */
        vuint32_t R; /*      (precision channels)        */          
        struct {
            vuint32_t :16;
            vuint32_t CH15:1;
            vuint32_t CH14:1;
            vuint32_t CH13:1;
            vuint32_t CH12:1;
            vuint32_t CH11:1;
            vuint32_t CH10:1;
            vuint32_t CH9:1;
            vuint32_t CH8:1;
            vuint32_t CH7:1;
            vuint32_t CH6:1;
            vuint32_t CH5:1;
            vuint32_t CH4:1;
            vuint32_t CH3:1;
            vuint32_t CH2:1;
            vuint32_t CH1:1;
            vuint32_t CH0:1;
        } B;
    } NCMR0;

    union { /* ADC0 Normal Conversion Mask 1 (Base+0x00A8) */
        vuint32_t R; /*      (standard channels)             */       
        struct {
            vuint32_t :4;
            vuint32_t CH59:1;
            vuint32_t CH58:1;
            vuint32_t CH57:1;
            vuint32_t CH56:1;
            vuint32_t CH55:1;
            vuint32_t CH54:1;
            vuint32_t CH53:1;
            vuint32_t CH52:1;
            vuint32_t CH51:1;
            vuint32_t CH50:1;
            vuint32_t CH49:1;
            vuint32_t CH48:1;
            vuint32_t CH47:1;
            vuint32_t CH46:1;
            vuint32_t CH45:1;
            vuint32_t CH44:1;
            vuint32_t CH43:1;
            vuint32_t CH42:1;
            vuint32_t CH41:1;
            vuint32_t CH40:1;
            vuint32_t CH39:1;
            vuint32_t CH38:1;
            vuint32_t CH37:1;
            vuint32_t CH36:1;
            vuint32_t CH35:1;
            vuint32_t CH34:1;
            vuint32_t CH33:1;
            vuint32_t CH32:1;
        } B;
    } NCMR1;

    union { /* ADC0 Normal Conversion Mask 2 (Base+0x00AC) */
        vuint32_t R; /*      (For external mux'd channels)   */       
        struct {
            vuint32_t CH95:1;
            vuint32_t CH94:1;
            vuint32_t CH93:1;
            vuint32_t CH92:1;
            vuint32_t CH91:1;
            vuint32_t CH90:1;
            vuint32_t CH89:1;
            vuint32_t CH88:1;
            vuint32_t CH87:1;
            vuint32_t CH86:1;
            vuint32_t CH85:1;
            vuint32_t CH84:1;
            vuint32_t CH83:1;
            vuint32_t CH82:1;
            vuint32_t CH81:1;
            vuint32_t CH80:1;
            vuint32_t CH79:1;
            vuint32_t CH78:1;
            vuint32_t CH77:1;
            vuint32_t CH76:1;
            vuint32_t CH75:1;
            vuint32_t CH74:1;
            vuint32_t CH73:1;
            vuint32_t CH72:1;
            vuint32_t CH71:1;
            vuint32_t CH70:1;
            vuint32_t CH69:1;
            vuint32_t CH68:1;
            vuint32_t CH67:1;
            vuint32_t CH66:1;
            vuint32_t CH65:1;
            vuint32_t CH64:1;
        } B;
    } NCMR2; 		

vuint8_t ADC0_reserved6[4]; /* Reserved 4 bytes (Base+0x00B0-0x00B3) */

		
		union { /* ADC0 Injected Conversion Mask0 (Base+0x00B4) */
        vuint32_t R; /*      (precision channels)                 */   
        struct {
            vuint32_t :16;
            vuint32_t CH15:1;
            vuint32_t CH14:1;
            vuint32_t CH13:1;
            vuint32_t CH12:1;
            vuint32_t CH11:1;
            vuint32_t CH10:1;
            vuint32_t CH9:1;
            vuint32_t CH8:1;
            vuint32_t CH7:1;
            vuint32_t CH6:1;
            vuint32_t CH5:1;
            vuint32_t CH4:1;
            vuint32_t CH3:1;
            vuint32_t CH2:1;
            vuint32_t CH1:1;
            vuint32_t CH0:1;
        } B;
    } JCMR0;

    union { /* ADC0 Injected Conversion Mask1 (Base+0x00B8) */
        vuint32_t R; /*      (standard channels)              */       
        struct {
            vuint32_t :4;
            vuint32_t CH59:1;
            vuint32_t CH58:1;
            vuint32_t CH57:1;
            vuint32_t CH56:1;
            vuint32_t CH55:1;
            vuint32_t CH54:1;
            vuint32_t CH53:1;
            vuint32_t CH52:1;
            vuint32_t CH51:1;
            vuint32_t CH50:1;
            vuint32_t CH49:1;
            vuint32_t CH48:1;
            vuint32_t CH47:1;
            vuint32_t CH46:1;
            vuint32_t CH45:1;
            vuint32_t CH44:1;
            vuint32_t CH43:1;
            vuint32_t CH42:1;
            vuint32_t CH41:1;
            vuint32_t CH40:1;
            vuint32_t CH39:1;
            vuint32_t CH38:1;
            vuint32_t CH37:1;
            vuint32_t CH36:1;
            vuint32_t CH35:1;
            vuint32_t CH34:1;
            vuint32_t CH33:1;
            vuint32_t CH32:1;
        } B;
    } JCMR1;

    union { /* ADC0 Injected Conversion Mask2 (Base+0x00BC) */
        vuint32_t R; /*      (external mux'd channels)        */       
        struct {
            vuint32_t CH95:1;
            vuint32_t CH94:1;
            vuint32_t CH93:1;
            vuint32_t CH92:1;
            vuint32_t CH91:1;
            vuint32_t CH90:1;
            vuint32_t CH89:1;
            vuint32_t CH88:1;
            vuint32_t CH87:1;
            vuint32_t CH86:1;
            vuint32_t CH85:1;
            vuint32_t CH84:1;
            vuint32_t CH83:1;
            vuint32_t CH82:1;
            vuint32_t CH81:1;
            vuint32_t CH80:1;
            vuint32_t CH79:1;
            vuint32_t CH78:1;
            vuint32_t CH77:1;
            vuint32_t CH76:1;
            vuint32_t CH75:1;
            vuint32_t CH74:1;
            vuint32_t CH73:1;
            vuint32_t CH72:1;
            vuint32_t CH71:1;
            vuint32_t CH70:1;
            vuint32_t CH69:1;
            vuint32_t CH68:1;
            vuint32_t CH67:1;
            vuint32_t CH66:1;
            vuint32_t CH65:1;
            vuint32_t CH64:1;
        } B;
    } JCMR2;
              
        
   vuint8_t ADC0_reserved7[4]; /* Reserved 4 bytes (Base+0x00C0-0x00C3) */
        
		union { /* ADC0 Decode Signals Delay (Base+0x00C4) */
			vuint32_t R;
			struct {
				vuint32_t:20;
				vuint32_t DSD:12;
			} B;
		} DSDR;              
        
        union { /* ADC0 Power-Down exit Delay (Base+0x00C8) */
			vuint32_t R;
			struct {
				vuint32_t:24;
				vuint32_t PDED:8;
			} B;
		} PDEDR;              

    
    vuint8_t ADC0_reserved8[52]; /* Reserved 52 bytes (Base+0x00CC-0x00FF) */
                
        union { /* ADC0 Channel 0-95 Data (Base+0x0100-0x027C) */
            vuint32_t R; /* Note CDR[16..31] and CDR[60..63] are reserved               */
            struct {
                vuint32_t:12;
                vuint32_t VALID:1;
                vuint32_t OVERW:1;
                vuint32_t RESULT:2;
                vuint32_t:6;
                vuint32_t CDATA:10;
            } B;
        } CDR[96];           
        
    union { /* ADC0 Threshold 4 (Base+0x0280) */
        vuint32_t R;
        struct {
            vuint32_t:6;
            vuint32_t THRH:10;
            vuint32_t:6;
            vuint32_t THRL:10;
        } B;
    } THRHLR4;

    union { /* ADC0 Threshold 5 (Base+0x0284) */
        vuint32_t R;
        struct {
            vuint32_t:6;
            vuint32_t THRH:10;
            vuint32_t:6;
            vuint32_t THRL:10;
        } B;
    } THRHLR5;
	
    vuint8_t ADC0_reserved9[40]; /* Reserved 40 bytes (Base+0x0288-0x02AF) */
        
       
    union { /* ADC0 Channel Watchdog Select 0 (Base+0x02B0) */
        vuint32_t R; /*      (precision channels)                    */
            struct {
	            vuint32_t:1;
                vuint32_t WSEL_CH7:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH6:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH5:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH4:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH3:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH2:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH1:3;
                vuint32_t:1;
                vuint32_t WSEL_CH0:3;
            } B;
        } CWSELR0; 
        
    union { /* ADC0 Channel Watchdog Select 1 (Base+0x02B4) */
        vuint32_t R; /*      (precision channels)                    */
            struct {
	            vuint32_t:1;
                vuint32_t WSEL_CH15:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH14:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH13:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH12:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH11:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH10:3;
	            vuint32_t:1;
                vuint32_t WSEL_CH9:3;
                vuint32_t:1;
                vuint32_t WSEL_CH8:3;
            } B;
        } CWSELR1; 
        
    vuint8_t ADC0_reserved10[8]; /* Reserved 4 bytes (Base+0x02B8-0x02BF) */  	
        
    union { /* ADC0 Channel Watchdog Select 4 (Base+0x02C0) */
        vuint32_t R; /*      (standard channels)                     */
        struct {
            vuint32_t:1;
            vuint32_t WSEL_CH39:3;
            vuint32_t:1;
            vuint32_t WSEL_CH38:3;
            vuint32_t:1;
            vuint32_t WSEL_CH37:3;
            vuint32_t:1;
            vuint32_t WSEL_CH36:3;
            vuint32_t:1;
            vuint32_t WSEL_CH35:3;
            vuint32_t:1;
            vuint32_t WSEL_CH34:3;
            vuint32_t:1;
            vuint32_t WSEL_CH33:3;
            vuint32_t:1;
            vuint32_t WSEL_CH32:3;
        } B;
    } CWSELR4;

    union { /* ADC0 Channel Watchdog Select 5 (Base+0x02C4) */
        vuint32_t R; /*      (standard channels)                     */
        struct {
            vuint32_t:1;
            vuint32_t WSEL_CH47:3;
            vuint32_t:1;
            vuint32_t WSEL_CH46:3;
            vuint32_t:1;
            vuint32_t WSEL_CH45:3;
            vuint32_t:1;
            vuint32_t WSEL_CH44:3;
            vuint32_t:1;
            vuint32_t WSEL_CH43:3;
            vuint32_t:1;
            vuint32_t WSEL_CH42:3;
            vuint32_t:1;
            vuint32_t WSEL_CH41:3;
            vuint32_t:1;
            vuint32_t WSEL_CH40:3;
        } B;
    } CWSELR5;

    union { /* ADC0 Channel Watchdog Select 6 (Base+0x02C8) */
        vuint32_t R; /*      (standard channels)                     */
        struct {
            vuint32_t:1;
            vuint32_t WSEL_CH55:3;
            vuint32_t:1;
            vuint32_t WSEL_CH54:3;
            vuint32_t:1;
            vuint32_t WSEL_CH53:3;
            vuint32_t:1;
            vuint32_t WSEL_CH52:3;
            vuint32_t:1;
            vuint32_t WSEL_CH51:3;
            vuint32_t:1;
            vuint32_t WSEL_CH50:3;
            vuint32_t:1;
            vuint32_t WSEL_CH49:3;
            vuint32_t:1;
            vuint32_t WSEL_CH48:3;
        } B;
    } CWSELR6;

    union { /* ADC0 Channel Watchdog Select 7 (Base+0x02CC) */
        vuint32_t R; /*      (standard channels)                     */
        struct {
            vuint32_t:1;
            vuint32_t WSEL_CH63:3;
            vuint32_t:1;
            vuint32_t WSEL_CH62:3;
            vuint32_t:1;
            vuint32_t WSEL_CH61:3;
            vuint32_t:1;
            vuint32_t WSEL_CH60:3;
            vuint32_t:1;
            vuint32_t WSEL_CH59:3;
            vuint32_t:12;
        } B;
    } CWSELR7;
        
      union { /* ADC0 Channel Watchdog Select 8 (Base+0x02D0) */
        vuint32_t R; /*      (external mux'd channels)               */
        struct {
            vuint32_t:1;
            vuint32_t WSEL_CH71:3;
            vuint32_t:1;
            vuint32_t WSEL_CH70:3;
            vuint32_t:1;
            vuint32_t WSEL_CH69:3;
            vuint32_t:1;
            vuint32_t WSEL_CH68:3;
            vuint32_t:1;
            vuint32_t WSEL_CH67:3;
            vuint32_t:1;
            vuint32_t WSEL_CH66:3;
            vuint32_t:1;
            vuint32_t WSEL_CH65:3;
            vuint32_t:1;
            vuint32_t WSEL_CH64:3;
        } B;
    } CWSELR8;

    union { /* ADC0 Channel Watchdog Select 9 (Base+0x02D4) */
        vuint32_t R; /*      (external mux'd channels)               */
        struct {
            vuint32_t:1;
            vuint32_t WSEL_CH79:3;
            vuint32_t:1;
            vuint32_t WSEL_CH78:3;
            vuint32_t:1;
            vuint32_t WSEL_CH77:3;
            vuint32_t:1;
            vuint32_t WSEL_CH76:3;
            vuint32_t:1;
            vuint32_t WSEL_CH75:3;
            vuint32_t:1;
            vuint32_t WSEL_CH74:3;
            vuint32_t:1;
            vuint32_t WSEL_CH73:3;
            vuint32_t:1;
            vuint32_t WSEL_CH72:3;
        } B;
    } CWSELR9;

    union { /* ADC0 Channel Watchdog Select 10 (Base+0x02D8)*/
        vuint32_t R; /*      (external mux'd channels)               */
        struct {
            vuint32_t:1;
            vuint32_t WSEL_CH87:3;
            vuint32_t:1;
            vuint32_t WSEL_CH86:3;
            vuint32_t:1;
            vuint32_t WSEL_CH85:3;
            vuint32_t:1;
            vuint32_t WSEL_CH84:3;
            vuint32_t:1;
            vuint32_t WSEL_CH83:3;
            vuint32_t:1;
            vuint32_t WSEL_CH82:3;
            vuint32_t:1;
            vuint32_t WSEL_CH81:3;
            vuint32_t:1;
            vuint32_t WSEL_CH80:3;
        } B;
    } CWSELR10;

    union { /* ADC0 Channel Watchdog Select 11 (Base+0x02DC)*/
        vuint32_t R; /*      (external mux'd channels)               */
        struct {
            vuint32_t:1;
            vuint32_t WSEL_CH95:3;
            vuint32_t:1;
            vuint32_t WSEL_CH94:3;
            vuint32_t:1;
            vuint32_t WSEL_CH93:3;
            vuint32_t:1;
            vuint32_t WSEL_CH92:3;
            vuint32_t:1;
            vuint32_t WSEL_CH91:3;
            vuint32_t:1;
            vuint32_t WSEL_CH90:3;
            vuint32_t:1;
            vuint32_t WSEL_CH89:3;
            vuint32_t:1;
            vuint32_t WSEL_CH88:3;
        } B;
    } CWSELR11;
               
  union { /* ADC0 Channel Watchdog Enable0 (Base++0x02E0) */
        vuint32_t R; /*      (precision channels)                    */
        struct {
            vuint32_t :16;
            vuint32_t CWEN15:1;
            vuint32_t CWEN14:1;
            vuint32_t CWEN13:1;
            vuint32_t CWEN12:1;
            vuint32_t CWEN11:1;
            vuint32_t CWEN10:1;
            vuint32_t CWEN9:1;
            vuint32_t CWEN8:1;
            vuint32_t CWEN7:1;
            vuint32_t CWEN6:1;
            vuint32_t CWEN5:1;
            vuint32_t CWEN4:1;
            vuint32_t CWEN3:1;
            vuint32_t CWEN2:1;
            vuint32_t CWEN1:1;
            vuint32_t CWEN0:1;
        } B;
    } CWENR0;

    union { /* ADC0 Channel Watchdog Enable1 (Base++0x02E4) */
        vuint32_t R; /*      (standard channels)                     */
        struct {
            vuint32_t :4;
            vuint32_t CWEN59:1;
            vuint32_t CWEN58:1;
            vuint32_t CWEN57:1;
            vuint32_t CWEN56:1;
            vuint32_t CWEN55:1;
            vuint32_t CWEN54:1;
            vuint32_t CWEN53:1;
            vuint32_t CWEN52:1;
            vuint32_t CWEN51:1;
            vuint32_t CWEN50:1;
            vuint32_t CWEN49:1;
            vuint32_t CWEN48:1;
            vuint32_t CWEN47:1;
            vuint32_t CWEN46:1;
            vuint32_t CWEN45:1;
            vuint32_t CWEN44:1;
            vuint32_t CWEN43:1;
            vuint32_t CWEN42:1;
            vuint32_t CWEN41:1;
            vuint32_t CWEN40:1;
            vuint32_t CWEN39:1;
            vuint32_t CWEN38:1;
            vuint32_t CWEN37:1;
            vuint32_t CWEN36:1;
            vuint32_t CWEN35:1;
            vuint32_t CWEN34:1;
            vuint32_t CWEN33:1;
            vuint32_t CWEN32:1;
        } B;
    } CWENR1;

    union { /* ADC0 Channel Watchdog Enable2 (Base++0x02E8) */
        vuint32_t R; /*      (external mux'd channels)               */
        struct {
            vuint32_t CWEN95:1;
            vuint32_t CWEN94:1;
            vuint32_t CWEN93:1;
            vuint32_t CWEN92:1;
            vuint32_t CWEN91:1;
            vuint32_t CWEN90:1;
            vuint32_t CWEN89:1;
            vuint32_t CWEN88:1;
            vuint32_t CWEN87:1;
            vuint32_t CWEN86:1;
            vuint32_t CWEN85:1;
            vuint32_t CWEN84:1;
            vuint32_t CWEN83:1;
            vuint32_t CWEN82:1;
            vuint32_t CWEN81:1;
            vuint32_t CWEN80:1;
            vuint32_t CWEN79:1;
            vuint32_t CWEN78:1;
            vuint32_t CWEN77:1;
            vuint32_t CWEN76:1;
            vuint32_t CWEN75:1;
            vuint32_t CWEN74:1;
            vuint32_t CWEN73:1;
            vuint32_t CWEN72:1;
            vuint32_t CWEN71:1;
            vuint32_t CWEN70:1;
            vuint32_t CWEN69:1;
            vuint32_t CWEN68:1;
            vuint32_t CWEN67:1;
            vuint32_t CWEN66:1;
            vuint32_t CWEN65:1;
            vuint32_t CWEN64:1;
        } B;
    } CWENR2;

    vuint8_t ADC0_reserved11[4]; /* Reserved 4 bytes (Base+0x02EC-0x02EF) */
        
union { /* ADC0 Watchdog out of range 0 (Base+0x02F0) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t AWORR_CH15:1;
            vuint32_t AWORR_CH14:1;
            vuint32_t AWORR_CH13:1;
            vuint32_t AWORR_CH12:1;
            vuint32_t AWORR_CH11:1;
            vuint32_t AWORR_CH10:1;
            vuint32_t AWORR_CH9:1;
            vuint32_t AWORR_CH8:1;
            vuint32_t AWORR_CH7:1;
            vuint32_t AWORR_CH6:1;
            vuint32_t AWORR_CH5:1;
            vuint32_t AWORR_CH4:1;
            vuint32_t AWORR_CH3:1;
            vuint32_t AWORR_CH2:1;
            vuint32_t AWORR_CH1:1;
            vuint32_t AWORR_CH0:1;
        } B;
    } AWORR0;

    union { /* ADC0 Watchdog out of range 1 (Base+0x02F4) */
        vuint32_t R;
        struct {
            vuint32_t :4;
            vuint32_t AWORR_CH59:1;
            vuint32_t AWORR_CH58:1;
            vuint32_t AWORR_CH57:1;
            vuint32_t AWORR_CH56:1;
            vuint32_t AWORR_CH55:1;
            vuint32_t AWORR_CH54:1;
            vuint32_t AWORR_CH53:1;
            vuint32_t AWORR_CH52:1;
            vuint32_t AWORR_CH51:1;
            vuint32_t AWORR_CH50:1;
            vuint32_t AWORR_CH49:1;
            vuint32_t AWORR_CH48:1;
            vuint32_t AWORR_CH47:1;
            vuint32_t AWORR_CH46:1;
            vuint32_t AWORR_CH45:1;
            vuint32_t AWORR_CH44:1;
            vuint32_t AWORR_CH43:1;
            vuint32_t AWORR_CH42:1;
            vuint32_t AWORR_CH41:1;
            vuint32_t AWORR_CH40:1;
            vuint32_t AWORR_CH39:1;
            vuint32_t AWORR_CH38:1;
            vuint32_t AWORR_CH37:1;
            vuint32_t AWORR_CH36:1;
            vuint32_t AWORR_CH35:1;
            vuint32_t AWORR_CH34:1;
            vuint32_t AWORR_CH33:1;
            vuint32_t AWORR_CH32:1;
        } B;
    } AWORR1;

    union { /* ADC0 Watchdog out of range 2 (Base+0x02F8) */
        vuint32_t R;
        struct {
            vuint32_t AWORR_CH95:1;
            vuint32_t AWORR_CH94:1;
            vuint32_t AWORR_CH93:1;
            vuint32_t AWORR_CH92:1;
            vuint32_t AWORR_CH91:1;
            vuint32_t AWORR_CH90:1;
            vuint32_t AWORR_CH89:1;
            vuint32_t AWORR_CH88:1;
            vuint32_t AWORR_CH87:1;
            vuint32_t AWORR_CH86:1;
            vuint32_t AWORR_CH85:1;
            vuint32_t AWORR_CH84:1;
            vuint32_t AWORR_CH83:1;
            vuint32_t AWORR_CH82:1;
            vuint32_t AWORR_CH81:1;
            vuint32_t AWORR_CH80:1;
            vuint32_t AWORR_CH79:1;
            vuint32_t AWORR_CH78:1;
            vuint32_t AWORR_CH77:1;
            vuint32_t AWORR_CH76:1;
            vuint32_t AWORR_CH75:1;
            vuint32_t AWORR_CH74:1;
            vuint32_t AWORR_CH73:1;
            vuint32_t AWORR_CH72:1;
            vuint32_t AWORR_CH71:1;
            vuint32_t AWORR_CH70:1;
            vuint32_t AWORR_CH69:1;
            vuint32_t AWORR_CH68:1;
            vuint32_t AWORR_CH67:1;
            vuint32_t AWORR_CH66:1;
            vuint32_t AWORR_CH65:1;
            vuint32_t AWORR_CH64:1;
        } B;
    } AWORR2;

   //vuint8_t ADC0_reserved12[15620]; /* Reserved 15620 bytes (Base+0x02FC-0x3FFF) */                             
    
}; /* end of ADC0_tag */ 

/****************************************************************************/
/*                          MODULE : ADC1 (12 Bit)                          */
/****************************************************************************/
struct ADC1_tag {

    union { /* ADC1 Main Configuration (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t OWREN:1;
            vuint32_t WLSIDE:1;
            vuint32_t MODE:1;
            vuint32_t:4;
            vuint32_t NSTART:1;
            vuint32_t:1;
            vuint32_t JTRGEN:1;
            vuint32_t JEDGE:1;
            vuint32_t JSTART:1;
            vuint32_t:2;
            vuint32_t CTUEN:1;
            vuint32_t:8;
			vuint32_t ADCLKSEL:1;
            vuint32_t ABORT_CHAIN:1;
            vuint32_t ABORT:1;
            vuint32_t ACKO:1;
            vuint32_t:2;
            vuint32_t:2;
            vuint32_t PWDN:1;
        } B;
    } MCR;

    union { /* ADC1 Main Status (Base+0x0004) */
        vuint32_t R;
        struct {
            vuint32_t:7;
            vuint32_t NSTART:1;
            vuint32_t JABORT:1;
            vuint32_t:2;
            vuint32_t JSTART:1;
            vuint32_t:3;
            vuint32_t CTUSTART:1;
            vuint32_t CHADDR:7;
            vuint32_t:3;
            vuint32_t ACKO:1;
            vuint32_t:2;
            vuint32_t ADCSTATUS:3;
        } B;
    } MSR;

    vuint8_t ADC1_reserved0[8]; /* Reserved 8 bytes (Base+0x0008-0x000F) */

    union { /* ADC1 Interrupt Status (Base+0x0010) */
        vuint32_t R;
        struct {
            vuint32_t:27;
            vuint32_t EOCTU:1;
            vuint32_t JEOC:1;
            vuint32_t JECH:1;
            vuint32_t EOC:1;
            vuint32_t ECH:1;
        } B;
    } ISR;

    union { /* ADC1 Channel Pending 0 (Base+0x0014) */
        vuint32_t R; /*      (For precision channels)        */
        struct {
            vuint32_t :16;
            vuint32_t EOC_CH15:1;
            vuint32_t EOC_CH14:1;
            vuint32_t EOC_CH13:1;
            vuint32_t EOC_CH12:1;
            vuint32_t EOC_CH11:1;
            vuint32_t EOC_CH10:1;
            vuint32_t EOC_CH9:1;
            vuint32_t EOC_CH8:1;
            vuint32_t EOC_CH7:1;
            vuint32_t EOC_CH6:1;
            vuint32_t EOC_CH5:1;
            vuint32_t EOC_CH4:1;
            vuint32_t EOC_CH3:1;
            vuint32_t EOC_CH2:1;
            vuint32_t EOC_CH1:1;
            vuint32_t EOC_CH0:1;
        } B;
    } CE0CFR0;

    union { /* ADC1 Channel Pending 1 (Base+0x0018) */
        vuint32_t R; /*      (For standard Channels)         */
        struct {
            vuint32_t:24;
            vuint32_t EOC_CH39:1;
            vuint32_t EOC_CH38:1;
            vuint32_t EOC_CH37:1;
            vuint32_t EOC_CH36:1;
            vuint32_t EOC_CH35:1;
            vuint32_t EOC_CH34:1;
            vuint32_t EOC_CH33:1;
            vuint32_t EOC_CH32:1;
        } B;
    } CE0CFR1;

    vuint8_t ADC1_reserved1[4]; /* Reserved 4 bytes (Base+0x001C-0x001F) */

    union { /* ADC1 Interrupt Mask (Base+0020) */
        vuint32_t R;
        struct {
            vuint32_t:27;
            vuint32_t MSKEOCTU:1;
            vuint32_t MSKJEOC:1;
            vuint32_t MSKJECH:1;
            vuint32_t MSKEOC:1;
            vuint32_t MSKECH:1;
        } B;
    } IMR;

    union { /* ADC1 Channel Interrupt Mask 0 (Base+0x0024) */
        vuint32_t R; /*      (For Precision Channels)               */
        struct {
            vuint32_t:16;
            vuint32_t CIM15:1;
            vuint32_t CIM14:1;
            vuint32_t CIM13:1;
            vuint32_t CIM12:1;
            vuint32_t CIM11:1;
            vuint32_t CIM10:1;
            vuint32_t CIM9:1;
            vuint32_t CIM8:1;
            vuint32_t CIM7:1;
            vuint32_t CIM6:1;
            vuint32_t CIM5:1;
            vuint32_t CIM4:1;
            vuint32_t CIM3:1;
            vuint32_t CIM2:1;
            vuint32_t CIM1:1;
            vuint32_t CIM0:1;
        } B;
    } CIMR0;

    union { /* ADC1 Channel Interrupt Mask 1 (+0x0028) */
        vuint32_t R; /*      (For Standard Channels)            */
        struct {
            vuint32_t:24;
            vuint32_t CIM39:1;
            vuint32_t CIM38:1;
            vuint32_t CIM37:1;
            vuint32_t CIM36:1;
            vuint32_t CIM35:1;
            vuint32_t CIM34:1;
            vuint32_t CIM33:1;
            vuint32_t CIM32:1;
        } B;
    } CIMR1;

    vuint8_t ADC1_reserved2[4]; /* Reserved 4 bytes (Base+0x002C-0x002F) */

    union { /* ADC1 Watchdog Threshold Interrupt Status (+0x0030)*/
        vuint32_t R;
        struct {
            vuint32_t:26;
            vuint32_t WDG2H:1;
            vuint32_t WDG2L:1;
            vuint32_t WDG1H:1;
            vuint32_t WDG1L:1;
            vuint32_t WDG0H:1;
            vuint32_t WDG0L:1;
        } B;
    } WTISR;

    union { /* ADC1 Watchdog Threshold Interrupt Mask (+0x0034) */
        vuint32_t R;
        struct {
            vuint32_t:26;
            vuint32_t MSKWDG2H:1;
            vuint32_t MSKWDG2L:1;
            vuint32_t MSKWDG1H:1;
            vuint32_t MSKWDG1L:1;
            vuint32_t MSKWDG0H:1;
            vuint32_t MSKWDG0L:1;
        } B;
    } WTIMR;

    vuint8_t ADC1_reserved3[8]; /* Reserved 8 bytes (Base+0x0038-0x003F) */

    union { /* ADC1 DMA Enable (Base+0x0040) */
        vuint32_t R;
        struct {
            vuint32_t:30;
            vuint32_t DCLR:1;
            vuint32_t DMAEN:1;
        } B;
    } DMAE;

    union { /* ADC1 DMA Channel Select 0 (Base+0x0044) */
        vuint32_t R; /*      (for precision channels)           */
        struct {
          vuint32_t:16;
            vuint32_t DMA15:1;
            vuint32_t DMA14:1;
            vuint32_t DMA13:1;
            vuint32_t DMA12:1;
            vuint32_t DMA11:1;
            vuint32_t DMA10:1;
            vuint32_t DMA9:1;
            vuint32_t DMA8:1;
            vuint32_t DMA7:1;
            vuint32_t DMA6:1;
            vuint32_t DMA5:1;
            vuint32_t DMA4:1;
            vuint32_t DMA3:1;
            vuint32_t DMA2:1;
            vuint32_t DMA1:1;
            vuint32_t DMA0:1;
        } B;
    } DMAR0;

    union { /* ADC1 DMA Channel Select 1 (Base+0x0048) */
        vuint32_t R; /*      (for standard channels)            */
        struct {
            vuint32_t:24;
            vuint32_t DMA39:1;
            vuint32_t DMA38:1;
            vuint32_t DMA37:1;
            vuint32_t DMA36:1;
            vuint32_t DMA35:1;
            vuint32_t DMA34:1;
            vuint32_t DMA33:1;
            vuint32_t DMA32:1;
        } B;
    } DMAR1;

    vuint8_t ADC1_reserved4[20]; /* Reserved 20 bytes (Base+0x004C-0x005F) */

    /* Note the threshold registers are not implemented as an array for    */
    /*  concistency with ADC0 header section                               */

    union { /* ADC1 Threshold  0 (Base+0x0060) */
        vuint32_t R;
        struct {
          vuint32_t:4;
            vuint32_t THRH:12;
            vuint32_t:4;
            vuint32_t THRL:12;
        } B;
    } THRHLR0;

    union { /* ADC1 Threshold  1 (Base+0x0064) */
        vuint32_t R;
        struct {
            vuint32_t:4;
            vuint32_t THRH:12;
            vuint32_t:4;
            vuint32_t THRL:12;
        } B;
    } THRHLR1;

    union { /* ADC1 Threshold  2 (Base+0x0068) */
        vuint32_t R;
        struct {
          vuint32_t:4;
            vuint32_t THRH:12;
            vuint32_t:4;
            vuint32_t THRL:12;
        } B;
    } THRHLR2;

    vuint8_t ADC1_reserved5[20]; /* Reserved 20 bytes (Base+0x006C-0x007F) */

    union { /* ADC1 Presampling Control (Base+0x0080) */
        vuint32_t R;
        struct {
          vuint32_t:25;
            vuint32_t PREVAL2:2;
            vuint32_t PREVAL1:2;
            vuint32_t PREVAL0:2;
            vuint32_t PRECONV:1;
        } B;
    } PSCR;

    union { /* ADC1 Presampling 0 (Base+0x0084) */
        vuint32_t R; /*      (precision channels)        */
        struct {
            vuint32_t:16;
            vuint32_t PRES15:1;
            vuint32_t PRES14:1;
            vuint32_t PRES13:1;
            vuint32_t PRES12:1;
            vuint32_t PRES11:1;
            vuint32_t PRES10:1;
            vuint32_t PRES9:1;
            vuint32_t PRES8:1;
            vuint32_t PRES7:1;
            vuint32_t PRES6:1;
            vuint32_t PRES5:1;
            vuint32_t PRES4:1;
            vuint32_t PRES3:1;
            vuint32_t PRES2:1;
            vuint32_t PRES1:1;
            vuint32_t PRES0:1;
        } B;
    } PSR0;

    union { /* ADC1 Presampling 1 (Base+0x0088) */
        vuint32_t R; /*      (standard channels)         */
        struct {
            vuint32_t:24;
            vuint32_t PRES39:1;
            vuint32_t PRES38:1;
            vuint32_t PRES37:1;
            vuint32_t PRES36:1;
            vuint32_t PRES35:1;
            vuint32_t PRES34:1;
            vuint32_t PRES33:1;
            vuint32_t PRES32:1;
        } B;
    } PSR1;

    vuint8_t ADC1_reserved6[8]; /* Reserved 8 bytes (Base+0x008C-0x0093) */

    /* Note the following CTR registers are NOT implemented as an array to */
    /*  try and maintain some concistency through the header file          */
    /*  (The registers are however identical)                              */

    union { /* ADC1 Conversion Timing 0 (Base+0x0094) */
        vuint32_t R; /*      (precision channels)              */
        struct {
            vuint32_t:16;
            vuint32_t INPLATCH:1;
            vuint32_t:1;
            vuint32_t OFFSHIFT:2;
            vuint32_t:1;
            vuint32_t INPCMP:2;
            vuint32_t:1;
            vuint32_t INPSAMP:8;
        } B;
    } CTR0;

    union { /* ADC1 Conversion Timing 1 (Base+0x0098) */
        vuint32_t R; /*      (standard channels)              */
        struct {
            vuint32_t:16;
            vuint32_t INPLATCH:1;
            vuint32_t:1;
            vuint32_t OFFSHIFT:2;
            vuint32_t:1;
            vuint32_t INPCMP:2;
            vuint32_t:1;
            vuint32_t INPSAMP:8;
        } B;
    } CTR1;

    vuint8_t ADC1_reserved7[8]; /* Reserved 8 bytes (Base+0x009C-0x00A3) */

    union { /* ADC1 Normal Conversion Mask 0 (Base+0x00A4) */
        vuint32_t R; /*      (precision channels)                  */
        struct {
            vuint32_t :16;
            vuint32_t CH15:1;
            vuint32_t CH14:1;
            vuint32_t CH13:1;
            vuint32_t CH12:1;
            vuint32_t CH11:1;
            vuint32_t CH10:1;
            vuint32_t CH9:1;
            vuint32_t CH8:1;
            vuint32_t CH7:1;
            vuint32_t CH6:1;
            vuint32_t CH5:1;
            vuint32_t CH4:1;
            vuint32_t CH3:1;
            vuint32_t CH2:1;
            vuint32_t CH1:1;
            vuint32_t CH0:1;
        } B;
    } NCMR0;

    union { /* ADC1 Normal Conversion Mask 1 (Base+0x00A8) */
        vuint32_t R; /*      (standard channels)                    */
        struct {
            vuint32_t:24;
            vuint32_t CH39:1;
            vuint32_t CH38:1;
            vuint32_t CH37:1;
            vuint32_t CH36:1;
            vuint32_t CH35:1;
            vuint32_t CH34:1;
            vuint32_t CH33:1;
            vuint32_t CH32:1;
        } B;
    } NCMR1;

    vuint8_t ADC1_reserved8[8]; /* Reserved 8 bytes (Base+0x00AC-0x00B3) */

    union { /* ADC1 Injected Conversion Mask0 (Base+0x00B4) */
        vuint32_t R; /*      (precision channels)                    */
        struct {
            vuint32_t :16;
            vuint32_t CH15:1;
            vuint32_t CH14:1;
            vuint32_t CH13:1;
            vuint32_t CH12:1;
            vuint32_t CH11:1;
            vuint32_t CH10:1;
            vuint32_t CH9:1;
            vuint32_t CH8:1;
            vuint32_t CH7:1;
            vuint32_t CH6:1;
            vuint32_t CH5:1;
            vuint32_t CH4:1;
            vuint32_t CH3:1;
            vuint32_t CH2:1;
            vuint32_t CH1:1;
            vuint32_t CH0:1;
        } B;
    } JCMR0;

    union { /* ADC1 Injected Conversion Mask1 (Base+0x00B8) */
        vuint32_t R; /*      (standard channels)                     */
        struct {
            vuint32_t :24;
            vuint32_t CH39:1;
            vuint32_t CH38:1;
            vuint32_t CH37:1;
            vuint32_t CH36:1;
            vuint32_t CH35:1;
            vuint32_t CH34:1;
            vuint32_t CH33:1;
            vuint32_t CH32:1;
        } B;
    } JCMR1;

   vuint8_t ADC1_reserved9[12]; /* Reserved 12 bytes (Base+0x00BC-0x00C7) */
	
	 union {  /* Power Down Exit Delay Register (base+0x00C8)*/
        vuint32_t R;
            struct {
                vuint32_t:24;                
                vuint32_t PDED:8;
            } B;
        } PDEDR;     

	vuint8_t ADC1_reserved10[52]; /* Reserved 52 bytes (Base+0x00CC-0x00FF) */		

    union { /* ADC1 Channel 0-39 Data (Base+0x0100-0x019C) */
        vuint32_t R; /* Note CDR[16..31] are reserved 0x0140-0x017F              */
        struct {
            vuint32_t:12;
            vuint32_t VALID:1;
            vuint32_t OVERW:1;
            vuint32_t RESULT:2;
            vuint32_t:4;
            vuint32_t CDATA:12;
        } B;
    } CDR[40];

    vuint8_t ADC1_reserved11[272]; /* Reserved 252 bytes (Base+0x01A0-0x002AF) */

    union { /* ADC1 Channel Watchdog Select 0 (Base+0x02B0) */
        vuint32_t R; /*      (precision channels)                    */
        struct {
            vuint32_t:2;
            vuint32_t WSEL_CH7:2;
            vuint32_t:2;
            vuint32_t WSEL_CH6:2;
            vuint32_t:2;
            vuint32_t WSEL_CH5:2;
            vuint32_t:2;
            vuint32_t WSEL_CH4:2;
            vuint32_t:2;
            vuint32_t WSEL_CH3:2;
            vuint32_t:2;
            vuint32_t WSEL_CH2:2;
            vuint32_t:2;
            vuint32_t WSEL_CH1:2;
            vuint32_t:2;
            vuint32_t WSEL_CH0:2;
        } B;
    } CWSELR0;

    union { /* ADC1 Channel Watchdog Select 1 (Base+0x02B4) */
        vuint32_t R; /*      (precision channels)                    */
        struct {
            vuint32_t:2;
            vuint32_t WSEL_CH15:2;
            vuint32_t:2;
            vuint32_t WSEL_CH14:2;
            vuint32_t:2;
            vuint32_t WSEL_CH13:2;
            vuint32_t:2;
            vuint32_t WSEL_CH12:2;
            vuint32_t:2;
            vuint32_t WSEL_CH11:2;
            vuint32_t:2;
            vuint32_t WSEL_CH10:2;
            vuint32_t:2;
            vuint32_t WSEL_CH9:2;
            vuint32_t:2;
            vuint32_t WSEL_CH8:2;
        } B;
    } CWSELR1;

    vuint8_t ADC1_reserved12[8]; /* Reserved 8 bytes (Base+0x02B8-0x02BF) */

    union { /* ADC1 Channel Watchdog Select 4 (Base+0x02C0) */
        vuint32_t R; /*      (standard channels)                     */
        struct {
            vuint32_t:2;
            vuint32_t WSEL_CH39:2;
            vuint32_t:2;
            vuint32_t WSEL_CH38:2;
            vuint32_t:2;
            vuint32_t WSEL_CH37:2;
            vuint32_t:2;
            vuint32_t WSEL_CH36:2;
            vuint32_t:2;
            vuint32_t WSEL_CH35:2;
            vuint32_t:2;
            vuint32_t WSEL_CH34:2;
            vuint32_t:2;
            vuint32_t WSEL_CH33:2;
            vuint32_t:2;
            vuint32_t WSEL_CH32:2;
        } B;
    } CWSELR4;

    union { /* ADC1 Channel Watchdog Select 5 (Base+0x02C4) */
        vuint32_t R; /*      (standard channels)                     */
        struct {
            vuint32_t:14;
            vuint32_t WSEL_CH44:2;
            vuint32_t:2;
            vuint32_t WSEL_CH43:2;
            vuint32_t:2;
            vuint32_t WSEL_CH42:2;
            vuint32_t:2;
            vuint32_t WSEL_CH41:2;
            vuint32_t:2;
            vuint32_t WSEL_CH40:2;
        } B;
    } CWSELR5;

    vuint8_t ADC1_reserved13[24]; /* Reserved 24 bytes (Base+0x02C8-0x02DF) */

    union { /* ADC1 Channel Watchdog Enable0 (Base+0x02E0) */
        vuint32_t R; /*      (precision channels)                    */
        struct {
            vuint32_t :16;
            vuint32_t CWEN15:1;
            vuint32_t CWEN14:1;
            vuint32_t CWEN13:1;
            vuint32_t CWEN12:1;
            vuint32_t CWEN11:1;
            vuint32_t CWEN10:1;
            vuint32_t CWEN9:1;
            vuint32_t CWEN8:1;
            vuint32_t CWEN7:1;
            vuint32_t CWEN6:1;
            vuint32_t CWEN5:1;
            vuint32_t CWEN4:1;
            vuint32_t CWEN3:1;
            vuint32_t CWEN2:1;
            vuint32_t CWEN1:1;
            vuint32_t CWEN0:1;
        } B;
    } CWENR0;

    union { /* ADC1 Channel Watchdog Enable1 (Base++0x02E4) */
        vuint32_t R; /*      (standard channels)                     */
        struct {
            vuint32_t :24;
            vuint32_t CWEN39:1;
            vuint32_t CWEN38:1;
            vuint32_t CWEN37:1;
            vuint32_t CWEN36:1;
            vuint32_t CWEN35:1;
            vuint32_t CWEN34:1;
            vuint32_t CWEN33:1;
            vuint32_t CWEN32:1;
        } B;
    } CWENR1;

    vuint8_t ADC1_reserved14[8]; /* Reserved 8 bytes (Base+0x02E8-0x02EF) */

    union { /* ADC1 Watchdog out of range 0 (Base+0x02F0) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t AWORR_CH15:1;
            vuint32_t AWORR_CH14:1;
            vuint32_t AWORR_CH13:1;
            vuint32_t AWORR_CH12:1;
            vuint32_t AWORR_CH11:1;
            vuint32_t AWORR_CH10:1;
            vuint32_t AWORR_CH9:1;
            vuint32_t AWORR_CH8:1;
            vuint32_t AWORR_CH7:1;
            vuint32_t AWORR_CH6:1;
            vuint32_t AWORR_CH5:1;
            vuint32_t AWORR_CH4:1;
            vuint32_t AWORR_CH3:1;
            vuint32_t AWORR_CH2:1;
            vuint32_t AWORR_CH1:1;
            vuint32_t AWORR_CH0:1;
        } B;
    } AWORR0;

    union { /* ADC1 Watchdog out of range 1 (Base+0x02F4) */
        vuint32_t R;
        struct {
            vuint32_t :24;
            vuint32_t AWORR_CH39:1;
            vuint32_t AWORR_CH38:1;
            vuint32_t AWORR_CH37:1;
            vuint32_t AWORR_CH36:1;
            vuint32_t AWORR_CH35:1;
            vuint32_t AWORR_CH34:1;
            vuint32_t AWORR_CH33:1;
            vuint32_t AWORR_CH32:1;
        } B;
    } AWORR1;

    vuint8_t ADC1_reserved15[8]; /* Reserved 8 bytes (Base+0x02F8-0x02FF) */

}; /* end of ADC1_tag */ 
/****************************************************************************/
/*                          MODULE : CANSP                                   */
/****************************************************************************/
    struct CANSP_tag {
	
        union { /* CANSP Control Reg (Base+0x0000) */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t RX_COMPLETE:1;
                vuint32_t BUSY:1;
                vuint32_t ACTIVE_CK:1;
                vuint32_t:3;
                vuint32_t MODE:1;
                vuint32_t CAN_RX_SEL:3;
                vuint32_t BRP:5;
                vuint32_t CAN_SMPLR_EN:1;
            } B;
        } CR;                   

    union { /* CANSP Sample 0..11 (Base+0x0000-0x0030)*/
        vuint32_t R;
    } SR[12];

    };                          /* end of CANSP_tag */	
/****************************************************************************/
/*                          MODULE : ECSM                                   */
/****************************************************************************/
struct ECSM_tag{

    union { /* ECSM Processor Core Type (Base+0x0000) */
        vuint16_t R;
    } PCT;

    union { /* ECSM Revision (Base+0x0002) */
        vuint16_t R;
    } REV;

    vuint8_t ECSM_reserved0[4]; /* Reserved 4 bytes (Base+0x0004-0x0007) */

    union { /* ECSM IPS Module Configuration (Base+0x0008) */
        vuint32_t R;
    } IMC;

    vuint8_t ECSM_reserved1[7]; /* Reserved 7 bytes (Base+0x000C-0x0012) */

    union { /* ECSM Miscellaneous Wakeup Control (+0x0013) */
        vuint8_t R;
        struct {
            vuint8_t ENBWCR:1;
            vuint8_t :3;
            vuint8_t PRILVL:4;
        } B;
    } MWCR;

    vuint8_t ECSM_reserved2[11]; /* Reserved 11 bytes (Base+0x0014-0x001E) */

    union { /* ECSM Miscellaneous Interrupt (Base+0x001F) */
        vuint8_t R;
        struct {
            vuint8_t FB0AI:1;
            vuint8_t FB0SI:1;
            vuint8_t FB1AI:1;
            vuint8_t FB1SI:1;
            vuint8_t :4;
        } B;
    } MIR;

    vuint8_t ECSM_reserved3[4]; /* Reserved 4 bytes (Base+0x0020-0x0023) */

    union { /*ECSM Miscellaneous User-Defined Control (+0x0024)*/
            vuint32_t R;
          } MUDCR;                /* ECSM Miscellaneous User-Defined Control Register */

    vuint8_t ECSM_reserved4[27]; /* Reserved 27 bytes (Base+0x0028-0x0042) */

    union { /* ECSM ECC Configuration (Base+0x0043) */
        vuint8_t R;
        struct {
            vuint8_t :2;
            vuint8_t ER1BR:1;
            vuint8_t EF1BR:1;
            vuint8_t :2;
            vuint8_t ERNCR:1;
            vuint8_t EFNCR:1;
        } B;
    } ECR;

    vuint8_t ECSM_reserved5[3]; /* Reserved 3 bytes (Base+0x0044-0x0046) */

    union { /* ECSM ECC Status (Base+0x0047) */
        vuint8_t R;
        struct {
            vuint8_t :2;
            vuint8_t R1BC:1;
            vuint8_t F1BC:1;
            vuint8_t :2;
            vuint8_t RNCE:1;
            vuint8_t FNCE:1;
        } B;
    } ESR;

    vuint8_t ECSM_reserved6[2]; /* Reserved 2 bytes (Base+0x0048-0x0049) */

    union { /* ECSM ECC Error Generation (Base+0x004A) */
        vuint16_t R;
        struct {
            vuint16_t :2;
            vuint16_t FRC1BI:1;
            vuint16_t FR11BI:1;
            vuint16_t :2;
            vuint16_t FRCNCI:1;
            vuint16_t FR1NCI:1;
            vuint16_t :1;
            vuint16_t ERRBIT:7;
        } B;
    } EEGR;

    vuint8_t ECSM_reserved7[4]; /* Reserved 4 bytes (Base+0x004C-0x004F) */

    union { /* ECSM Flash ECC Address(Base+0x0050) */
        vuint32_t R;
    } FEAR;

    vuint8_t ECSM_reserved8[2]; /* Reserved 2 bytes (Base+0x0054-0x0055) */

    union { /* ECSM Flash ECC Master Number (Base+0x0056) */
        vuint8_t R;
        struct {
            vuint8_t :4;
            vuint8_t FEMR:4;
        } B;
    } FEMR;

    union { /* ECSM Flash ECC Attributes (Base+0x0057) */
        vuint8_t R;
        struct {
            vuint8_t WRITE:1;
			vuint8_t SIZE:3;
            vuint8_t PROTECTION:4;
        } B;
    } FEAT;

    vuint8_t ECSM_reserved9[4]; /* Reserved 4 bytes (Base+0x0058-0x005B) */

    union { /* ECSM Flash ECC Data (Base+0x005C) */
        vuint32_t R;
    } FEDR;

    union { /* ECSM RAM ECC Address (Base+0x0060) */
        vuint32_t R;
    } REAR;

    vuint8_t ECSM_reserved10[1]; /* Reserved 1 bytes (Base+0x0064) */

    union { /* ECSM RAM ECC Address (Base+0x0065) */
        vuint8_t R;
    } RESR;

    union { /* ECSM RAM ECC Master Number (Base+0x0066) */
        vuint8_t R;
        struct {
            vuint8_t :4;
            vuint8_t REMR:4;
        } B;
    } REMR;

    union { /* ECSM RAM ECC Attributes (Base+0x0067) */
        vuint8_t R;
        struct {
            vuint8_t WRITE:1;
            vuint8_t SIZE:3;
            vuint8_t PROTECTION:4;
        } B;
    } REAT;

    vuint8_t ECSM_reserved11[4]; /* Reserved 4 bytes (Base+0x0068-0x006B) */

    union { /* ECSM RAM ECC Data (Base+0x006C) */
        vuint32_t R;
    } REDR;

}; /* end of ECSM_tag */

/****************************************************************************/
/*                          MODULE : RTC/API                                */
/****************************************************************************/
struct RTC_tag{

    union { /* RTC Supervisor Control (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t SUPV:1;
            vuint32_t :31;
        } B;
    } RTCSUPV ;

    union { /* RTC Control (Base+0x0004) */
        vuint32_t R;
        struct {
            vuint32_t CNTEN:1;
            vuint32_t RTCIE:1;
            vuint32_t FRZEN:1;
            vuint32_t ROVREN:1;
            vuint32_t RTCVAL:12;
            vuint32_t APIEN:1;
            vuint32_t APIIE:1;
            vuint32_t CLKSEL:2;
            vuint32_t DIV512EN:1;
            vuint32_t DIV32EN:1;
            vuint32_t APIVAL:10;
        } B;
    } RTCC;

    union { /* RTC Status (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t :2;
            vuint32_t RTCF:1;
            vuint32_t :15;
            vuint32_t APIF:1;
            vuint32_t :2;
            vuint32_t ROVRF:1;
            vuint32_t :10;
        } B;
    } RTCS;

    union { /* RTC Counter (Base+0x000C) */
        vuint32_t R;
        struct {
            vuint32_t RTCCNT:32;
        } B;
    } RTCCNT;

}; /* end of RTC_tag */

/****************************************************************************/
/*          MODULE : SIU Lite (tagged as SIU for compatibility)             */
/****************************************************************************/
struct SIU_tag {

    vuint8_t SIU_reserved0[4]; /* Reserved 4 Bytes (Base+0x0) */

    union { /* MCU ID1 (Base+0x0004) */
        vuint32_t R;
        struct {
            vuint32_t PARTNUM:16;
            vuint32_t CSP:1;
            vuint32_t PKG:5;
            vuint32_t :2;
            vuint32_t MAJOR_MASK:4;
            vuint32_t MINOR_MASK:4;
        } B;
    } MIDR1;

    union { /* MCU ID2 (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t SF:1;
            vuint32_t FLASH_SIZE_1:4;
            vuint32_t FLASH_SIZE_2:4;
            vuint32_t :7;
            vuint32_t PARTNUM:8;
            vuint32_t :3;
            vuint32_t EE:1;
            vuint32_t :3;
            vuint32_t FR:1;
        } B;
    } MIDR2;

    vuint8_t SIU_reserved1[8]; /* Reserved 8 Bytes (Base+(0x000C--0x0013)) */

    union { /* Interrupt Status Flag (Base+0x0014)*/
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t EIF23:1;
            vuint32_t EIF22:1;
            vuint32_t EIF21:1;
            vuint32_t EIF20:1;
            vuint32_t EIF19:1;
            vuint32_t EIF18:1;
            vuint32_t EIF17:1;
            vuint32_t EIF16:1;
            vuint32_t EIF15:1;
            vuint32_t EIF14:1;
            vuint32_t EIF13:1;
            vuint32_t EIF12:1;
            vuint32_t EIF11:1;
            vuint32_t EIF10:1;
            vuint32_t EIF9:1;
            vuint32_t EIF8:1;
            vuint32_t EIF7:1;
            vuint32_t EIF6:1;
            vuint32_t EIF5:1;
            vuint32_t EIF4:1;
            vuint32_t EIF3:1;
            vuint32_t EIF2:1;
            vuint32_t EIF1:1;
            vuint32_t EIF0:1;
        } B;
    } ISR;

    union { /* Interrupt Request Enable (Base+0x0018) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t IRE23:1;
            vuint32_t IRE22:1;
            vuint32_t IRE21:1;
            vuint32_t IRE20:1;
            vuint32_t IRE19:1;
            vuint32_t IRE18:1;
            vuint32_t IRE17:1;
            vuint32_t IRE16:1;
            vuint32_t IRE15:1;
            vuint32_t IRE14:1;
            vuint32_t IRE13:1;
            vuint32_t IRE12:1;
            vuint32_t IRE11:1;
            vuint32_t IRE10:1;
            vuint32_t IRE9:1;
            vuint32_t IRE8:1;
            vuint32_t IRE7:1;
            vuint32_t IRE6:1;
            vuint32_t IRE5:1;
            vuint32_t IRE4:1;
            vuint32_t IRE3:1;
            vuint32_t IRE2:1;
            vuint32_t IRE1:1;
            vuint32_t IRE0:1;
        } B;
    } IRER;

    vuint8_t SIU_reserved2[12]; /* Reserved 12 Bytes (Base+0x001C-0x0027) */

    union { /* Interrupt Rising-Edge Event Enable (+0x0028) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t IREE23:1;
            vuint32_t IREE22:1;
            vuint32_t IREE21:1;
            vuint32_t IREE20:1;
            vuint32_t IREE19:1;
            vuint32_t IREE18:1;
            vuint32_t IREE17:1;
            vuint32_t IREE16:1;
            vuint32_t IREE15:1;
            vuint32_t IREE14:1;
            vuint32_t IREE13:1;
            vuint32_t IREE12:1;
            vuint32_t IREE11:1;
            vuint32_t IREE10:1;
            vuint32_t IREE9:1;
            vuint32_t IREE8:1;
            vuint32_t IREE7:1;
            vuint32_t IREE6:1;
            vuint32_t IREE5:1;
            vuint32_t IREE4:1;
            vuint32_t IREE3:1;
            vuint32_t IREE2:1;
            vuint32_t IREE1:1;
            vuint32_t IREE0:1;
        } B;
    } IREER;

    union { /* Interrupt Falling-Edge Event Enable (+0x002C)*/
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t IFEE23:1;
            vuint32_t IFEE22:1;
            vuint32_t IFEE21:1;
            vuint32_t IFEE20:1;
            vuint32_t IFEE19:1;
            vuint32_t IFEE18:1;
            vuint32_t IFEE17:1;
            vuint32_t IFEE16:1;
            vuint32_t IFEE15:1;
            vuint32_t IFEE14:1;
            vuint32_t IFEE13:1;
            vuint32_t IFEE12:1;
            vuint32_t IFEE11:1;
            vuint32_t IFEE10:1;
            vuint32_t IFEE9:1;
            vuint32_t IFEE8:1;
            vuint32_t IFEE7:1;
            vuint32_t IFEE6:1;
            vuint32_t IFEE5:1;
            vuint32_t IFEE4:1;
            vuint32_t IFEE3:1;
            vuint32_t IFEE2:1;
            vuint32_t IFEE1:1;
            vuint32_t IFEE0:1;
        } B;
    } IFEER;

    union { /* Interrupt Filter Enable (Base+0x0030) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t IFE23:1;
            vuint32_t IFE22:1;
            vuint32_t IFE21:1;
            vuint32_t IFE20:1;
            vuint32_t IFE19:1;
            vuint32_t IFE18:1;
            vuint32_t IFE17:1;
            vuint32_t IFE16:1;
            vuint32_t IFE15:1;
            vuint32_t IFE14:1;
            vuint32_t IFE13:1;
            vuint32_t IFE12:1;
            vuint32_t IFE11:1;
            vuint32_t IFE10:1;
            vuint32_t IFE9:1;
            vuint32_t IFE8:1;
            vuint32_t IFE7:1;
            vuint32_t IFE6:1;
            vuint32_t IFE5:1;
            vuint32_t IFE4:1;
            vuint32_t IFE3:1;
            vuint32_t IFE2:1;
            vuint32_t IFE1:1;
            vuint32_t IFE0:1;
        } B;
    } IFER;

    vuint8_t SIU_reserved3[12]; /* Reserved 12 Bytes (Base+0x0034-0x003F) */

    union { /* Pad Configuration 0..148 (Base+0x0040-0x0168)*/
        vuint16_t R;
        struct {
                vuint16_t:1;
                vuint16_t SMC:1;
                vuint16_t APC:1;
                vuint16_t:1;
                vuint16_t PA:2;
                vuint16_t OBE:1;
                vuint16_t IBE:1;
                vuint16_t:2;
                vuint16_t ODE:1;
                vuint16_t:2;
                vuint16_t SRC:1;
                vuint16_t WPE:1;
                vuint16_t WPS:1;
        } B;
    } PCR[149];

    vuint8_t SIU_reserved4[918]; /*Reserved 918 Bytes (Base+0x016A-0x04FF) */

    union { /* Pad Selection for Mux Input (0x0500-0x53C) */
        vuint8_t R;
        struct {
            vuint8_t :4;
            vuint8_t PADSEL:4;
        } B;
    } PSMI[64];

    vuint8_t SIU_reserved5[192]; /*Reserved 192 Bytes (Base+0x0540-0x05FF) */

    union { /* GPIO Pad Data Output (Base+0x0600-0x06A0) */
        vuint8_t R;
        struct {
            vuint8_t :7;
            vuint8_t PDO:1;
        } B;
    } GPDO[152];

    vuint8_t SIU_reserved6[348]; /*Reserved 348 Bytes (Base+0x06A4-0x07FF) */

    union { /* GPIO Pad Data Input (Base+0x0800-0x08A0) */
        vuint8_t R;
        struct {
            vuint8_t :7;
            vuint8_t PDI:1;
        } B;
    } GPDI[152];

    vuint8_t SIU_reserved7[860]; /*Reserved 860 Bytes (Base+0x08A4-0x0BFF) */

    union { /* Parallel GPIO Pad Data Out 0-4 (0x0C00-0xC010) */
        vuint32_t R;
        struct {
            vuint32_t PPD0:32;
        } B;
    } PGPDO[5];

    vuint8_t SIU_reserved8[44]; /* Reserved 44 Bytes (Base+0x0C14-0x0C3F) */

    union { /* Parallel GPIO Pad Data In 0-4 (0x0C40-0x0C50) */
        vuint32_t R;
        struct {
            vuint32_t PPDI:32;
        } B;
    } PGPDI[5];

    vuint8_t SIU_reserved9[44]; /* Reserved 44 Bytes (Base+0x0C54-0x0C7F) */

    union { /* Masked Parallel GPIO Pad Data Out 0-9 (0x0C80-0x0CA4) */
        vuint32_t R;
        struct {
            vuint32_t MASK:16;
            vuint32_t MPPDO:16;
        } B;
    } MPGPDO[9];

    vuint8_t SIU_reserved10[856]; /*Reserved 844 Bytes (Base+0x0CA8-0x0FFF)*/

    union { /* Interrupt Filter Max Counter 0..23 (+0x1000-0x105C) */
        vuint32_t R;
        struct {
            vuint32_t :28;
            vuint32_t MAXCNT:4;
        } B;
    } IFMC[24];

    vuint8_t SIU_reserved11[32]; /* Reserved 32 Bytes (Base+0x1060-0x107F)*/

    union { /* Interrupt Filter Clock Prescaler (Base+0x1080) */
        vuint32_t R;
        struct {
            vuint32_t :28;
            vuint32_t IFCP:4;
        } B;
    } IFCPR;

    vuint8_t SIU_reserved12[12156]; /* Reserved 12156 Bytes (+0x1084-0x3FFF)*/

}; /* end of SIU_tag */
/****************************************************************************/
/*                          MODULE : SSCM                                    */
/****************************************************************************/
struct SSCM_tag{

    union { /* Status (Base+0x0000) */
        vuint16_t R;
        struct {
            vuint16_t:4;
            vuint16_t NXEN:1;
            vuint16_t:3;
            vuint16_t BMODE:3;
            vuint16_t :1;
            vuint16_t ABD:1;
            vuint16_t:3;
        } B;
    } STATUS;

    union { /* System Memory Configuration (Base+0x002) */
        vuint16_t R;
        struct {
				vuint16_t:5;
                vuint16_t PRSZ:5;
                vuint16_t PVLB:1;
                vuint16_t DTSZ:4;
                vuint16_t DVLD:1;
        } B;
    } MEMCONFIG;

    vuint8_t SSCM_reserved0[2]; /* Reserved 2 bytes (Base+0x0004-0x0005) */

    union { /* Error Configuration (Base+0x0006) */
        vuint16_t R;
        struct {
            vuint16_t :14;
            vuint16_t PAE:1;
            vuint16_t RAE:1;
        } B;
    } ERROR;

   union { /* Debug Status Port (Base+0x0008) */
        vuint16_t R;
        struct {
            vuint16_t :13;
            vuint16_t DEBUG_MODE:3;
        } B;
    } DEBUGPORT;

    vuint8_t SSCM_reserved1[2]; /* Reserved 2 bytes (Base+0x000A-0x000B) */

    union { /* Password Comparison High Word (Base+0x000C) */
      vuint32_t R;
      struct {
            vuint32_t PWD_HI:32;
        } B;
    } PWCMPH;

    union { /* Password Comparison Low Word (Base+0x0010)*/
        vuint32_t R;
        struct {
            vuint32_t PWD_LO:32;
        } B;
    } PWCMPL;

}; /* end of SSCM_tag */
/****************************************************************************/
/*                          MODULE : STM                                   */
/****************************************************************************/
  struct STM_CHANNEL_tag{

    union { /* STM Channel Control 0..3 */
        vuint32_t R;
        struct {
            vuint32_t :31;
            vuint32_t CEN:1;
        } B;
    } CCR;

    union { /* STM Channel Interrupt 0..3 */
        vuint32_t R;
        struct {
            vuint32_t :31;
            vuint32_t CIF:1;
        } B;
    } CIR;

    union { /* STM Channel Compare 0..3 */
        vuint32_t R;
        struct {
            vuint32_t CMP:32;
        } B;
    } CMP;

    vuint8_t STM_CHANNEL_reserved0[4]; /* Reserved 4 bytes between ch reg's */

  }; /* end of STM_CHANNEL_tag */


struct STM_tag{

    union { /* STM Control (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t CPS:8;
            vuint32_t :6;
            vuint32_t FRZ:1;
            vuint32_t TEN:1;
        } B;
    } CR;

    union { /* STM Count (Base+0x0004) */
        vuint32_t R;
    } CNT;

    vuint8_t STM_reserved1[8]; /* Reserved 8 bytes (Base+0x0008-0x000F) */

    struct STM_CHANNEL_tag CH[4]; /*STM Channels 0..3 (Base+0x0010-0x0048) */

}; /* end of STM_tag */
/****************************************************************************/
/*                          MODULE : SWT                                   */
/****************************************************************************/
struct SWT_tag{

    union { /* SWT Control (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t MAP0:1;
            vuint32_t MAP1:1;
            vuint32_t MAP2:1;
            vuint32_t MAP3:1;
            vuint32_t MAP4:1;
            vuint32_t MAP5:1;
            vuint32_t MAP6:1;
            vuint32_t MAP7:1;
            vuint32_t :14;
            vuint32_t KEY:1;
            vuint32_t RIA:1;
            vuint32_t WND:1;
            vuint32_t ITR:1;
            vuint32_t HLK:1;
            vuint32_t SLK:1;
            vuint32_t CSL:1;
            vuint32_t STP:1;
            vuint32_t FRZ:1;
            vuint32_t WEN:1;
        } B;
    } CR;

    union { /* SWT Interrupt (Base+0x0004) */
        vuint32_t R;
        struct {
            vuint32_t :31;
            vuint32_t TIF:1;
        } B;
    } IR;

    union { /* SWT Time-Out (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t WTO:32;
        } B;
    } TO;

    union { /* SWT Window (Base+0x000C) */
        vuint32_t R;
        struct {
            vuint32_t WST:32;
        } B;
    } WN;

    union { /* SWT Service (Base+0x0010) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t WSC:16;
        } B;
    } SR;

    union { /* SWT Counter Output (Base+0x0014) */
        vuint32_t R;
        struct {
            vuint32_t CNT:32;
        } B;
    } CO;

}; /* end of SWT_tag */   
/****************************************************************************/
/*                          MODULE : WKUP                                   */
/****************************************************************************/
struct WKUP_tag{

    union { /* NMI Status Flag (Base+0x0000) */
        vuint32_t R;
        struct {
			vuint32_t NIF0:1;  
			vuint32_t NOVF0:1;
			vuint32_t :30;
        } B;
    } NSR;

    vuint8_t WKUP_reserved0[4]; /* Reserved 4 Bytes (Base+0x0004-0x0007) */

    union { /* NMI Configuration (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t NLOCK0:1;
            vuint32_t NDSS0:2;
            vuint32_t NWRE0:1;
            vuint32_t :1;
            vuint32_t NREE0:1;
            vuint32_t NFEE0:1;
            vuint32_t NFE0:1;
            vuint32_t :24;
        } B;
    } NCR;

    vuint8_t WKUP_reserved1[8]; /* Reserved 8 Bytes (Base+0x000C-0x0013) */

    union { /* Wakeup/Interrup status flag (Base+0x0014) */
        vuint32_t R;
        struct {
            vuint32_t :3;
			vuint32_t EIF:29;
        } B;
    } WISR;

    union { /* Interrupt Request Enable (Base+0x0018) */
        vuint32_t R;
        struct {
            vuint32_t :3;
			vuint32_t EIRE:29; 
        } B;
    } IRER;

    union { /* Wakeup Request Enable (Base+0x001C) */
        vuint32_t R;
        struct {
            vuint32_t :3;
			vuint32_t WRE:29;
        } B;
    } WRER;

    vuint8_t WKUP_reserved2[8]; /* Reserved 8 Bytes (Base+0x0020-0x0027) */

    union { /* Wakeup/Interrupt Rising-Edge (Base+0x0028) */
        vuint32_t R;
        struct {
            vuint32_t :3;
			vuint32_t IREE:29;
        } B;
    } WIREER;

    union { /* Wakeup/Interrupt Falling-Edge (Base+0x002C) */
        vuint32_t R;
        struct {
            vuint32_t :3;
			vuint32_t IFEE:29;
        } B;
    } WIFEER;

    union { /* Wakeup/Interrupt Filter Enable (Base+0x0030) */
        vuint32_t R;
        struct {
            vuint32_t :3;
			vuint32_t IFE:29;
        } B;
    } WIFER;

    union { /* Wakeup/Interrupt Pullup Enable (Base+0x0034) */
        vuint32_t R;
        struct {
            vuint32_t :3;
			vuint32_t IPUE:29;
        } B;
    } WIPUER; /* Wakeup/Interrupt Pullup Enable Register */

    vuint8_t WKUP_reserved3[16328]; /* Reserved 16328 (Base+0x0038-0x3FFF) */

}; /* end of WKUP_tag */
/****************************************************************************/
/*                          MODULE : LINFLEX                                */
/****************************************************************************/
struct LINFLEX_tag {

    union { /* LINFLEX LIN Control 1 (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t CCD:1;
            vuint32_t CFD:1;
            vuint32_t LASE:1;
            vuint32_t AWUM:1;
            vuint32_t MBL:4;
            vuint32_t BF:1;
            vuint32_t SFTM:1;
            vuint32_t LBKM:1;
            vuint32_t MME:1;
            vuint32_t SBDT:1;
            vuint32_t RBLM:1;
            vuint32_t SLEEP:1;
            vuint32_t INIT:1;
        } B;
    } LINCR1;

    union { /* LINFLEX LIN Interrupt Enable (Base+0x0004) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t SZIE:1;
            vuint32_t OCIE:1;
            vuint32_t BEIE:1;
            vuint32_t CEIE:1;
            vuint32_t HEIE:1;
            vuint32_t :2;
            vuint32_t FEIE:1;
            vuint32_t BOIE:1;
            vuint32_t LSIE:1;
            vuint32_t WUIE:1;
            vuint32_t DBFIE:1;
            vuint32_t DBEIE:1;
            vuint32_t DRIE:1;
            vuint32_t DTIE:1;
            vuint32_t HRIE:1;
        } B;
    } LINIER;

    union { /* LINFLEX LIN Status (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t LINS:4;
            vuint32_t:2;
            vuint32_t RMB:1;
            vuint32_t:1;
            vuint32_t RBSY:1;
            vuint32_t RPS:1;
            vuint32_t WUF:1;
            vuint32_t DBFF:1;
            vuint32_t DBEF:1;
            vuint32_t DRF:1;
            vuint32_t DTF:1;
            vuint32_t HRF:1;
        } B;
    } LINSR;

    union { /* LINFLEX LIN Error Status (Base+0x000C) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t SZF:1;
            vuint32_t OCF:1;
            vuint32_t BEF:1;
            vuint32_t CEF:1;
            vuint32_t SFEF:1;
            vuint32_t BDEF:1;
            vuint32_t IDPEF:1;
            vuint32_t FEF:1;
            vuint32_t BOF:1;
            vuint32_t:6;
            vuint32_t NF:1;
        } B;
    } LINESR;

    union { /* LINFLEX UART Mode Control (Base+0x0010) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t:1;
            vuint32_t TDFL:2;
            vuint32_t:1;
            vuint32_t RDFL:2;
            vuint32_t:4;
            vuint32_t RXEN:1;
            vuint32_t TXEN:1;
            vuint32_t OP:1;
            vuint32_t PCE:1;
            vuint32_t WL:1;
            vuint32_t UART:1;
        } B;
    } UARTCR;

    union { /* LINFLEX UART Mode Status (Base+0x0014) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t SZF:1;
            vuint32_t OCF:1;
            vuint32_t PE:4; /*Can check all 4 RX'd bytes at once with array*/
            vuint32_t RMB:1;
            vuint32_t FEF:1;
            vuint32_t BOF:1;
            vuint32_t RPS:1;
            vuint32_t WUF:1;
            vuint32_t:2;
            vuint32_t DRF:1;
            vuint32_t DTF:1;
            vuint32_t NF:1;
        } B;
    } UARTSR;

    union { /* LINFLEX TimeOut Control Status ((Base+0x0018)*/
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t:5;
            vuint32_t LTOM:1;
            vuint32_t IOT:1;
            vuint32_t TOCE:1;
            vuint32_t CNT:8;
        } B;
    } LINTCSR;

    union { /* LINFLEX LIN Output Compare (Base+0x001C) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t OC2:8;
            vuint32_t OC1:8;
        } B;
    } LINOCR;

    union { /* LINFLEX LIN Timeout Control (Base+0x0020) */
        vuint32_t R;
        struct {
            vuint32_t :20;
            vuint32_t RTO:4;
            vuint32_t:1;
            vuint32_t HTO:7;
        } B;
    } LINTOCR;

    union { /* LINFLEX LIN Fractional Baud Rate (+0x0024) */
        vuint32_t R;
        struct {
            vuint32_t:28;
            vuint32_t DIV_F:4;
        } B;
    } LINFBRR;

    union { /* LINFLEX LIN Integer Baud Rate (Base+0x0028) */
        vuint32_t R;
        struct {
            vuint32_t:19;
            vuint32_t DIV_M:13;
        } B;
    } LINIBRR;

    union { /* LINFLEX LIN Checksum Field (Base+0x002C) */
        vuint32_t R;
        struct {
            vuint32_t:24;
            vuint32_t CF:8;
        } B;
    } LINCFR;

    union { /* LINFLEX LIN Control 2 (Base+0x0030) */
        vuint32_t R;
        struct {
            vuint32_t:17;
            vuint32_t IOBE:1;
            vuint32_t IOPE:1;
            vuint32_t WURQ:1;
            vuint32_t DDRQ:1;
            vuint32_t DTRQ:1;
            vuint32_t ABRQ:1;
            vuint32_t HTRQ:1;
            vuint32_t:8;
        } B;
    } LINCR2;

    union { /* LINFLEX Buffer Identifier (Base+0x0034) */
        vuint32_t R;
        struct {
            vuint32_t:16;
            vuint32_t DFL:6;
            vuint32_t DIR:1;
            vuint32_t CCS:1;
            vuint32_t:2;
            vuint32_t ID:6;
        } B;
    } BIDR;

    union { /* LINFLEX Buffer Data LSB (Base+0x0038) */
        vuint32_t R;
        struct {
            vuint32_t DATA3:8;
            vuint32_t DATA2:8;
            vuint32_t DATA1:8;
            vuint32_t DATA0:8;
        } B;
    } BDRL;

    union { /* LINFLEX Buffer Data MSB (Base+0x003C */
        vuint32_t R;
        struct {
            vuint32_t DATA7:8;
            vuint32_t DATA6:8;
            vuint32_t DATA5:8;
            vuint32_t DATA4:8;
        } B;
    } BDRM;

    union { /* LINFLEX Identifier Filter Enable (+0x0040) */
        vuint32_t R;
        struct {
            vuint32_t:24;
            vuint32_t FACT:8;
        } B;
    } IFER;

    union { /* LINFLEX Identifier Filter Match Index (+0x0044)*/
        vuint32_t R;
        struct {
            vuint32_t:28;
            vuint32_t IFMI:4;
        } B;
    } IFMI;

    union { /* LINFLEX Identifier Filter Mode (Base+0x0048) */
        vuint32_t R;
        struct {
            vuint32_t:27;
            vuint32_t IFM:5;
        } B;
    } IFMR;

    union { /* LINFLEX Identifier Filter Control 0..15 (+0x004C-0x0088)*/
        vuint32_t R;
        struct {
            vuint32_t:16;
            vuint32_t:3; 	 /* for LINflexD no reseve here*/
            vuint32_t DFL:3; /* Linflex D - this field is 6 bits (0 and 1), Linflex - this field is 3 bits (2-9 B1.5M) (2-7 B1M) */ 
            vuint32_t DIR:1;
            vuint32_t CCS:1;
            vuint32_t:2;
            vuint32_t ID:6;
        } B;
    } IFCR[16];

  
}; /* end of LINFLEX_tag */


/****************************************************************************/
/*                          MODULE : LINFLEXD0                              */
/****************************************************************************/
struct LINFLEXD0_tag {

    union { /* LINFLEX LIN Control 1 (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t CCD:1;
            vuint32_t CFD:1;
            vuint32_t LASE:1;
            vuint32_t AWUM:1;
            vuint32_t MBL:4;
            vuint32_t BF:1;
            vuint32_t SFTM:1;
            vuint32_t LBKM:1;
            vuint32_t MME:1;
            vuint32_t SBDT:1;
            vuint32_t RBLM:1;
            vuint32_t SLEEP:1;
            vuint32_t INIT:1;
        } B;
    } LINCR1;

    union { /* LINFLEX LIN Interrupt Enable (Base+0x0004) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t SZIE:1;
            vuint32_t OCIE:1;
            vuint32_t BEIE:1;
            vuint32_t CEIE:1;
            vuint32_t HEIE:1;
            vuint32_t :2;
            vuint32_t FEIE:1;
            vuint32_t BOIE:1;
            vuint32_t LSIE:1;
            vuint32_t WUIE:1;
            vuint32_t DBFIE:1;
            vuint32_t DBEIE:1;
            vuint32_t DRIE:1;
            vuint32_t DTIE:1;
            vuint32_t HRIE:1;
        } B;
    } LINIER;

    union { /* LINFLEX LIN Status (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t LINS:4;
            vuint32_t:2;
            vuint32_t RMB:1;
            vuint32_t:1;
            vuint32_t RBSY:1;
            vuint32_t RPS:1;
            vuint32_t WUF:1;
            vuint32_t DBFF:1;
            vuint32_t DBEF:1;
            vuint32_t DRF:1;
            vuint32_t DTF:1;
            vuint32_t HRF:1;
        } B;
    } LINSR;

    union { /* LINFLEX LIN Error Status (Base+0x000C) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t SZF:1;
            vuint32_t OCF:1;
            vuint32_t BEF:1;
            vuint32_t CEF:1;
            vuint32_t SFEF:1;
            vuint32_t BDEF:1;
            vuint32_t IDPEF:1;
            vuint32_t FEF:1;
            vuint32_t BOF:1;
            vuint32_t:6;
            vuint32_t NF:1;
        } B;
    } LINESR;

    union { /* LINFLEX UART Mode Control (Base+0x0010) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t:1;
            vuint32_t TDFL:2;
            vuint32_t:1;
            vuint32_t RDFL:2;
            vuint32_t:4;
            vuint32_t RXEN:1;
            vuint32_t TXEN:1;
            vuint32_t OP:1;
            vuint32_t PCE:1;
            vuint32_t WL:1;
            vuint32_t UART:1;
        } B;
    } UARTCR;

    union { /* LINFLEX UART Mode Status (Base+0x0014) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t SZF:1;
            vuint32_t OCF:1;
            vuint32_t PE:4; /*Can check all 4 RX'd bytes at once with array*/
            vuint32_t RMB:1;
            vuint32_t FEF:1;
            vuint32_t BOF:1;
            vuint32_t RPS:1;
            vuint32_t WUF:1;
            vuint32_t:2;
            vuint32_t DRF:1;
            vuint32_t DTF:1;
            vuint32_t NF:1;
        } B;
    } UARTSR;

    union { /* LINFLEX TimeOut Control Status ((Base+0x0018)*/
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t:5;
            vuint32_t LTOM:1;
            vuint32_t IOT:1;
            vuint32_t TOCE:1;
            vuint32_t CNT:8;
        } B;
    } LINTCSR;

    union { /* LINFLEX LIN Output Compare (Base+0x001C) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t OC2:8;
            vuint32_t OC1:8;
        } B;
    } LINOCR;

    union { /* LINFLEX LIN Timeout Control (Base+0x0020) */
        vuint32_t R;
        struct {
            vuint32_t :20;
            vuint32_t RTO:4;
            vuint32_t:1;
            vuint32_t HTO:7;
        } B;
    } LINTOCR;

    union { /* LINFLEX LIN Fractional Baud Rate (+0x0024) */
        vuint32_t R;
        struct {
            vuint32_t:28;
            vuint32_t DIV_F:4;
        } B;
    } LINFBRR;

    union { /* LINFLEX LIN Integer Baud Rate (Base+0x0028) */
        vuint32_t R;
        struct {
            vuint32_t:19;
            vuint32_t DIV_M:13;
        } B;
    } LINIBRR;

    union { /* LINFLEX LIN Checksum Field (Base+0x002C) */
        vuint32_t R;
        struct {
            vuint32_t:24;
            vuint32_t CF:8;
        } B;
    } LINCFR;

    union { /* LINFLEX LIN Control 2 (Base+0x0030) */
        vuint32_t R;
        struct {
            vuint32_t:17;
            vuint32_t IOBE:1;
            vuint32_t IOPE:1;
            vuint32_t WURQ:1;
            vuint32_t DDRQ:1;
            vuint32_t DTRQ:1;
            vuint32_t ABRQ:1;
            vuint32_t HTRQ:1;
            vuint32_t:8;
        } B;
    } LINCR2;

    union { /* LINFLEX Buffer Identifier (Base+0x0034) */
        vuint32_t R;
        struct {
            vuint32_t:16;
            vuint32_t DFL:6;
            vuint32_t DIR:1;
            vuint32_t CCS:1;
            vuint32_t:2;
            vuint32_t ID:6;
        } B;
    } BIDR;

    union { /* LINFLEX Buffer Data LSB (Base+0x0038) */
        vuint32_t R;
        struct {
            vuint32_t DATA3:8;
            vuint32_t DATA2:8;
            vuint32_t DATA1:8;
            vuint32_t DATA0:8;
        } B;
    } BDRL;

    union { /* LINFLEX Buffer Data MSB (Base+0x003C */
        vuint32_t R;
        struct {
            vuint32_t DATA7:8;
            vuint32_t DATA6:8;
            vuint32_t DATA5:8;
            vuint32_t DATA4:8;
        } B;
    } BDRM;

    union { /* LINFLEX Identifier Filter Enable (+0x0040) */
        vuint32_t R;
        struct {
            vuint32_t:24;
            vuint32_t FACT:8;
        } B;
    } IFER;

    union { /* LINFLEX Identifier Filter Match Index (+0x0044)*/
        vuint32_t R;
        struct {
            vuint32_t:28;
            vuint32_t IFMI:4;
        } B;
    } IFMI;

    union { /* LINFLEX Identifier Filter Mode (Base+0x0048) */
        vuint32_t R;
        struct {
            vuint32_t:27;
            vuint32_t IFM:5;
        } B;
    } IFMR;

    union { /* LINFLEX Identifier Filter Control 0..15 (+0x004C-0x0088)*/
        vuint32_t R;
        struct {
            vuint32_t:16;
            vuint32_t DFL:6;
            vuint32_t DIR:1;
            vuint32_t CCS:1;
            vuint32_t:2;
            vuint32_t ID:6;
        } B;
    } IFCR[16];

    union { /* LINFLEX Global Counter (+0x008C) */
        vuint32_t R;
        struct {
            vuint32_t:26;
            vuint32_t TDFBM:1;
            vuint32_t RDFBM:1;
            vuint32_t TDLIS:1;
            vuint32_t RDLIS:1;
            vuint32_t STOP:1;
            vuint32_t SR:1;
        } B;
    } GCR;

    union { /* LINFLEX UART preset timeout (+0x0090) */
        vuint32_t R;
        struct {
            vuint32_t:20;
            vuint32_t PTO:12;
        } B;
    } UARTPTO;

    union { /* LINFLEX UART current timeout (+0x0094) */
        vuint32_t R;
        struct {
            vuint32_t:20;
            vuint32_t CTO:12;
        } B;
    } UARTCTO;

    union { /* LINFLEX DMA Tx Enable (+0x0098) */
        vuint32_t R;
        struct {
            vuint32_t:16;
            vuint32_t DTE15:1;
            vuint32_t DTE14:1;
            vuint32_t DTE13:1;
            vuint32_t DTE12:1;
            vuint32_t DTE11:1;
            vuint32_t DTE10:1;
            vuint32_t DTE9:1;
            vuint32_t DTE8:1;
            vuint32_t DTE7:1;
            vuint32_t DTE6:1;
            vuint32_t DTE5:1;
            vuint32_t DTE4:1;
            vuint32_t DTE3:1;
            vuint32_t DTE2:1;
            vuint32_t DTE1:1;
            vuint32_t DTE0:1;
        } B;
    } DMATXE;

    union { /* LINFLEX DMA RX Enable (+0x009C) */
        vuint32_t R;
        struct {
            vuint32_t:16;
            vuint32_t DRE15:1;
            vuint32_t DRE14:1;
            vuint32_t DRE13:1;
            vuint32_t DRE12:1;
            vuint32_t DRE11:1;
            vuint32_t DRE10:1;
            vuint32_t DRE9:1;
            vuint32_t DRE8:1;
            vuint32_t DRE7:1;
            vuint32_t DRE6:1;
            vuint32_t DRE5:1;
            vuint32_t DRE4:1;
            vuint32_t DRE3:1;
            vuint32_t DRE2:1;
            vuint32_t DRE1:1;
            vuint32_t DRE0:1;
        } B;
    } DMARXE;
}; /* end of LINFLEXD0_tag */
/****************************************************************************/
/*                          MODULE : LINFLEXD1                                */
/****************************************************************************/
struct LINFLEXD1_tag {

    union { /* LINFLEX LIN Control 1 (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t CCD:1;
            vuint32_t CFD:1;
            vuint32_t LASE:1;
            vuint32_t AWUM:1;
            vuint32_t MBL:4;
            vuint32_t BF:1;
            vuint32_t SFTM:1;
            vuint32_t LBKM:1;
            vuint32_t MME:1;
            vuint32_t SBDT:1;
            vuint32_t RBLM:1;
            vuint32_t SLEEP:1;
            vuint32_t INIT:1;
        } B;
    } LINCR1;

    union { /* LINFLEX LIN Interrupt Enable (Base+0x0004) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t SZIE:1;
            vuint32_t OCIE:1;
            vuint32_t BEIE:1;
            vuint32_t CEIE:1;
            vuint32_t HEIE:1;
            vuint32_t :2;
            vuint32_t FEIE:1;
            vuint32_t BOIE:1;
            vuint32_t LSIE:1;
            vuint32_t WUIE:1;
            vuint32_t DBFIE:1;
            vuint32_t DBEIE:1;
            vuint32_t DRIE:1;
            vuint32_t DTIE:1;
            vuint32_t HRIE:1;
        } B;
    } LINIER;

    union { /* LINFLEX LIN Status (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t LINS:4;
            vuint32_t:2;
            vuint32_t RMB:1;
            vuint32_t:1;
            vuint32_t RBSY:1;
            vuint32_t RPS:1;
            vuint32_t WUF:1;
            vuint32_t DBFF:1;
            vuint32_t DBEF:1;
            vuint32_t DRF:1;
            vuint32_t DTF:1;
            vuint32_t HRF:1;
        } B;
    } LINSR;

    union { /* LINFLEX LIN Error Status (Base+0x000C) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t SZF:1;
            vuint32_t OCF:1;
            vuint32_t BEF:1;
            vuint32_t CEF:1;
            vuint32_t SFEF:1;
            vuint32_t BDEF:1;
            vuint32_t IDPEF:1;
            vuint32_t FEF:1;
            vuint32_t BOF:1;
            vuint32_t:6;
            vuint32_t NF:1;
        } B;
    } LINESR;

    union { /* LINFLEX UART Mode Control (Base+0x0010) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t:1;
            vuint32_t TDFL:2;
            vuint32_t:1;
            vuint32_t RDFL:2;
            vuint32_t:4;
            vuint32_t RXEN:1;
            vuint32_t TXEN:1;
            vuint32_t OP:1;
            vuint32_t PCE:1;
            vuint32_t WL:1;
            vuint32_t UART:1;
        } B;
    } UARTCR;

    union { /* LINFLEX UART Mode Status (Base+0x0014) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t SZF:1;
            vuint32_t OCF:1;
            vuint32_t PE:4; /*Can check all 4 RX'd bytes at once with array*/
            vuint32_t RMB:1;
            vuint32_t FEF:1;
            vuint32_t BOF:1;
            vuint32_t RPS:1;
            vuint32_t WUF:1;
            vuint32_t:2;
            vuint32_t DRF:1;
            vuint32_t DTF:1;
            vuint32_t NF:1;
        } B;
    } UARTSR;

    union { /* LINFLEX TimeOut Control Status ((Base+0x0018)*/
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t:5;
            vuint32_t LTOM:1;
            vuint32_t IOT:1;
            vuint32_t TOCE:1;
            vuint32_t CNT:8;
        } B;
    } LINTCSR;

    union { /* LINFLEX LIN Output Compare (Base+0x001C) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t OC2:8;
            vuint32_t OC1:8;
        } B;
    } LINOCR;

    union { /* LINFLEX LIN Timeout Control (Base+0x0020) */
        vuint32_t R;
        struct {
            vuint32_t :20;
            vuint32_t RTO:4;
            vuint32_t:1;
            vuint32_t HTO:7;
        } B;
    } LINTOCR;

    union { /* LINFLEX LIN Fractional Baud Rate (+0x0024) */
        vuint32_t R;
        struct {
            vuint32_t:28;
            vuint32_t DIV_F:4;
        } B;
    } LINFBRR;

    union { /* LINFLEX LIN Integer Baud Rate (Base+0x0028) */
        vuint32_t R;
        struct {
            vuint32_t:19;
            vuint32_t DIV_M:13;
        } B;
    } LINIBRR;

    union { /* LINFLEX LIN Checksum Field (Base+0x002C) */
        vuint32_t R;
        struct {
            vuint32_t:24;
            vuint32_t CF:8;
        } B;
    } LINCFR;

    union { /* LINFLEX LIN Control 2 (Base+0x0030) */
        vuint32_t R;
        struct {
            vuint32_t:17;
            vuint32_t IOBE:1;
            vuint32_t IOPE:1;
            vuint32_t WURQ:1;
            vuint32_t DDRQ:1;
            vuint32_t DTRQ:1;
            vuint32_t ABRQ:1;
            vuint32_t HTRQ:1;
            vuint32_t:8;
        } B;
    } LINCR2;

    union { /* LINFLEX Buffer Identifier (Base+0x0034) */
        vuint32_t R;
        struct {
            vuint32_t:16;
            vuint32_t DFL:6;
            vuint32_t DIR:1;
            vuint32_t CCS:1;
            vuint32_t:2;
            vuint32_t ID:6;
        } B;
    } BIDR;

    union { /* LINFLEX Buffer Data LSB (Base+0x0038) */
        vuint32_t R;
        struct {
            vuint32_t DATA3:8;
            vuint32_t DATA2:8;
            vuint32_t DATA1:8;
            vuint32_t DATA0:8;
        } B;
    } BDRL;

    union { /* LINFLEX Buffer Data MSB (Base+0x003C */
        vuint32_t R;
        struct {
            vuint32_t DATA7:8;
            vuint32_t DATA6:8;
            vuint32_t DATA5:8;
            vuint32_t DATA4:8;
        } B;
    } BDRM;

    union { /* LINFLEX Identifier Filter Enable (+0x0040) */
        vuint32_t R;
        struct {
            vuint32_t:24;
            vuint32_t FACT:8;
        } B;
    } IFER;

    union { /* LINFLEX Identifier Filter Match Index (+0x0044)*/
        vuint32_t R;
        struct {
            vuint32_t:28;
            vuint32_t IFMI:4;
        } B;
    } IFMI;

    union { /* LINFLEX Identifier Filter Mode (Base+0x0048) */
        vuint32_t R;
        struct {
            vuint32_t:27;
            vuint32_t IFM:5;
        } B;
    } IFMR;

/* No IFCR registers on LinFlexD_1 */

    union { /* LINFLEX Global Counter (+0x004C) */
        vuint32_t R;
        struct {
            vuint32_t:26;
            vuint32_t TDFBM:1;
            vuint32_t RDFBM:1;
            vuint32_t TDLIS:1;
            vuint32_t RDLIS:1;
            vuint32_t STOP:1;
            vuint32_t SR:1;
        } B;
    } GCR;

    union { /* LINFLEX UART preset timeout (+0x0050) */
        vuint32_t R;
        struct {
            vuint32_t:20;
            vuint32_t PTO:12;
        } B;
    } UARTPTO;

    union { /* LINFLEX UART current timeout (+0x0054) */
        vuint32_t R;
        struct {
            vuint32_t:20;
            vuint32_t CTO:12;
        } B;
    } UARTCTO;

    union { /* LINFLEX DMA Tx Enable (+0x0058) */
        vuint32_t R;
        struct {
            vuint32_t:16;
            vuint32_t DTE15:1;
            vuint32_t DTE14:1;
            vuint32_t DTE13:1;
            vuint32_t DTE12:1;
            vuint32_t DTE11:1;
            vuint32_t DTE10:1;
            vuint32_t DTE9:1;
            vuint32_t DTE8:1;
            vuint32_t DTE7:1;
            vuint32_t DTE6:1;
            vuint32_t DTE5:1;
            vuint32_t DTE4:1;
            vuint32_t DTE3:1;
            vuint32_t DTE2:1;
            vuint32_t DTE1:1;
            vuint32_t DTE0:1;
        } B;
    } DMATXE;

    union { /* LINFLEX DMA RX Enable (+0x005C) */
        vuint32_t R;
        struct {
            vuint32_t:16;
            vuint32_t DRE15:1;
            vuint32_t DRE14:1;
            vuint32_t DRE13:1;
            vuint32_t DRE12:1;
            vuint32_t DRE11:1;
            vuint32_t DRE10:1;
            vuint32_t DRE9:1;
            vuint32_t DRE8:1;
            vuint32_t DRE7:1;
            vuint32_t DRE6:1;
            vuint32_t DRE5:1;
            vuint32_t DRE4:1;
            vuint32_t DRE3:1;
            vuint32_t DRE2:1;
            vuint32_t DRE1:1;
            vuint32_t DRE0:1;
        } B;
    } DMARXE;
}; /* end of LINFLEXD1_tag */
       
/****************************************************************************/
/*                          MODULE : ME                                   */
/****************************************************************************/
struct ME_tag{

    union { /* Global Status (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t S_CURRENTMODE:4;
            vuint32_t S_MTRANS:1;
            vuint32_t S_DC:1;
            vuint32_t :2;
            vuint32_t S_PDO:1;
            vuint32_t :2;
            vuint32_t S_MVR:1;
            vuint32_t S_DFLA:2;
            vuint32_t S_CFLA:2;
            vuint32_t :9;
            vuint32_t S_FMPLL:1;
            vuint32_t S_FXOSC:1;
            vuint32_t S_FIRC:1;
            vuint32_t S_SYSCLK:4;
        } B;
    } GS;

    union { /* Mode Control (Base+0x004) */
        vuint32_t R;
        struct {
            vuint32_t TARGET_MODE:4;
            vuint32_t :12;
            vuint32_t KEY:16;
        } B;
    } MCTL;

    union { /* Mode Enable (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t :2;
            vuint32_t STANDBY0:1;
            vuint32_t :2;
            vuint32_t STOP0:1;
            vuint32_t :1;
            vuint32_t HALT0:1;
            vuint32_t RUN3:1;
            vuint32_t RUN2:1;
            vuint32_t RUN1:1;
            vuint32_t RUN0:1;
            vuint32_t DRUN:1;
            vuint32_t SAFE:1;
            vuint32_t TEST:1;
            vuint32_t RESET:1;
        } B;
    } MER;

    union { /* Interrupt Status (Base+0x000C) */
        vuint32_t R;
        struct {
            vuint32_t :28;
            vuint32_t I_ICONF:1;
            vuint32_t I_IMODE:1;
            vuint32_t I_SAFE:1;
            vuint32_t I_MTC:1;
        } B;
    } IS;

    union { /* Interrupt Mask (Base+0x0010) */
        vuint32_t R;
        struct {
            vuint32_t :28;
            vuint32_t M_ICONF:1;
            vuint32_t M_IMODE:1;
            vuint32_t M_SAFE:1;
            vuint32_t M_MTC:1;
        } B;
    } IM;

    union { /* Invalid Mode Transition Status (Base+0x0014) */
        vuint32_t R;
        struct {
            vuint32_t :27;
            vuint32_t S_MTI:1;
            vuint32_t S_MRI:1;
            vuint32_t S_DMA:1;
            vuint32_t S_NMA:1;
            vuint32_t S_SEA:1;
        } B;
    } IMTS;

    union { /* Debug Mode Transition Status (Base+0x0018) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t MPH_BUSY:1;
            vuint32_t :2;
            vuint32_t PMC_PROG:1;
            vuint32_t CORE_DBG:1;
            vuint32_t :2;
            vuint32_t SMR:1;
            vuint32_t :1;
            vuint32_t FMPLL_SC:1;
            vuint32_t FXOSC_SC:1;
            vuint32_t FIRC_SC:1;
            vuint32_t :1;
            vuint32_t SYSCLK_SW:1;
            vuint32_t DFLASH_SC:1;
            vuint32_t CFLASH_SC:1;
            vuint32_t CDP_PRPH_0_143:1;
            vuint32_t :3;
            vuint32_t CDP_PRPH_96_127:1;
            vuint32_t CDP_PRPH_64_95:1;
            vuint32_t CDP_PRPH_32_63:1;
            vuint32_t CDP_PRPH_0_31:1;
        } B;
    } DMTS;

    vuint8_t ME_reserved0[4]; /* reserved 4 bytes (Base+0x001C-0x001F) */

    union { /* Reset Mode Configuration (Base+0x0020) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t PDO:1;
            vuint32_t :2;
            vuint32_t MVRON:1;
            vuint32_t DFLAON:2;
            vuint32_t CFLAON:2;
            vuint32_t :9;
            vuint32_t FMPLLON:1;
            vuint32_t FXOSC0ON:1;
            vuint32_t FIRCON:1;
            vuint32_t SYSCLK:4;
        } B;
    } RESET;

    union { /* Test Mode Configuration (Base+0x0024) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t PDO:1;
            vuint32_t :2;
            vuint32_t MVRON:1;
            vuint32_t DFLAON:2;
            vuint32_t CFLAON:2;
            vuint32_t :9;
            vuint32_t FMPLLON:1;
            vuint32_t FXOSC0ON:1;
            vuint32_t FIRCON:1;
            vuint32_t SYSCLK:4;
        } B;
    } TEST;

    union { /* Safe Mode Configuration (Base+0x0028) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t PDO:1;
            vuint32_t :2;
            vuint32_t MVRON:1;
            vuint32_t DFLAON:2;
            vuint32_t CFLAON:2;
            vuint32_t :9;
            vuint32_t FMPLLON:1;
            vuint32_t FXOSC0ON:1;
            vuint32_t FIRCON:1;
            vuint32_t SYSCLK:4;
        } B;
    } SAFE;

    union { /* DRUN Mode Configuration (Base+0x002C) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t PDO:1;
            vuint32_t :2;
            vuint32_t MVRON:1;
            vuint32_t DFLAON:2;
            vuint32_t CFLAON:2;
            vuint32_t :9;
            vuint32_t FMPLLON:1;
            vuint32_t FXOSCON:1;
            vuint32_t FIRCON:1;
            vuint32_t SYSCLK:4;
        } B;
    } DRUN;

    union { /* RUN 0->4 Mode Configuration (+0x0030-0x003C) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t PDO:1;
            vuint32_t :2;
            vuint32_t MVRON:1;
            vuint32_t DFLAON:2;
            vuint32_t CFLAON:2;
            vuint32_t :9;
            vuint32_t FMPLLON:1;
            vuint32_t FXOSC0ON:1;
            vuint32_t FIRCON:1;
            vuint32_t SYSCLK:4;
        } B;
    } RUN[4];

    union { /* HALT0 Mode Configuration (Base+0x0040) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t PDO:1;
            vuint32_t :2;
            vuint32_t MVRON:1;
            vuint32_t DFLAON:2;
            vuint32_t CFLAON:2;
            vuint32_t :9;
            vuint32_t FMPLLON:1;
            vuint32_t FXOSC0ON:1;
            vuint32_t FIRCON:1;
            vuint32_t SYSCLK:4;
        } B;
    } HALT0;

    vuint8_t ME_reserved1[4]; /* reserved 4 bytes (Base+0x0044-0x0047) */

    union { /* STOP0 Mode Configuration (Base+0x0048) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t PDO:1;
            vuint32_t :2;
            vuint32_t MVRON:1;
            vuint32_t DFLAON:2;
            vuint32_t CFLAON:2;
            vuint32_t :9;
            vuint32_t FMPLLON:1;
            vuint32_t FXOSC0ON:1;
            vuint32_t FIRCON:1;
            vuint32_t SYSCLK:4;
        } B;
    } STOP0;

    vuint8_t ME_reserved2[8]; /* reserved 8 bytes (Base+0x004C-0x0053) */

    union { /* STANDBY0 Mode Configuration (Base+0x0054) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t PDO:1;
            vuint32_t :2;
            vuint32_t MVRON:1;
            vuint32_t DFLAON:2;
            vuint32_t CFLAON:2;
            vuint32_t :9;
            vuint32_t FMPLLON:1;
            vuint32_t FXOSC0ON:1;
            vuint32_t FIRCON:1;
            vuint32_t SYSCLK:4;
        } B;
    } STANDBY0;

    vuint8_t ME_reserved3[8]; /* reserved 8 bytes (Base+0x0058-0x005F) */

    union {
        vuint32_t R;
        struct { /* Peripheral Status 0 (Base+0x0060) */
            vuint32_t :8;
            vuint32_t S_DMA_CH_MUX:1;
            vuint32_t :1;
            vuint32_t S_FLEXCAN5:1;
            vuint32_t S_FLEXCAN4:1;
            vuint32_t S_FLEXCAN3:1;
            vuint32_t S_FLEXCAN2:1;
            vuint32_t S_FLEXCAN1:1;
            vuint32_t S_FLEXCAN0:1;
            vuint32_t :2;
            vuint32_t :1; /* S_LINFLEX9:1; // not present on B1M */
            vuint32_t :1; /* S_LINFLEX8:1; // not present on B1M */
			vuint32_t :2;
            vuint32_t S_DSPI5:1;
            vuint32_t S_DSPI4:1;
            vuint32_t S_DSPI3:1;
            vuint32_t S_DSPI2:1;
            vuint32_t S_DSPI1:1;
            vuint32_t S_DSPI0:1;
            vuint32_t :4;
        } B;
    } PS0;

    union { /* Peripheral Status 1 (Base+0x0064)*/
        vuint32_t R;
        struct {
            vuint32_t :3;
            vuint32_t S_CANSAMPLER:1;
            vuint32_t :2;
            vuint32_t S_CTUL:1;
            vuint32_t :1;
            vuint32_t S_LINFLEX7:1;
            vuint32_t S_LINFLEX6:1;
            vuint32_t S_LINFLEX5:1;
            vuint32_t S_LINFLEX4:1;
            vuint32_t S_LINFLEX3:1;
            vuint32_t S_LINFLEX2:1;
            vuint32_t S_LINFLEX1:1;
            vuint32_t S_LINFLEX0:1;
            vuint32_t :3;
            vuint32_t S_I2C0:1;
            vuint32_t :10;
            vuint32_t S_ADC1:1;
            vuint32_t S_ADC0:1;
        } B;
    } PS1;

    union { /* Peripheral Status 2 (Base+0x0068) */
        vuint32_t R;
        struct {
            vuint32_t :3;
            vuint32_t S_PIT_RTI:1;
            vuint32_t S_RTC_API:1;
            vuint32_t :16;
            vuint32_t S_EMIOS1:1;
            vuint32_t S_EMIOS0:1;
            vuint32_t :2;
            vuint32_t S_WKPU:1; 
            vuint32_t S_SIUL:1;
            vuint32_t :4;
        } B;
    } PS2;

    union { /* Peripheral Status 3 (Base+0x006C) */
        vuint32_t R;
        struct {
            vuint32_t :23;
            vuint32_t S_CMU:1;
            vuint32_t :8;
        } B;
    } PS3;

    vuint8_t ME_reserved4[16]; /* reserved 16 bytes (Base+0x0070-0x007F) */

    union { /* RUN Peripheral Config 0..7 (+0x0080-009C) */
        vuint32_t R;
        struct {
            vuint32_t :24;
            vuint32_t RUN3:1;
            vuint32_t RUN2:1;
            vuint32_t RUN1:1;
            vuint32_t RUN0:1;
            vuint32_t DRUN:1;
            vuint32_t SAFE:1;
            vuint32_t TEST:1;
            vuint32_t RESET:1;
        } B;
    } RUNPC[8];

    union { /* Low Pwr Periph Config 0..7 (+0x00A0-0x00BC) */
      vuint32_t R;
      struct {
            vuint32_t :18;
            vuint32_t STANDBY0:1;
            vuint32_t :2;
            vuint32_t STOP0:1;
            vuint32_t :1;
            vuint32_t HALT0:1;
            vuint32_t :8;
        } B;
    } LPPC[8];


    /* Note on PCTL registers: There are only some PCTL implemented in      */
    /*  Bolero 1.5M/1M. In order to make the PCTL easily addressable, these      */
    /*  are defined as an array (ie ME.PCTL[x].R). This means you have      */
    /*  to be careful when addressing these registers in order not to       */
    /*  access a PCTL that is not implemented. Following are available:     */
    /*  104, 92, 91, 73, 72, 69, 68, 60, 57, 55, 53, 51, 50, 49,48,			*/
  	/*   44, 33, 32, 23, 21-16, 13, 12, 9-4						*/

    union { /* Peripheral Control 0..143 (+0x00C0-0x014F) */
        vuint8_t R;
        struct {
            vuint8_t :1;
            vuint8_t DBG_F:1;
            vuint8_t LP_CFG:3;
            vuint8_t RUN_CFG:3;
        } B;
    } PCTL[105];

}; /* end of ME_tag */
   
/****************************************************************************/
/*                          MODULE : CGM                                   */
/****************************************************************************/
struct CGM_tag{
    /*
    The "CGM" has fairly wide coverage and essentially includes everything in

    chapter 9 of the Bolero Reference Manual:

        Base Address | Clock Sources

       -----------------------------	    

        0xC3FE0000   | FXOSC_CTL

        0xC3FE0040   | SXOSC_CTL

        0xC3FE0060   | FIRC_CTL

        0xC3FE0080   | SIRC_CTL

        0xC3FE00A0   | FMPLL

        0xC3FE00C0   | CGM Block 1

        0xC3FE0100   | CMU    

        0xC3FE0120   | CGM Block 2



        In this header file, "Base" referrs to the 1st address, 0xC3FE_0000 

    */
    /* FXOSC - 0xC3FE_0000*/
    union { /* Fast OSC Control (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t OSCBYP:1;
            vuint32_t :7;
            vuint32_t EOCV:8;
            vuint32_t M_OSC:1;
            vuint32_t :2;
            vuint32_t OSCDIV:5;
            vuint32_t I_OSC:1;
            vuint32_t:7;
        } B;
    } FXOSC_CTL;


    /* Reserved Space between end of FXOSC and start SXOSC */
    vuint8_t CGM_reserved0[60]; /* Reserved 60 bytes (Base+0x0004-0x003F) */


    /* SXOSC - 0xC3FE_0040*/
    union { /* Slow Osc Control (Base+0x0040) */
        vuint32_t R;
        struct {
            vuint32_t OSCBYP:1;
            vuint32_t :7;
            vuint32_t EOCV:8;
            vuint32_t M_OSC:1;
            vuint32_t :2;
            vuint32_t OSCDIV:5;
            vuint32_t I_OSC:1;
            vuint32_t :5;
            vuint32_t S_OSC:1;
            vuint32_t OSCON:1;
        } B;
    } SXOSC_CTL;


    /* Reserved space between end of SXOSC and start of FIRC */
    vuint8_t CGM_reserved1[28]; /*Reserved 28 bytes (Base+0x0044-0x005F) */


    /* FIRC - 0xC3FE_0060 */
    union { /* Fast IRC Control (Base+0x0060) */
        vuint32_t R;
        struct {
            vuint32_t :10;
            vuint32_t RCTRIM:6;
            vuint32_t :3;
            vuint32_t RCDIV:5;
			vuint32_t :2;
			vuint32_t FIRCON_STDBY:1;
            vuint32_t :5;
        } B;
    } FIRC_CTL;


    /* Reserved space between end of FIRC and start of SIRC */
    vuint8_t CGM_reserved2[28]; /*Reserved 28 bytes (Base+0x0064-0x007F) */


    /* SIRC - 0xC3FE_0080 */
    union { /* Slow IRC Control (Base+0x0080) */
        vuint32_t R;
        struct {
            vuint32_t :11;
            vuint32_t SIRCTRIM:5;
            vuint32_t :3;
            vuint32_t SIRCDIV:5;
            vuint32_t :3;
            vuint32_t S_SIRC:1;
            vuint32_t :3;
            vuint32_t SIRCON_STDBY:1;
        } B;
    } SIRC_CTL;


    /* Reserved space between end of SIRC and start of FMPLL */
    vuint8_t CGM_reserved3[28]; /*Reserved 28 bytes (Base+0x0084-0x009F) */


    /* FMPLL - 0xC3FE_00A0 */
    union { /* FMPLL Control (Base+0x00A0) */
        vuint32_t R;
        struct {
			vuint32_t:2;
			vuint32_t IDF:4;
			vuint32_t ODF:2;
			vuint32_t:1;
			vuint32_t NDIV:7;
			vuint32_t:7;
			vuint32_t EN_PLL_SW:1;
			vuint32_t MODE:1;
			vuint32_t UNLOCK_ONCE:1;
			vuint32_t:1;
			vuint32_t I_LOCK:1;
			vuint32_t S_LOCK:1;
			vuint32_t PLL_FAIL_MASK:1;
			vuint32_t PLL_FAIL_FLAG:1;
			vuint32_t:1;
        } B;
    } FMPLL_CR;

    union { /* FMPLL Modulation (Base+0x00A4) */
        vuint32_t R;
        struct {
            vuint32_t STRB_BYPASS:1;
            vuint32_t :1;
            vuint32_t SPRD_SEL:1;
            vuint32_t MOD_PERIOD:13;
            vuint32_t FM_EN:1;
            vuint32_t INC_STEP:15;
        } B;
    } FMPLL_MR;


    /* Reserved space between end of FMPLL and start of CGM Block 1 */
    vuint8_t CGM_reserved4[88]; /*Reserved 88 bytes (Base+0x00A8-0x00FF) */

    /* CMU - 0xC3FE_0100 */
    union { /* CMU Control Status (Base+0x0100) */
        vuint32_t R;
        struct {
            vuint32_t :8;
            vuint32_t SFM:1;
            vuint32_t :13;
            vuint32_t CLKSEL1:2;
            vuint32_t :5;
            vuint32_t RCDIV:2;
            vuint32_t CME_A:1;
        } B;
    } CMU_CSR;

    union { /* CMU Frequency Display (Base+0x0104) */
        vuint32_t R;
        struct {
            vuint32_t :12;
            vuint32_t FD:20;
        } B;
    } CMU_FDR;

    union { /* CMU High Freq Reference FMPLL (Base+0x0108) */
        vuint32_t R;
        struct {
            vuint32_t :20;
            vuint32_t HFREF:12;
        } B;
    } CMU_HFREFR;

    union { /* CMU Low Freq Reference FMPLL (Base+0x010C) */
        vuint32_t R;
        struct {
            vuint32_t :20;
            vuint32_t LFREF:12;
        } B;
    } CMU_LFREFR;

    union { /* CMU Interrupt Status (Base+0x0110) */
        vuint32_t R;
        struct {
            vuint32_t :29;
            vuint32_t FHHI:1;  // *_A not present in RM
            vuint32_t FLLI:1;  // *_A not present in RM
            vuint32_t OLRI:1;
        } B;
    } CMU_ISR;

    /* Reserved space where IMR was previously positioned */
    vuint8_t CGM_reserved5[4]; /*Reserved 4 bytes (Base+0x0114-0x0117) */

    union { /* CMU Measurement Duration (Base+0x0118) */
        vuint32_t R;
        struct {
            vuint32_t :12;
            vuint32_t MD:20;
        } B;
    } CMU_MDR;


    /* Reserved space between end of CMU and start of CGM Block 2 */
    vuint8_t CGM_reserved6[596]; /*Reserved 596 bytes (Base+0x011C-0x036F) */

    union { /* GCM Output Clock Enable (Base+0x0370) */
        vuint32_t R;
        struct {
            vuint32_t :31;
            vuint32_t EN:1;
        } B;
    } OC_EN;

    union { /* CGM Output Clock Division Sel (Base+0x0374) */
        vuint32_t R;
        struct {
            vuint32_t :2;
            vuint32_t SELDIV:2;
            vuint32_t SELCTL:4;
			vuint32_t :24;
        } B;
    } OCDS_SC;

    union { /* CGM System Clock Select Status (Base+0x0378) */
        vuint32_t R;
        struct {
            vuint32_t :4;
            vuint32_t SELSTAT:4;
            vuint32_t :24;
        } B;
    } SC_SS;

    union { /* CGM Sys Clk Div Config 0.2 (0x037C-0x037E) */
        vuint8_t R;
        struct {
            vuint8_t DE:1;
            vuint8_t :3;
            vuint8_t DIV:4;
        } B;
    } SC_DC[3];

   // vuint8_t CGM_reserved7[15489]; /*Reserved 1 byte (Base+0x037F - 0x3FFF) */

}; /* end of CGM_tag */
   
/****************************************************************************/
/*                          MODULE : RGM  base address - 0xC3FE_4000        */
/****************************************************************************/
struct RGM_tag{

    union { /* Functional Event Status (Base+0x0000) */
        vuint16_t R;
        struct {
            vuint16_t F_EXR:1;
            vuint16_t :6;
            vuint16_t F_FLASH:1;
            vuint16_t F_LVD45:1;
            vuint16_t F_CMU_FHL:1;
            vuint16_t F_CMU_OLR:1;
            vuint16_t F_FMPLL:1;
            vuint16_t F_CHKSTOP:1;
            vuint16_t F_SOFT:1;
            vuint16_t F_CORE:1;
            vuint16_t F_JTAG:1;
        } B;
    } FES;

    union { /* Destructive Event Status (Base+0x0002) */
        vuint16_t R;
        struct {
            vuint16_t F_POR:1;
            vuint16_t :10;
            vuint16_t F_LVD27_VREG:1;
			vuint16_t F_LVD27:1;
            vuint16_t F_SWT:1;
            vuint16_t F_LVD12_PD1:1;
            vuint16_t F_LVD12_PD0:1;
        } B;
    } DES;

    union { /* Functional Event Reset Disable (+0x0004) */
        vuint16_t R;
        struct {
            vuint16_t D_EXR:1;
            vuint16_t :6;
            vuint16_t D_FLASH:1;
            vuint16_t D_LVD45:1;
            vuint16_t D_CMU_FHL:1;
            vuint16_t D_CMU_OLR:1;
            vuint16_t D_FMPLL:1;
            vuint16_t D_CHKSTOP:1;
            vuint16_t D_SOFT:1;
            vuint16_t D_CORE:1;
            vuint16_t D_JTAG:1;
        } B;
    } FERD;

    union { /* Destructive Event Reset Disable (Base+0x0006)*/
        vuint16_t R;
        struct {
            vuint16_t :11;
            vuint16_t D_LVD27_VREG:1;
			vuint16_t D_LVD27:1;
            vuint16_t D_SWT:1;
            vuint16_t D_LVD12_PD1:1;
            vuint16_t D_LVD12_PD0:1;
        } B;
    } DERD;

    vuint8_t RGM_reserved0[8]; /*Reserved 8 bytes (Base+0x008-0x000F) */

    union { /* Functional Event Alt Request (Base+0x0010) */
        vuint16_t R;
        struct {
			vuint16_t AR_EXR:1;
			vuint16_t:6;
			vuint16_t AR_FLASH:1;
			vuint16_t AR_LVD45:1;
			vuint16_t AR_CMU_FHL:1;
			vuint16_t AR_CMU_OLR:1;
			vuint16_t AR_FMPLL:1;
			vuint16_t AR_CHKSTOP:1;
			vuint16_t AR_SOFT:1;
			vuint16_t AR_CORE:1;
			vuint16_t AR_JTAG:1;
        } B;
    } FEAR;
	
	union { /* Destructive Event Alt Request (Base+0x0012) */
		vuint16_t R;
		struct {
			vuint16_t:11;
			vuint16_t AR_LVD27_VREG:1;
			vuint16_t AR_LVD27:1;
			vuint16_t AR_SWT:1;
			vuint16_t AR_LVD12_PD1:1;
			vuint16_t AR_LVD12_PD0:1;
            } B;
        } DEAR;                 /* Destructive Event Alternate Request */

    vuint8_t RGM_reserved1[4]; /*Reserved 4 bytes (Base+0x0014-0x0017) */

    union { /* Functional Event Short Sequence (+0x0018) */
        vuint16_t R;
        struct {
            vuint16_t SS_EXR:1;
            vuint16_t :6;
            vuint16_t SS_FLASH:1;
            vuint16_t SS_LVD45:1;
            vuint16_t SS_CMU_FHL:1;
            vuint16_t SS_CMU_OLR:1;
            vuint16_t SS_FMPLL:1;
            vuint16_t SS_CHKSTOP:1;
            vuint16_t SS_SOFT:1;
            vuint16_t SS_CORE:1;
            vuint16_t SS_JTAG:1;
        } B;
    } FESS;

    union { /* STANDBY reset sequence (Base+0x001A) */
        vuint16_t R;
        struct {
            vuint16_t :8;
            vuint16_t BOOT_FROM_BKP_RAM:1;
            vuint16_t :7;
        } B;
    } STDBY;

    union { /* Functional Bidirectional Reset En (+0x001C) */
        vuint16_t R;
        struct {
            vuint16_t BE_EXR:1;
            vuint16_t :6;
            vuint16_t BE_FLASH:1;
            vuint16_t BE_LVD45:1;
            vuint16_t BE_CMU_FHL:1;
            vuint16_t BE_CMU_OLR:1;
            vuint16_t BE_FMPLL:1;
            vuint16_t BE_CHKSTOP:1;
            vuint16_t BE_SOFT:1;
            vuint16_t BE_CORE:1;
            vuint16_t BE_JTAG:1;
        } B;
    } FBRE;

}; /* end of RGM_tag */
/****************************************************************************/
/*                          MODULE : PCU  (base address 0xC3FE_8000)        */
/****************************************************************************/
struct PCU_tag{

    union { /* PCU Power domain 0-3 config (+0x0000-0x000C) */
        vuint32_t R;
        struct {
            vuint32_t :18;
            vuint32_t STBY0:1;
            vuint32_t :2;
            vuint32_t STOP0:1;
            vuint32_t :1;
            vuint32_t HALT0:1;
            vuint32_t RUN3:1;
            vuint32_t RUN2:1;
            vuint32_t RUN1:1;
            vuint32_t RUN0:1;
            vuint32_t DRUN:1;
            vuint32_t SAFE:1;
            vuint32_t TEST:1;
            vuint32_t RST:1;
        } B;
    } PCONF[4];

    vuint8_t PCU_reserved0[48]; /* Reserved 48 bytes (Base+0x0010-0x003F) */

    union { /* PCU Power Domain Status (Base+0x0040) */
        vuint32_t R;
        struct {
            vuint32_t :28;
            vuint32_t PD3:1;
            vuint32_t PD2:1;
            vuint32_t PD1:1;
            vuint32_t PD0:1;
        } B;
    } PSTAT;

    vuint8_t PCU_reserved1[60]; /* Reserved 60 bytes (Base+0x0044-0x007F) */


 /* Following register is from Voltage Regulators chapter of RM */

    union { /* PCU Voltage Regulator Control (Base+0x0080) */
        vuint32_t R;
        struct {
            vuint32_t :31;
            vuint32_t MASK_LVDHV5:1;
        } B;
    } VREG_CTL; /* Changed from VCTL for consistency with other regs here */

	}; /* end of PCU_tag */
	
/****************************************************************************/
/*                          MODULE : CTU Lite(base address - 0xFFE6_4000)   */
/****************************************************************************/
struct CTUL_tag{

   // union { /* CTU Control Status Register (Base+0x0000)NOT PRESENT WITHIN RM*/
    //    vuint32_t R;
   //     struct {
   //         vuint32_t :24;
   //         vuint32_t TRGIEN:1;
    //        vuint32_t TRGI:1;
   //         vuint32_t :6;
   //     } B;
   // } CSR;

    vuint8_t CTU_reserved[48]; /* Reserved 48 bytes (Base+0x0000-0x002F) */

    union { /* Event Config 0..63 (Base+0x0030-0x012C) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t TM:1;
            vuint32_t CLR_FLAG:1;
            vuint32_t :5;
            vuint32_t ADC_SEL:1;
            vuint32_t :1;
            vuint32_t CHANNEL_VALUE:7;
        } B;
    } EVTCFGR[64];


}; /* end of CTUL_tag */

/****************************************************************************/
/* MODULE : EMIOS (base address - eMIOS0 0xC3FA_0000; eMIOS1 0xC3FA_4000)   */
/****************************************************************************/

struct EMIOS_CHANNEL_tag{

    union { /* Channel A Data (UCn Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t A:16;
        } B;
    } CADR;

    union { /* Channel B Data (UCn Base+0x0004) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t B:16;
        } B;
    } CBDR;

    union { /* Channel Counter (UCn Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t C:16;
        } B;
    } CCNTR;

    union { /* Channel Control (UCn Base+0x000C) */
        vuint32_t R;
        struct {
            vuint32_t FREN:1;
            vuint32_t :3;
            vuint32_t UCPRE:2;
            vuint32_t UCPEN:1;
            vuint32_t DMA:1;
            vuint32_t :1;
            vuint32_t IF:4;
            vuint32_t FCK:1;
            vuint32_t FEN:1;
            vuint32_t :3;
            vuint32_t FORCMA:1;
            vuint32_t FORCMB:1;
            vuint32_t :1;
            vuint32_t BSL:2;
            vuint32_t EDSEL:1;
            vuint32_t EDPOL:1;
            vuint32_t MODE:7;
        } B;
    } CCR;

    union { /* Channel Status (UCn Base+0x0010) */
        vuint32_t R;
        struct {
            vuint32_t OVR:1;
            vuint32_t :15;
            vuint32_t OVFL:1;
            vuint32_t :12;
            vuint32_t UCIN:1;
            vuint32_t UCOUT:1;
            vuint32_t FLAG:1;
        } B;
    } CSR;

    union { /* Alternate Channel A Data (UCn Base+0x0014) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t ALTA:16;
        } B;
    } ALTCADR;

    vuint8_t EMIOS_CHANNEL_reserved0[8]; /* (UCn Base + (0x0018-0x001F) */

}; /* end of EMIOS_CHANNEL_tag */


struct EMIOS_tag{

    union { /* Module Configuration (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t :1;
            vuint32_t MDIS:1;
            vuint32_t FRZ:1;
            vuint32_t GTBE:1;
            vuint32_t :1;
            vuint32_t GPREN:1;
            vuint32_t :10;
            vuint32_t GPRE:8;
            vuint32_t :8;
        } B;
    } MCR;

    union { /* Global Flag (Base+0x0004) */
        vuint32_t R;
        struct {
            vuint32_t F31:1;
            vuint32_t F30:1;
            vuint32_t F29:1;
            vuint32_t F28:1;
            vuint32_t F27:1;
            vuint32_t F26:1;
            vuint32_t F25:1;
            vuint32_t F24:1;
            vuint32_t F23:1;
            vuint32_t F22:1;
            vuint32_t F21:1;
            vuint32_t F20:1;
            vuint32_t F19:1;
            vuint32_t F18:1;
            vuint32_t F17:1;
            vuint32_t F16:1;
            vuint32_t F15:1;
            vuint32_t F14:1;
            vuint32_t F13:1;
            vuint32_t F12:1;
            vuint32_t F11:1;
            vuint32_t F10:1;
            vuint32_t F9:1;
            vuint32_t F8:1;
            vuint32_t F7:1;
            vuint32_t F6:1;
            vuint32_t F5:1;
            vuint32_t F4:1;
            vuint32_t F3:1;
            vuint32_t F2:1;
            vuint32_t F1:1;
            vuint32_t F0:1;
        } B;
    } GFR;

    union { /* Output Update Disable (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t OU31:1;
            vuint32_t OU30:1;
            vuint32_t OU29:1;
            vuint32_t OU28:1;
            vuint32_t OU27:1;
            vuint32_t OU26:1;
            vuint32_t OU25:1;
            vuint32_t OU24:1;
            vuint32_t OU23:1;
            vuint32_t OU22:1;
            vuint32_t OU21:1;
            vuint32_t OU20:1;
            vuint32_t OU19:1;
            vuint32_t OU18:1;
            vuint32_t OU17:1;
            vuint32_t OU16:1;
            vuint32_t OU15:1;
            vuint32_t OU14:1;
            vuint32_t OU13:1;
            vuint32_t OU12:1;
            vuint32_t OU11:1;
            vuint32_t OU10:1;
            vuint32_t OU9:1;
            vuint32_t OU8:1;
            vuint32_t OU7:1;
            vuint32_t OU6:1;
            vuint32_t OU5:1;
            vuint32_t OU4:1;
            vuint32_t OU3:1;
            vuint32_t OU2:1;
            vuint32_t OU1:1;
            vuint32_t OU0:1;
        } B;
    } OUDR;

    union { /* Disable Channel (Base+0x000F) */
        vuint32_t R;
        struct {
            vuint32_t CHDIS31:1;
            vuint32_t CHDIS30:1;
            vuint32_t CHDIS29:1;
            vuint32_t CHDIS28:1;
            vuint32_t CHDIS27:1;
            vuint32_t CHDIS26:1;
            vuint32_t CHDIS25:1;
            vuint32_t CHDIS24:1;
            vuint32_t CHDIS23:1;
            vuint32_t CHDIS22:1;
            vuint32_t CHDIS21:1;
            vuint32_t CHDIS20:1;
            vuint32_t CHDIS19:1;
            vuint32_t CHDIS18:1;
            vuint32_t CHDIS17:1;
            vuint32_t CHDIS16:1;
            vuint32_t CHDIS15:1;
            vuint32_t CHDIS14:1;
            vuint32_t CHDIS13:1;
            vuint32_t CHDIS12:1;
            vuint32_t CHDIS11:1;
            vuint32_t CHDIS10:1;
            vuint32_t CHDIS9:1;
            vuint32_t CHDIS8:1;
            vuint32_t CHDIS7:1;
            vuint32_t CHDIS6:1;
            vuint32_t CHDIS5:1;
            vuint32_t CHDIS4:1;
            vuint32_t CHDIS3:1;
            vuint32_t CHDIS2:1;
            vuint32_t CHDIS1:1;
            vuint32_t CHDIS0:1;
        } B;
    } UCDIS;

    vuint8_t EMIOS_reserved0[16]; /* Reserved 16 Bytes (Base+0x0010-0x001F) */

    struct EMIOS_CHANNEL_tag CH[32]; /* Add in 32 unified channels */

    vuint8_t EMIOS_reserved1[3040]; /* 3040 bytes (Base+0x0420-0x0FFF) */

}; /* end of EMIOS_tag */

/****************************************************************************/
/*                          MODULE : PIT  (base address - 0xC3FF_FFFF)      */
/****************************************************************************/
  struct PIT_tag {

    union { /* PIT Module Control (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t:30;
            vuint32_t MDIS:1;
            vuint32_t FRZ:1;
        } B;
    } PITMCR;

    vuint8_t PIT_reserved0[252]; /* Reserved 252 Bytes (Base+0x0004-0x00FF) */

    /* PIT Timer Channels 0..7 (Base+0x0100-0x017C) */
    struct {

        union { /* PIT Timer Load Value (Offset+0x0000) */
            vuint32_t R;
            struct {
                vuint32_t TSV:32;
            } B;
        } LDVAL;

        union { /* PIT Current Timer Value (Offset+0x0004) */
            vuint32_t R;
            struct {
                vuint32_t TVL:32;
            } B;
        } CVAL;

        union { /* PIT Timer Control (Offset+0x0008) */
            vuint32_t R;
            struct {
                vuint32_t :30;
                vuint32_t TIE:1;
                vuint32_t TEN:1;
            } B;
        } TCTRL;

        union { /* PIT Timer Control (Offset+0x0008) */
            vuint32_t R;
            struct {
                vuint32_t :31;
                vuint32_t TIF:1;
            } B;
        } TFLG;

    }CH[8]; /* End of PIT Timer Channels */

}; /* end of PIT_tag */
/****************************************************************************/
/*                          MODULE : I2C (base address - 0xFFE3_0000)       */
/****************************************************************************/
struct I2C_tag{

    union { /* I2C Bus Address (Base+0x0000) */
        vuint8_t R;
        struct {
            vuint8_t ADR:7;
            vuint8_t :1;
        } B;
    } IBAD;

    union { /* I2C Bus Frequency Divider (Base+0x0001) */
        vuint8_t R;
        struct {
            vuint8_t IBC:8;
        } B;
    } IBFD;

    union { /* I2C Bus Control (Base+0x0002) */
        vuint8_t R;
        struct {
            vuint8_t MDIS:1;
            vuint8_t IBIE:1;
            vuint8_t MS:1; /*different from RM for backward compatiblity MSSL in RM*/  
            vuint8_t TX:1;
            vuint8_t NOACK:1;
            vuint8_t RSTA:1;
            vuint8_t DMAEN:1;
            vuint8_t :1;
        } B;
    } IBCR;

    union { /* I2C Bus Status (Base+0x0003) */
        vuint8_t R;
        struct {
            vuint8_t TCF:1;
            vuint8_t IAAS:1;
            vuint8_t IBB:1;
            vuint8_t IBAL:1;
            vuint8_t :1;
            vuint8_t SRW:1;
            vuint8_t IBIF:1;
            vuint8_t RXAK:1;
        } B;
    } IBSR;

    union { /* I2C Bus Data I/O (Base+0x0004) */
        vuint8_t R;
        struct {
            vuint8_t DATA:8;
        } B;
    } IBDR;

    union { /* I2C Interrupt Configuration (Base+0x0005) */
        vuint8_t R;
        struct {
            vuint8_t BIIE:1;
            vuint8_t :7;
        } B;
    } IBIC;

    vuint8_t I2C_reserved0[16378]; /* Reserved 16378 (Base+0x0006-0x3FFF) */

}; /* end of i2c_tag */
/****************************************************************************/
/*                          MODULE : MPU (base address - 0xFFF1_0000)       */
/****************************************************************************/
 struct MPU_tag {

    union { /* Control/Error Status (Base+0x0000) */
        vuint32_t R;
        struct {
			vuint32_t :5;
			vuint32_t SPERR:3;
			vuint32_t:4;
			vuint32_t HRL:4;
			vuint32_t NSP:4;
			vuint32_t NGRD:4;
			vuint32_t :7;
			vuint32_t VLD:1;
        } B;
    } CESR;

    vuint8_t MPU_reserved0[12]; /* Reserved 12 Bytes (Base+0x0004-0x000F) */


   union { /* Error Address Slave Port0 (Base+0x0010) */
        vuint32_t R;
        struct {
            vuint32_t EADDR:32;
        } B;
    } EAR0;

    union { /* Error Detail Slave Port0 (Base+0x0014) */
        vuint32_t R;
        struct {
            vuint32_t :8;
			vuint32_t EACD:8;
            vuint32_t EPID:8;
            vuint32_t EMN:4;
            vuint32_t EATTR:3;
            vuint32_t ERW:1;
        } B;
    } EDR0;


    union { /* Error Address Slave Port1 (Base+0x0018) */
        vuint32_t R;
        struct {
            vuint32_t EADDR:32;
        } B;
    } EAR1;

    union { /* Error Detail Slave Port1 (Base+0x001C) */
        vuint32_t R;
        struct {
            vuint32_t :8;
			vuint32_t EACD:8;
            vuint32_t EPID:8;
            vuint32_t EMN:4;
            vuint32_t EATTR:3;
            vuint32_t ERW:1;
        } B;
    } EDR1;


    union { /* Error Address Slave Port2 (Base+0x0020) */
        vuint32_t R;
        struct {
            vuint32_t EADDR:32;
        } B;
    } EAR2;

    union { /* Error Detail Slave Port2 (Base+0x0024) */
        vuint32_t R;
        struct {
            vuint32_t :8;
			vuint32_t EACD:8;
            vuint32_t EPID:8;
            vuint32_t EMN:4;
            vuint32_t EATTR:3;
            vuint32_t ERW:1;
        } B;
    } EDR2;

    vuint8_t MPU_reserved1[984]; /* Reserved 984 Bytes (Base+0x0028-0x03FF) */

    struct { /* Region Descriptor 0..15 (Base+0x0400-0x0470) */

        union { /* - Word 0 */
            vuint32_t R;
            struct {
                vuint32_t SRTADDR:27;
                vuint32_t :5;
            } B;
        } WORD0;

        union { /* - Word 1 */
            vuint32_t R;
            struct {
                vuint32_t ENDADDR:27;
                vuint32_t :5;
            } B;
        } WORD1;

       union { /* - Word 2 */
            vuint32_t R;
            struct {
                vuint32_t M7RE:1;
                vuint32_t M7WE:1;
                vuint32_t M6RE:1;
                vuint32_t M6WE:1;
                vuint32_t M5RE:1;
                vuint32_t M5WE:1;
                vuint32_t M4RE:1;
                vuint32_t M4WE:1;
                vuint32_t M3PE:1;
                vuint32_t M3SM:2;
                vuint32_t M3UM:3;
                vuint32_t M2PE:1;
                vuint32_t M2SM:2;
                vuint32_t M2UM:2;
				vuint32_t :7;     
                vuint32_t M0PE:1;
                vuint32_t M0SM:2;
                vuint32_t M0UM:3;
            } B;
        } WORD2;

        union { /* - Word 3 */
            vuint32_t R;
            struct {
                vuint32_t PID:8;
                vuint32_t PIDMASK:8;
                vuint32_t :15;
                vuint32_t VLD:1;
            } B;
        } WORD3;

    }RGD[8]; /* End of Region Descriptor Structure) */

    vuint8_t MPU_reserved2[896]; /* Reserved 896 Bytes (Base+0x0480-0x07FF) */

    union { /* Region Descriptor Alt 0..15 (0x0800-0x081C) */
        vuint32_t R;
        struct {
			vuint32_t M7RE:1;
			vuint32_t M7WE:1;
			vuint32_t M6RE:1;
			vuint32_t M6WE:1;
			vuint32_t M5RE:1;
			vuint32_t M5WE:1;
			vuint32_t M4RE:1;
			vuint32_t M4WE:1;
			vuint32_t M3PE:1;
			vuint32_t M3SM:2;
			vuint32_t M3UM:3;
			vuint32_t M2PE:1;
			vuint32_t M2SM:2;
			vuint32_t M2UM:2;
			vuint32_t :7;     
			vuint32_t M0PE:1;
			vuint32_t M0SM:2;
			vuint32_t M0UM:3;
        } B;
    } RGDAAC[8];

    vuint8_t MPU_reserved3[14304]; /* Reserved 14304 Bytes (+0x0820-0x03FFF) */

}; /* end of MPU_tag */
/****************************************************************************/
/*                          MODULE : eDMA (base address - 0xFFF4_4000)      */
/****************************************************************************/

    /*for "standard" format TCD (when EDMA.TCD[x].CITERE_LINK==BITERE_LINK=0) */
    struct EDMA_TCD_STD_tag {

        vuint32_t SADDR; /* source address */

        vuint16_t SMOD:5; /* source address modulo */
        vuint16_t SSIZE:3; /* source transfer size */
        vuint16_t DMOD:5; /* destination address modulo */
        vuint16_t DSIZE:3; /* destination transfer size */
        vint16_t SOFF; /* signed source address offset */

        vuint32_t NBYTES; /* inner (?minor?) byte count */

        vint32_t SLAST; /* last destination address adjustment, or scatter/gather address (if e_sg = 1) */
        vuint32_t DADDR; /* destination address */

        vuint16_t CITERE_LINK:1;
        vuint16_t CITER:15;

        vint16_t DOFF; /* signed destination address offset */

        vint32_t DLAST_SGA;

        vuint16_t BITERE_LINK:1; /* beginning ("major") iteration count */
        vuint16_t BITER:15;

        vuint16_t BWC:2; /* bandwidth control */
        vuint16_t MAJORLINKCH:6; /* enable channel-to-channel link */
        vuint16_t DONE:1; /* channel done */
        vuint16_t ACTIVE:1; /* channel active */
        vuint16_t MAJORE_LINK:1; /* enable channel-to-channel link */
        vuint16_t E_SG:1; /* enable scatter/gather descriptor */
        vuint16_t D_REQ:1; /* disable ipd_req when done */
        vuint16_t INT_HALF:1; /* interrupt on citer = (biter >> 1) */
        vuint16_t INT_MAJ:1; /* interrupt on major loop completion */
        vuint16_t START:1; /* explicit channel start */

    }; /* end of EDMA_TCD_STD_tag */

    /*for "channel link" format TCD (when EDMA.TCD[x].CITERE_LINK==BITERE_LINK=1)*/
    struct EDMA_TCD_CHLINK_tag {

        vuint32_t SADDR; /* source address */

        vuint16_t SMOD:5; /* source address modulo */
        vuint16_t SSIZE:3; /* source transfer size */
        vuint16_t DMOD:5; /* destination address modulo */
        vuint16_t DSIZE:3; /* destination transfer size */
        vint16_t SOFF; /* signed source address offset */

        vuint32_t NBYTES; /* inner (?minor?) byte count */

        vint32_t SLAST; /* last destination address adjustment, or

                                   scatter/gather address (if e_sg = 1) */
        vuint32_t DADDR; /* destination address */

        vuint16_t CITERE_LINK:1;
        vuint16_t CITERLINKCH:6;
        vuint16_t CITER:9;

        vint16_t DOFF; /* signed destination address offset */

        vint32_t DLAST_SGA;

        vuint16_t BITERE_LINK:1; /* beginning (?major?) iteration count */
        vuint16_t BITERLINKCH:6;
        vuint16_t BITER:9;

        vuint16_t BWC:2; /* bandwidth control */
        vuint16_t MAJORLINKCH:6; /* enable channel-to-channel link */
        vuint16_t DONE:1; /* channel done */
        vuint16_t ACTIVE:1; /* channel active */
        vuint16_t MAJORE_LINK:1; /* enable channel-to-channel link */
        vuint16_t E_SG:1; /* enable scatter/gather descriptor */
        vuint16_t D_REQ:1; /* disable ipd_req when done */
        vuint16_t INT_HALF:1; /* interrupt on citer = (biter >> 1) */
        vuint16_t INT_MAJ:1; /* interrupt on major loop completion */
        vuint16_t START:1; /* explicit channel start */

    }; /* end of EDMA_TCD_CHLINK_tag */



struct EDMA_tag {

    union { /* Control (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t :14;
            vuint32_t CX:1;
            vuint32_t ECX:1;
            vuint32_t :6; 
            vuint32_t GRP0PRI:2;
            vuint32_t EMLM:1;
            vuint32_t CLM:1;
            vuint32_t HALT:1;
            vuint32_t HOE:1;
            vuint32_t ERGA:1;
            vuint32_t ERCA:1;
            vuint32_t EDBG:1;
            vuint32_t EBW:1;
        } B;
    } CR;

    union { /* Error Status (Base+0x0004) */
        vuint32_t R;
        struct {
            vuint32_t VLD:1;
            vuint32_t :16;
            vuint32_t CPE:1;
            vuint32_t ERRCHN:6;
            vuint32_t SAE:1;
            vuint32_t SOE:1;
            vuint32_t DAE:1;
            vuint32_t DOE:1;
            vuint32_t NCE:1;
            vuint32_t SGE:1;
            vuint32_t SBE:1;
            vuint32_t DBE:1;
        } B;
    } ESR;

    vuint8_t eDMA_reserved0[4]; /* Reserved 4 bytes (Base+0x0008-0x000B)*/

    union { /* Enable Request Low Ch15..0 (Base+0x000C) */
        vuint32_t R;
        struct {
            vuint32_t :16;
			vuint32_t ERQ15:1;
            vuint32_t ERQ14:1;
            vuint32_t ERQ13:1;
            vuint32_t ERQ12:1;
            vuint32_t ERQ11:1;
            vuint32_t ERQ10:1;
            vuint32_t ERQ09:1;
            vuint32_t ERQ08:1;
            vuint32_t ERQ07:1;
            vuint32_t ERQ06:1;
            vuint32_t ERQ05:1;
            vuint32_t ERQ04:1;
            vuint32_t ERQ03:1;
            vuint32_t ERQ02:1;
            vuint32_t ERQ01:1;
            vuint32_t ERQ00:1;
        } B;
    } ERQRL;

    vuint8_t eDMA_reserved1[4]; /* Reserved 4 bytes (Base+0x0010-0x0013)*/

    union { /* Enable Error Interrupt Low (Base+0x0014) */
        vuint32_t R;
        struct {
            vuint32_t :16;
			vuint32_t EEI15:1;
            vuint32_t EEI14:1;
            vuint32_t EEI13:1;
            vuint32_t EEI12:1;
            vuint32_t EEI11:1;
            vuint32_t EEI10:1;
            vuint32_t EEI09:1;
            vuint32_t EEI08:1;
            vuint32_t EEI07:1;
            vuint32_t EEI06:1;
            vuint32_t EEI05:1;
            vuint32_t EEI04:1;
            vuint32_t EEI03:1;
            vuint32_t EEI02:1;
            vuint32_t EEI01:1;
            vuint32_t EEI00:1;
        } B;
    } EEIRL;

    union { /* DMA Set Enable Request (Base+0x0018) */
        vuint8_t R;
        struct {
            vuint8_t :1;
            vuint8_t SERQ:7;
        } B;
    } SERQR;

    union { /* DMA Clear Enable Request (Base+0x0019) */
        vuint8_t R;
        struct {
            vuint8_t :1;
            vuint8_t CERQ:7;
        } B;
    } CERQR;

    union { /* DMA Set Enable Error Interrupt (Base+0x001A) */
        vuint8_t R;
        struct {
            vuint8_t :1;
            vuint8_t SEEI:7;
        } B;
    } SEEIR;

    union { /* DMA Clr Enable Error Interrupt (Base+0x001B) */
        vuint8_t R;
        struct {
            vuint8_t:1;
            vuint8_t CEEI:7;
        } B;
    } CEEIR;

    union { /* DMA Clear Interrupt Request (Base+0x001C) */
        vuint8_t R;
        struct {
            vuint8_t :1;
            vuint8_t CINT:7;
        } B;
    } CIRQR;

    union { /* DMA Clear error (Base+0x001D) */
        vuint8_t R;
        struct {
            vuint8_t :1;
            vuint8_t CERR:7;
        } B;
    } CER;

    union { /* DMA Set Start Bit (Base+0x001E) */
        vuint8_t R;
        struct {
            vuint8_t NOP:1;
            vuint8_t SSB:7;
        } B;
    } SSBR;

    union { /* DMA Clear Done Status Bit (Base+0x001F) */
        vuint8_t R;
        struct {
            vuint8_t :1;
            vuint8_t CDSB:7;
        } B;
    } CDSBR;

    vuint8_t eDMA_reserved2[4]; /* Reserved 4 bytes (Base+0x0020-0x0023)*/

    union { /* DMA Interrupt Req Low Ch15..0 (+0x0024) */
        vuint32_t R;
        struct {
            vuint32_t :16;
			vuint32_t INT15:1;
            vuint32_t INT14:1;
            vuint32_t INT13:1;
            vuint32_t INT12:1;
            vuint32_t INT11:1;
            vuint32_t INT10:1;
            vuint32_t INT09:1;
            vuint32_t INT08:1;
            vuint32_t INT07:1;
            vuint32_t INT06:1;
            vuint32_t INT05:1;
            vuint32_t INT04:1;
            vuint32_t INT03:1;
            vuint32_t INT02:1;
            vuint32_t INT01:1;
            vuint32_t INT00:1;
        } B;
    } IRQRL;

    vuint8_t eDMA_reserved3[4]; /* Reserved 4 bytes (Base+0x0028-0x002B)*/

    union { /* DMA Error Low Ch15..0 (Base+0x002C)*/
        vuint32_t R;
        struct {
            vuint32_t :16;
			vuint32_t ERR15:1;
            vuint32_t ERR14:1;
            vuint32_t ERR13:1;
            vuint32_t ERR12:1;
            vuint32_t ERR11:1;
            vuint32_t ERR10:1;
            vuint32_t ERR09:1;
            vuint32_t ERR08:1;
            vuint32_t ERR07:1;
            vuint32_t ERR06:1;
            vuint32_t ERR05:1;
            vuint32_t ERR04:1;
            vuint32_t ERR03:1;
            vuint32_t ERR02:1;
            vuint32_t ERR01:1;
            vuint32_t ERR00:1;
        } B;
    } ERL;

    vuint8_t eDMA_reserved4[4]; /* Reserved 4 bytes (Base+0x0030-0x0033)*/

    union { /* DMA Hardware Request Stat Low (Base+0x0034) */
        vuint32_t R;
        struct {
            vuint32_t :16;
			vuint32_t HRS15:1;
            vuint32_t HRS14:1;
            vuint32_t HRS13:1;
            vuint32_t HRS12:1;
            vuint32_t HRS11:1;
            vuint32_t HRS10:1;
            vuint32_t HRS09:1;
            vuint32_t HRS08:1;
            vuint32_t HRS07:1;
            vuint32_t HRS06:1;
            vuint32_t HRS05:1;
            vuint32_t HRS04:1;
            vuint32_t HRS03:1;
            vuint32_t HRS02:1;
            vuint32_t HRS01:1;
            vuint32_t HRS00:1;
        } B;
    } HRSL;

    vuint8_t eDMA_reserved5[200]; /* Reserved 200 bytes (Base+0x0038-0x00FF)*/

    union { /* Channel n Priority (Base+0x0100-0x010F)*/
        vuint8_t R;
        struct {
            vuint8_t ECP:1;
            vuint8_t DPA:1;
            vuint8_t GRPPRI:2;
            vuint8_t CHPRI:4;
        } B;
    } CPR[16];

	vuint8_t eDMA_reserved6[3824]; /* Reserved 3808 bytes (+0x0110-0x0FFF) */

    /* Transfer Control Descriptors 0..16 (Base+0x1000-0x11E0) */
    struct EDMA_TCD_STD_tag TCD[16];
    
    /* or change to following if using channel linking */
    /* Struct EDMA_TCD_CHLINK_tag TCD[16]; */
	
	vuint8_t eDMA_reserved7[28160]; /* Reserved 28160 bytes (+0x1200-0x7FFF) */

}; /* end of EDMA_tag */
/*************************************************************************/
/*             MODULE : INTC (base address - 0xFFF4_8000)     			 */
/*************************************************************************/
struct INTC_tag {

    union { /* INTC Module Configuration (Base+0x0000) */
        vuint32_t R;
        struct {
			vuint32_t:26;
			vuint32_t VTES:1;
			vuint32_t:4;
			vuint32_t HVEN:1;
        } B;
    } MCR;

    vuint8_t INTC_reserved0[4]; /* reserved 4 bytes (Base+0x0004-0x0007) */

    union { /* INTC Current Priority (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t:28;
            vuint32_t PRI:4;
        } B;
    } CPR;
	
	vuint8_t INTC_reserved1[4]; /* reserved 4 bytes (Base+0x000C-0x000F) */

    union { /* INTC Interrupt Acknowledge (Base+0x0010) */
        vuint32_t R;
        struct {
            vuint32_t VTBA_PRC0:21;
            vuint32_t INTVEC_PRC0:9;
            vuint32_t:2;
        } B;
    } IACKR;

	vuint8_t INTC_reserved2[4]; /* Reserved 4 bytes (Base+0x0014-0x0017) */
	
    union { /* INTC End Of Interrupt (Base+0x0018) */
        vuint32_t R;
        struct {
            vuint32_t:32;
        } B;
    } EOIR;

	vuint8_t INTC_reserved3[4]; /* reserved 4 bytes (Base+0x001C-0x0019) */
	
    union { /* INTC Software Set/Clear Interrupt0-7 (+0x0020-0x0027) */
        vuint8_t R;
        struct {
            vuint8_t:6;
            vuint8_t SET:1;
            vuint8_t CLR:1;
        } B;
    } SSCIR[8];

    vuint8_t INTC_reserved4[24]; /* Reserved 24 bytes (Base+0x0028-0x003F) */

    union { /* INTC Priority Select (Base+0x0040-0x0128) */
            vuint8_t R;
            struct {
                vuint8_t:4;
                vuint8_t PRI:4;
            } B;
        } PSR[234]; 

}; /* end of INTC_tag */
/****************************************************************************/
/*                          MODULE : DSPI    								*/
/* Base Addresses: 															*/
/* DSPI_0 - 0xFFF9_0000                               						*/
/* DSPI_1 - 0xFFF9_4000                               						*/
/* DSPI_2 - 0xFFF9_8000                               						*/
/* DSPI_3 - 0xFFF9_C000                               						*/
/* DSPI_4 - 0xFFFA_0000                               						*/
/* DSPI_5 - 0xFFFA_4000                               						*/
/****************************************************************************/
struct DSPI_tag{

    union { /* DSPI Module Configuraiton (Base+0x0000) */
        vuint32_t R;
        struct {
            vuint32_t MSTR:1;
            vuint32_t CONT_SCKE:1;
            vuint32_t DCONF:2;
            vuint32_t FRZ:1;
            vuint32_t MTFE:1;
            vuint32_t PCSSE:1;
            vuint32_t ROOE:1;
            vuint32_t :2; 
            vuint32_t PCSIS5:1;
            vuint32_t PCSIS4:1;
            vuint32_t PCSIS3:1;
            vuint32_t PCSIS2:1;
            vuint32_t PCSIS1:1;
            vuint32_t PCSIS0:1;
            vuint32_t DOZE:1; 
            vuint32_t MDIS:1;
            vuint32_t DIS_TXF:1;
            vuint32_t DIS_RXF:1;
            vuint32_t CLR_TXF:1;
            vuint32_t CLR_RXF:1;
            vuint32_t SMPL_PT:2;
            vuint32_t :7;
            vuint32_t HALT:1;
        } B;
    } MCR;

	vuint8_t DSPI_reserved0[4]; /* Reserved 4 bytes (Base+0x0004-0x0007) */

    union { /* DSPI Transfer Count (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t TCNT:16;
            vuint32_t :16;
        } B;
    } TCR;

    union { /* DSPI Clock & Tranfer Attrib 0-5 (+0x000C-0x0020) */
        vuint32_t R;
        struct {
            vuint32_t DBR:1;
            vuint32_t FMSZ:4;
            vuint32_t CPOL:1;
            vuint32_t CPHA:1;
            vuint32_t LSBFE:1;
            vuint32_t PCSSCK:2;
            vuint32_t PASC:2;
            vuint32_t PDT:2;
            vuint32_t PBR:2;
            vuint32_t CSSCK:4;
            vuint32_t ASC:4;
            vuint32_t DT:4;
            vuint32_t BR:4;
        } B;
    } CTAR[6];

    vuint8_t DSPI_reserved1[8]; /* Reserved 4 bytes (Base+0x0024-0x002B) */

    union { /* DSPI Status (Base+0x002C) */
        vuint32_t R;
        struct {
            vuint32_t TCF:1;
            vuint32_t TXRXS:1;
            vuint32_t :1;
            vuint32_t EOQF:1;
            vuint32_t TFUF:1;
            vuint32_t :1;
            vuint32_t TFFF:1;
            vuint32_t :5;
            vuint32_t RFOF:1;
            vuint32_t :1;
            vuint32_t RFDF:1;
            vuint32_t :1;
            vuint32_t TXCTR:4;
            vuint32_t TXNXTPTR:4;
            vuint32_t RXCTR:4;
            vuint32_t POPNXTPTR:4;
        } B;
    } SR;

    union { /* DSPI DMA/Int Request Select & Enable (+0x0030) */
        vuint32_t R;
        struct {
            vuint32_t TCFRE:1;
            vuint32_t :2;
            vuint32_t EOQFRE:1;
            vuint32_t TFUFRE:1;
            vuint32_t :1;
            vuint32_t TFFFRE:1;
            vuint32_t TFFFDIRS:1;
            vuint32_t :4;
            vuint32_t RFOFRE:1;
            vuint32_t :1;
            vuint32_t RFDFRE:1;
            vuint32_t RFDFDIRS:1;
            vuint32_t :16;
        } B;
    } RSER;

    union { /* DSPI Push TX FIFO (Base+0x0034) */
        vuint32_t R;
        struct {
            vuint32_t CONT:1;
            vuint32_t CTAS:3;
            vuint32_t EOQ:1;
            vuint32_t CTCNT:1;
            vuint32_t :4; 
            vuint32_t PCS5:1;
            vuint32_t PCS4:1;
            vuint32_t PCS3:1;
            vuint32_t PCS2:1;
            vuint32_t PCS1:1;
            vuint32_t PCS0:1;
            vuint32_t TXDATA:16;
        } B;
    } PUSHR;

    union { /* DSPI Pop RX FIFO (Base+0x0038)             */
        vuint32_t R;
        struct {
            vuint32_t :16; 
			vuint32_t RXDATA:16; 
        } B;
    } POPR;

    union { /* DSPI Transmit FIFO 0-3 (Base+0x003C-0x0048)*/
        vuint32_t R;
        struct { 
            vuint32_t TXCMD:16; 
            vuint32_t TXDATA:16;
        } B;
    } TXFR[4];

    vuint8_t DSPI_reserved2[48]; /* Reserved 48 bytes (Base+0x004C-0x007B) */

    union { /* DSPI Receive FIFO 0-3 (Base+0x007C-0x0088) */
        vuint32_t R;
        struct {
            vuint32_t :16; 
			vuint32_t RXDATA:16; 
        } B;
    } RXFR[4];
 };                          /* end of DSPI_tag */
 /****************************************************************************/
/*                          MODULE : FlexCAN                                */
/* Base Addresses:															*/
/* FlexCAN_0 - 0xFFFC_0000													*/
/* FlexCAN_1 - 0xFFFC_4000													*/
/* FlexCAN_2 - 0xFFFC_8000													*/
/* FlexCAN_3 - 0xFFFC_C000													*/
/* FlexCAN_4 - 0xFFFD_0000													*/
/* FlexCAN_5 - 0xFFFD_4000													*/
/****************************************************************************/
struct FLEXCAN_BUF_t{

    union { /* FLEXCAN MBx Control & Status (Offset+0x0080) */
        vuint32_t R;
        struct {
            vuint32_t :4;
            vuint32_t CODE:4;
            vuint32_t :1;
            vuint32_t SRR:1;
            vuint32_t IDE:1;
            vuint32_t RTR:1;
            vuint32_t LENGTH:4;
            vuint32_t TIMESTAMP:16;
        } B;
    } CS;

    union { /* FLEXCAN MBx Identifier (Offset+0x0084) */
        vuint32_t R;
        struct {
            vuint32_t PRIO:3;
            vuint32_t STD_ID:11;
            vuint32_t EXT_ID:18;
        } B;
    } ID;

    union { /* FLEXCAN MBx Data 0..7 (Offset+0x0088) */
        vuint8_t B[8]; /* Data buffer in Bytes (8 bits) */
        vuint16_t H[4]; /* Data buffer in Half-words (16 bits) */
        vuint32_t W[2]; /* Data buffer in words (32 bits) */
        vuint32_t R[2]; /* Data buffer in words (32 bits) */
    } DATA;

}; /* end of FLEXCAN_BUF_t */


struct FLEXCAN_RXFIFO_t{ /* RxFIFO Configuration */

    union { /* RxFIFO Control & Status (Offset+0x0080) */
        vuint32_t R;
        struct {
            vuint32_t :9;
            vuint32_t SRR:1;
            vuint32_t IDE:1;
            vuint32_t RTR:1;
            vuint32_t LENGTH:4;
            vuint32_t TIMESTAMP:16;
        } B;
    } CS;

    union { /* RxFIFO Identifier (Offset+0x0084) */
        vuint32_t R;
        struct {
            vuint32_t :3;
            vuint32_t STD_ID:11;
            vuint32_t EXT_ID:18;
        } B;
    } ID;

    union { /* RxFIFO Data 0..7 (Offset+0x0088) */
        vuint8_t B[8]; /* Data buffer in Bytes (8 bits) */
        vuint16_t H[4]; /* Data buffer in Half-words (16 bits) */
        vuint32_t W[2]; /* Data buffer in words (32 bits) */
        vuint32_t R[2]; /* Data buffer in words (32 bits) */
    } DATA;

    vuint8_t FLEXCAN_RX_reserved0[80]; /* Reserved 80 bytes (+0x0090-0x00DF)*/

    union { /* RxFIFO ID Table 0..7 (+0x00E0-0x00FC) */
        vuint32_t R;
    } IDTABLE[8];

}; /* end of FLEXCAN_RXFIFO_t */


struct FLEXCAN_tag{

    union { /* FLEXCAN Module Configuration (Base+0x0000) */
        vuint32_t R;
        struct {
			vuint32_t MDIS:1;
			vuint32_t FRZ:1;
			vuint32_t FEN:1;
			vuint32_t HALT:1;
			vuint32_t NOTRDY:1;
			vuint32_t WAKMSK:1;
			vuint32_t SOFTRST:1;
			vuint32_t FRZACK:1;
			vuint32_t SUPV:1;
			vuint32_t SLFWAK:1;  /*not present in RM*/
			vuint32_t WRNEN:1;
			vuint32_t LPMACK:1;
			vuint32_t WAKSRC:1;
			vuint32_t DOZE:1; 	/*not present in RM*/
			vuint32_t SRXDIS:1;
			vuint32_t BCC:1;
			vuint32_t:2;
			vuint32_t LPRIO_EN:1;
			vuint32_t AEN:1;
			vuint32_t:2;
			vuint32_t IDAM:2;
			vuint32_t:2;
			vuint32_t MAXMB:6;
        } B;
    } MCR;

    union { /* FLEXCAN Control (Base+0x0004) */
        vuint32_t R;
        struct {
            vuint32_t PRESDIV:8;
            vuint32_t RJW:2;
            vuint32_t PSEG1:3;
            vuint32_t PSEG2:3;
            vuint32_t BOFFMSK:1;
            vuint32_t ERRMSK:1;
            vuint32_t CLKSRC:1;
            vuint32_t LPB:1;
            vuint32_t TWRNMSK:1;
            vuint32_t RWRNMSK:1;
            vuint32_t :2;
            vuint32_t SMP:1;
            vuint32_t BOFFREC:1;
            vuint32_t TSYN:1;
            vuint32_t LBUF:1;
            vuint32_t LOM:1;
            vuint32_t PROPSEG:3;
        } B;
    } CR;

    union { /* FLEXCAN Free Running Timer (Base+0x0008) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t TIMER:16;
        } B;
     } TIMER;

    vuint8_t FLEXCAN_reserved0[4]; /* reserved 4 bytes (Base+0x000C-0x000F) */

    union { /* FLEXCAN RX Global Mask (Base+0x0010) */
        vuint32_t R;
        struct {
            vuint32_t MI:32;
        } B;
     } RXGMASK;

    /*  --- Following 2 registers are included for legacy purposes only --- */

    union { /* FLEXCAN RX 14 Mask (Base+0x0014) */
        vuint32_t R;
        struct {
            vuint32_t MI:32;
        } B;
     } RX14MASK;

    union { /* FLEXCAN RX 15 Mask (Base+0x0018) */
        vuint32_t R;
        struct {
            vuint32_t MI:32;
        } B;
     } RX15MASK;

    /*  --- */

    union { /* FLEXCAN Error Counter (Base+0x001C) */
        vuint32_t R;
        struct {
            vuint32_t :16;
            vuint32_t RXECNT:8;
            vuint32_t TXECNT:8;
        } B;
    } ECR;

    union { /* FLEXCAN Error & Status (Base+0x0020) */
        vuint32_t R;
        struct {
            vuint32_t :14;
            vuint32_t TWRNINT:1;
            vuint32_t RWRNINT:1;
            vuint32_t BIT1ERR:1;
            vuint32_t BIT0ERR:1;
            vuint32_t ACKERR:1;
            vuint32_t CRCERR:1;
            vuint32_t FRMERR:1;
            vuint32_t STFERR:1;
            vuint32_t TXWRN:1;
            vuint32_t RXWRN:1;
            vuint32_t IDLE:1;
            vuint32_t TXRX:1;
            vuint32_t FLTCONF:2;
            vuint32_t :1;
            vuint32_t BOFFINT:1;
            vuint32_t ERRINT:1;
            vuint32_t :1;
        } B;
    } ESR;

    union { /* FLEXCAN Interruput Masks H (Base+0x0024) */
        vuint32_t R;
        struct {
            vuint32_t BUF63M:1;
            vuint32_t BUF62M:1;
            vuint32_t BUF61M:1;
            vuint32_t BUF60M:1;
            vuint32_t BUF59M:1;
            vuint32_t BUF58M:1;
            vuint32_t BUF57M:1;
            vuint32_t BUF56M:1;
            vuint32_t BUF55M:1;
            vuint32_t BUF54M:1;
            vuint32_t BUF53M:1;
            vuint32_t BUF52M:1;
            vuint32_t BUF51M:1;
            vuint32_t BUF50M:1;
            vuint32_t BUF49M:1;
            vuint32_t BUF48M:1;
            vuint32_t BUF47M:1;
            vuint32_t BUF46M:1;
            vuint32_t BUF45M:1;
            vuint32_t BUF44M:1;
            vuint32_t BUF43M:1;
            vuint32_t BUF42M:1;
            vuint32_t BUF41M:1;
            vuint32_t BUF40M:1;
            vuint32_t BUF39M:1;
            vuint32_t BUF38M:1;
            vuint32_t BUF37M:1;
            vuint32_t BUF36M:1;
            vuint32_t BUF35M:1;
            vuint32_t BUF34M:1;
            vuint32_t BUF33M:1;
            vuint32_t BUF32M:1;
        } B;
    } IMRH;

    union { /* FLEXCAN Interruput Masks L (Base+0x0028) */
        vuint32_t R;
        struct {
            vuint32_t BUF31M:1;
            vuint32_t BUF30M:1;
            vuint32_t BUF29M:1;
            vuint32_t BUF28M:1;
            vuint32_t BUF27M:1;
            vuint32_t BUF26M:1;
            vuint32_t BUF25M:1;
            vuint32_t BUF24M:1;
            vuint32_t BUF23M:1;
            vuint32_t BUF22M:1;
            vuint32_t BUF21M:1;
            vuint32_t BUF20M:1;
            vuint32_t BUF19M:1;
            vuint32_t BUF18M:1;
            vuint32_t BUF17M:1;
            vuint32_t BUF16M:1;
            vuint32_t BUF15M:1;
            vuint32_t BUF14M:1;
            vuint32_t BUF13M:1;
            vuint32_t BUF12M:1;
            vuint32_t BUF11M:1;
            vuint32_t BUF10M:1;
            vuint32_t BUF09M:1;
            vuint32_t BUF08M:1;
            vuint32_t BUF07M:1;
            vuint32_t BUF06M:1;
            vuint32_t BUF05M:1;
            vuint32_t BUF04M:1;
            vuint32_t BUF03M:1;
            vuint32_t BUF02M:1;
            vuint32_t BUF01M:1;
            vuint32_t BUF00M:1;
        } B;
    } IMRL;

    union { /* FLEXCAN Interruput Flag H (Base+0x002C) */
        vuint32_t R;
        struct {
            vuint32_t BUF63I:1;
            vuint32_t BUF62I:1;
            vuint32_t BUF61I:1;
            vuint32_t BUF60I:1;
            vuint32_t BUF59I:1;
            vuint32_t BUF58I:1;
            vuint32_t BUF57I:1;
            vuint32_t BUF56I:1;
            vuint32_t BUF55I:1;
            vuint32_t BUF54I:1;
            vuint32_t BUF53I:1;
            vuint32_t BUF52I:1;
            vuint32_t BUF51I:1;
            vuint32_t BUF50I:1;
            vuint32_t BUF49I:1;
            vuint32_t BUF48I:1;
            vuint32_t BUF47I:1;
            vuint32_t BUF46I:1;
            vuint32_t BUF45I:1;
            vuint32_t BUF44I:1;
            vuint32_t BUF43I:1;
            vuint32_t BUF42I:1;
            vuint32_t BUF41I:1;
            vuint32_t BUF40I:1;
            vuint32_t BUF39I:1;
            vuint32_t BUF38I:1;
            vuint32_t BUF37I:1;
            vuint32_t BUF36I:1;
            vuint32_t BUF35I:1;
            vuint32_t BUF34I:1;
            vuint32_t BUF33I:1;
            vuint32_t BUF32I:1;
        } B;
    } IFRH;

    union { /* FLEXCAN Interruput Flag l (Base+0x0030) */
        vuint32_t R;
        struct {
            vuint32_t BUF31I:1;
            vuint32_t BUF30I:1;
            vuint32_t BUF29I:1;
            vuint32_t BUF28I:1;
            vuint32_t BUF27I:1;
            vuint32_t BUF26I:1;
            vuint32_t BUF25I:1;
            vuint32_t BUF24I:1;
            vuint32_t BUF23I:1;
            vuint32_t BUF22I:1;
            vuint32_t BUF21I:1;
            vuint32_t BUF20I:1;
            vuint32_t BUF19I:1;
            vuint32_t BUF18I:1;
            vuint32_t BUF17I:1;
            vuint32_t BUF16I:1;
            vuint32_t BUF15I:1;
            vuint32_t BUF14I:1;
            vuint32_t BUF13I:1;
            vuint32_t BUF12I:1;
            vuint32_t BUF11I:1;
            vuint32_t BUF10I:1;
            vuint32_t BUF09I:1;
            vuint32_t BUF08I:1;
            vuint32_t BUF07I:1;
            vuint32_t BUF06I:1;
            vuint32_t BUF05I:1;
            vuint32_t BUF04I:1;
            vuint32_t BUF03I:1;
            vuint32_t BUF02I:1;
            vuint32_t BUF01I:1;
            vuint32_t BUF00I:1;
        } B;
    } IFRL; /* Interruput Flag Register */

    vuint8_t FLEXCAN_reserved1[76]; /*Reserved 76 bytes (Base+0x0034-0x007F)*/

/****************************************************************************/
/* Use either Standard Buffer Structure OR RX FIFO and Buffer Structure     */
/****************************************************************************/
    /* Standard Buffer Structure */
    struct FLEXCAN_BUF_t BUF[64];

    /* RX FIFO and Buffer Structure */
    /*struct FLEXCAN_RXFIFO_t RXFIFO; */
    /*struct FLEXCAN_BUF_t BUF[56];   */
/****************************************************************************/

    vuint8_t FLEXCAN_reserved2[1024]; /*Reserved 1024 (Base+0x0480-0x087F)*/

    union { /* FLEXCAN RX Individual Mask (Base+0x0880-0x097F) */
        vuint32_t R;
        struct {
          vuint32_t MI:32;
        } B;
    } RXIMR[64];

}; /* end of FLEXCAN_tag */
/****************************************************************************/
/*            MODULE : DMAMUX (base address - 0xFFFD_C000)                  */
/****************************************************************************/
    struct DMAMUX_tag {
    union { /* DMAMUX Channel Configuration (Base+0x0000-0x000F) */
        vuint8_t R;
        struct {
            vuint8_t ENBL:1;
            vuint8_t TRIG:1;
            vuint8_t SOURCE:6;
            } B;
        } CHCONFIG[16];         

    };                          /* end of DMAMUX_tag */
/****************************************************************************/
/*             MODULE : DFLASH (base address - 0x0080_0000)                 */
/****************************************************************************/
    struct DFLASH_tag {
        union {     /* Module Configuration (Base+0x0000) */
            vuint32_t R;
            struct {
                vuint32_t EDC:1;
                vuint32_t:4;
                vuint32_t SIZE:3;
                vuint32_t:1;
                vuint32_t LAS:3;
                vuint32_t:3;
                vuint32_t MAS:1;
                vuint32_t EER:1;
                vuint32_t RWE:1;
                vuint32_t:2;
                vuint32_t PEAS:1;
                vuint32_t DONE:1;
                vuint32_t PEG:1;
                vuint32_t:4;
                vuint32_t PGM:1;
                vuint32_t PSUS:1;
                vuint32_t ERS:1;
                vuint32_t ESUS:1;
                vuint32_t EHV:1;
            } B;
        } MCR;

        union {   	/* Low/Mid address block locking (Base+0x0004) */
            vuint32_t R;
            struct {
                vuint32_t LME:1;
                vuint32_t:10;
                vuint32_t TSLK:1;
                vuint32_t:2;
                vuint32_t MLK:2;
                vuint32_t LLK:16;
            } B;
        } LML;

        union {    /* High address block locking (Base+0x0008) */
            vuint32_t R;
            struct {
                vuint32_t HBE:1;
                vuint32_t :25;
                vuint32_t HBLOCK:6;
            } B;
        } HBL;

        union {   /* Secondary Low/mid block locking (Base+0x000C)*/
            vuint32_t R;
            struct {
                vuint32_t SLE:1;
                vuint32_t:10;
                vuint32_t STSLK:1;
                vuint32_t:2;
                vuint32_t SMK:2;
                vuint32_t SLK:16;
            } B;
        } SLL;

        union {   /* Low/Mid address space block sel (Base+0x0010)*/
            vuint32_t R;
            struct {
                vuint32_t:14;
                vuint32_t MSL:2;
                vuint32_t LSL:16;
            } B;
        } LMS;

        union {   /* High address space block sel (Base+0x0014)*/
            vuint32_t R;
            struct {
                vuint32_t:26;
                vuint32_t HSL:6;
            } B;
        } HBS;

        union {    /* Address Register (Base+0x0018) */
            vuint32_t R;
            struct {
                vuint32_t:9;
                vuint32_t ADD:20;
                vuint32_t:3;
            } B;
        } ADR;

		vuint8_t DFLASH_reserved0[32]; /* Reserved 32 Bytes (+0x001C-0x003B) */

        union {        /* User Test 0 (Base+0x003C) */
            vuint32_t R;
            struct {
                vuint32_t UTE:1;
				vuint32_t:7;
                vuint32_t DSI:8;
				vuint32_t:10;
                vuint32_t MRE:1;
                vuint32_t MRV:1;
                vuint32_t EIE:1;
                vuint32_t AIS:1;
                vuint32_t AIE:1;
                vuint32_t AID:1;
            } B;
        } UT0;

        union {    /* User Test 1 (Base+0x0040) */
            vuint32_t R;
            struct {
                vuint32_t DAI:32;
            } B;
        } UT1;

        union {    /* User Test 2 (Base+0x0044) */
            vuint32_t R;
            struct {
                vuint32_t DAI:32;
            } B;
        } UT2;

        union {  /* User Multiple Input sig 0..1 (+0x0048-0x004F)*/
            vuint32_t R;
            struct {
                vuint32_t MS:32;
            } B;
        } UMISR[5];

    }; /* end of Dflash_tag */
/****************************************************************************/
/*                     MODULE : CFLASH (base address - 0xC3F8_8000)         */
/****************************************************************************/
    struct CFLASH_tag {
        union {     /* Module Configuration (Base+0x0000) */
            vuint32_t R;
            struct {
                vuint32_t EDC:1;
                vuint32_t:4;
                vuint32_t SIZE:3;
                vuint32_t:1;
                vuint32_t LAS:3;
                vuint32_t:3;
                vuint32_t MAS:1;
                vuint32_t EER:1;
                vuint32_t RWE:1;
                vuint32_t:1;
                vuint32_t:1;
                vuint32_t PEAS:1;
                vuint32_t DONE:1;
                vuint32_t PEG:1;
                vuint32_t:4;
                vuint32_t PGM:1;
                vuint32_t PSUS:1;
                vuint32_t ERS:1;
                vuint32_t ESUS:1;
                vuint32_t EHV:1;
            } B;
        } MCR;

        union {    /* Low/Mid address block locking (Base+0x0004) */
            vuint32_t R;
            struct {
                vuint32_t LME:1;
                vuint32_t:10;
                vuint32_t TSLK:1;
                vuint32_t:2;
                vuint32_t MLK:2;
                vuint32_t LLK:16;
            } B;
        } LML;

        union {  /* High address space block locking (Base+0x0008)*/
            vuint32_t R;
            struct {
                vuint32_t HBE:1;
                vuint32_t :19;
                vuint32_t HBLOCK:12;
            } B;
        } HBL;

        union {    /* Secondary Low/Mid block lock (Base+0x000C)*/
            vuint32_t R;
            struct {
                vuint32_t SLE:1;
                vuint32_t:10;
                vuint32_t STSLK:1;
                vuint32_t:2;
                vuint32_t SMK:2;
                vuint32_t SLK:16;
            } B;
        } SLL;

        union {    /* Low/Mid address space block sel (Base+0x0010)*/
            vuint32_t R;
            struct {
                vuint32_t:14;
                vuint32_t MSL:2;
                vuint32_t LSL:16;
            } B;
        } LMS;

        union {   /* High address Space block select (Base+0x0014)*/
            vuint32_t R;
            struct {
                vuint32_t:20;
                vuint32_t HSL:12;
            } B;
        } HBS;

        union {   /* Address Register (Base+0x0018) */
            vuint32_t R;
            struct {
                vuint32_t:9;
                vuint32_t ADD:20;
                vuint32_t:3;
            } B;
        } ADR;

    /* Note the following 3 registers, BIU[0..2] are mirrored to */
    /*  the code flash configuraiton PFCR[0..2] registers        */
    /* To make it easier to code, the BIU registers have been    */
    /*  replaced with the PFCR registers in this header file!    */
    /* A commented out BIU register is shown for reference!      */


    union { /* CFLASH Configuration 0 (Base+0x001C) */
            vuint32_t R;
            struct {
                vuint32_t BK0_APC:5;
                vuint32_t BK0_WWSC:5;
                vuint32_t BK0_RWSC:5;
                vuint32_t BK0_RWWC2:1;
                vuint32_t BK0_RWWC1:1;
             /* vuint32_t B0_P1_BCFG:2; // only has one port to the cross bar i.e. port 0 
                vuint32_t B0_P1_DPFE:1;
                vuint32_t B0_P1_IPFE:1;
                vuint32_t B0_P1_PFLM:2;
                vuint32_t B0_P1_BFE:1; */
				vuint32_t :7;
                vuint32_t BK0_RWWC0:1;
                vuint32_t B0_P0_BCFG:2;
                vuint32_t B0_P0_DPFE:1;
                vuint32_t B0_P0_IPFE:1;
                vuint32_t B0_P0_PFLM:2;
                vuint32_t B0_P0_BFE:1;
            } B;
        } PFCR0;
		
/* Commented out Bus Interface Unit 0 (Base+0x001C) */
    /*union {              
        vuint32_t R;
        struct {
            vuint32_t BI0:32;
        } B;
    } BIU0;  */

        union {   /* CFLASH Configuration Register 1 (Base+0x0020)*/
            vuint32_t R;
            struct {
                vuint32_t BK1_APC:5;
                vuint32_t BK1_WWSC:5;
                vuint32_t BK1_RWSC:5;
                vuint32_t BK1_RWWC2:1;
                vuint32_t BK1_RWWC1:1;
                vuint32_t:7;			 /* changed to 7 to suit comment below */
                //vuint32_t B1_P1_BFE:1; /* should have no effect, there is only one XBAR port (no P1) to P-flash controller */ 
                vuint32_t BK1_RWWC0:1;
                vuint32_t:6;
                vuint32_t B1_P0_BFE:1;
            } B;
        } PFCR1;
		
/* Commented out Bus Interface Unit 1 (Base+0x0020) */
    /*union {                 
        vuint32_t R;
        struct {
            vuint32_t BI1:32;
        } B;
    } BIU1; */

        union {          /* CFLASH Access Protection (Base+0x0024) */
            vuint32_t R;
            struct {
                vuint32_t:6;		/*incorrect - B1M/B1.5M does not have this many masters TBD*/ 
                vuint32_t ARBM:2;
                vuint32_t M7PFD:1;
                vuint32_t M6PFD:1;
                vuint32_t M5PFD:1;
                vuint32_t M4PFD:1;
                vuint32_t M3PFD:1;
                vuint32_t M2PFD:1;
                vuint32_t M1PFD:1;
                vuint32_t M0PFD:1;
                vuint32_t M7AP:2;
                vuint32_t M6AP:2;
                vuint32_t M5AP:2;
                vuint32_t M4AP:2;
                vuint32_t M3AP:2;
                vuint32_t M2AP:2;
                vuint32_t M1AP:2;
                vuint32_t M0AP:2;
            } B;
        } PFAPR;
		
/* Commented out Bus Interface Unit 2 (Base+0x0024) */
    /*union {                
        vuint32_t R;
        struct {
            vuint32_t BI2:32;
        } B;
    } BIU2; */

    vuint8_t CFLASH_reserved0[20]; /* Reserved 20 Bytes (Base+0x0028-0x003B) */

        union {     /* User Test 0 (Base+0x003C) */
            vuint32_t R;
            struct {
                vuint32_t UTE:1;
                vuint32_t:7;
                vuint32_t DSI:8;
                vuint32_t:10;
                vuint32_t MRE:1;
                vuint32_t MRV:1;
                vuint32_t EIE:1;
                vuint32_t AIS:1;
                vuint32_t AIE:1;
                vuint32_t AID:1;
            } B;
        } UT0;

        union {   /* User Test 1 (Base+0x0040) */
            vuint32_t R;
            struct {
                vuint32_t DAI:32;
            } B;
        } UT1;

        union {   /* User Test 2 (Base+0x0044) */
            vuint32_t R;
            struct {
                vuint32_t DAI:32;
            } B;
        } UT2;

        union {   /* User Multiple Input Sig 0..4 (Base+0x0048-0x005B) */
            vuint32_t R;
            struct {
                vuint32_t MS:32;
            } B;
        } UMISR[5];
		
		 vuint8_t CFLASH_reserved1[16292]; /* Reserved 16292 (Base+0x005C-0x3FFF)*/

    };                          /* end of CFLASH_tag */
/****************************************************************** 
| defines and macros (scope: module-local) 
|-----------------------------------------------------------------*/
/* Define instances of modules */

#define ADC_0     (*(volatile struct ADC0_tag *)      0xFFE00000UL)
#define ADC_1     (*(volatile struct ADC1_tag *)      0xFFE04000UL)
#define CAN_0     (*(volatile struct FLEXCAN_tag *)   0xFFFC0000UL)
#define CAN_1     (*(volatile struct FLEXCAN_tag *)   0xFFFC4000UL)
#define CAN_2     (*(volatile struct FLEXCAN_tag *)   0xFFFC8000UL)
#define CAN_3     (*(volatile struct FLEXCAN_tag *)   0xFFFCC000UL)
#define CAN_4     (*(volatile struct FLEXCAN_tag *)   0xFFFD0000UL)
#define CAN_5     (*(volatile struct FLEXCAN_tag *)   0xFFFD4000UL)
#define CANSP     (*(volatile struct CANSP_tag *)     0xFFE70000UL)
#define CFLASH    (*(volatile struct CFLASH_tag *)    0xC3F88000UL)
#define CGM       (*(volatile struct CGM_tag *)       0xC3FE0000UL)
#define CTUL      (*(volatile struct CTUL_tag *)      0xFFE64000UL)
#define DFLASH    (*(volatile struct DFLASH_tag *)    0xC3F8C000UL)
#define DMAMUX    (*(volatile struct DMAMUX_tag *)    0xFFFDC000UL)
#define DSPI_0    (*(volatile struct DSPI_tag *)      0xFFF90000UL)
#define DSPI_1    (*(volatile struct DSPI_tag *)      0xFFF94000UL)
#define DSPI_2    (*(volatile struct DSPI_tag *)      0xFFF98000UL)
#define DSPI_3    (*(volatile struct DSPI_tag *)      0xFFF9C000UL)
#define DSPI_4    (*(volatile struct DSPI_tag *)      0xFFFA0000UL)
#define DSPI_5    (*(volatile struct DSPI_tag *)      0xFFFA4000UL)
#define EDMA      (*(volatile struct EDMA_tag *)      0xFFF44000UL) 
#define EMIOS_0   (*(volatile struct EMIOS_tag *)     0xC3FA0000UL)
#define EMIOS_1   (*(volatile struct EMIOS_tag *)     0xC3FA4000UL)
#define I2C_0     (*(volatile struct I2C_tag *)       0xFFE30000UL)
#define INTC      (*(volatile struct INTC_tag *)      0xFFF48000UL)
#define LINFLEX_0 (*(volatile struct LINFLEXD0_tag *) 0xFFE40000UL)
#define LINFLEX_1 (*(volatile struct LINFLEXD1_tag *) 0xFFE44000UL)
#define LINFLEX_2 (*(volatile struct LINFLEX_tag *)   0xFFE48000UL)
#define LINFLEX_3 (*(volatile struct LINFLEX_tag *)   0xFFE4C000UL)
#define LINFLEX_4 (*(volatile struct LINFLEX_tag *)   0xFFE50000UL)
#define LINFLEX_5 (*(volatile struct LINFLEX_tag *)   0xFFE54000UL)
#define LINFLEX_6 (*(volatile struct LINFLEX_tag *)   0xFFE58000UL)
#define LINFLEX_7 (*(volatile struct LINFLEX_tag *)   0xFFE5C000UL)
#define LINFLEX_8 (*(volatile struct LINFLEX_tag *)   0xFFFB0000UL)
#define LINFLEX_9 (*(volatile struct LINFLEX_tag *)   0xFFFB4000UL)
#define ECSM      (*(volatile struct ECSM_tag *)      0xFFF40000UL)
#define ME        (*(volatile struct ME_tag *)        0xC3FDC000UL)
#define MPU       (*(volatile struct MPU_tag *)       0xFFF10000UL)
#define PCU       (*(volatile struct PCU_tag *)       0xC3FE8000UL)
#define PIT       (*(volatile struct PIT_tag *)       0xC3FF0000UL)
#define RGM       (*(volatile struct RGM_tag *)       0xC3FE4000UL)
#define RTC       (*(volatile struct RTC_tag *)       0xC3FEC000UL)
#define SIU       (*(volatile struct SIU_tag *)       0xC3F90000UL)
#define SSCM      (*(volatile struct SSCM_tag *)      0xC3FD8000UL)
#define STM       (*(volatile struct STM_tag *)       0xFFF3C000UL)
#define SWT       (*(volatile struct SWT_tag *)       0xFFF38000UL)
#define WKUP      (*(volatile struct WKUP_tag *)      0xC3F94000UL)

#ifdef __MWERKS__
#pragma pop
#endif

#ifdef  __cplusplus
}
#endif
#endif                          
/* End of file */
