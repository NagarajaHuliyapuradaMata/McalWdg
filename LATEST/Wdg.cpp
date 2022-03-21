/******************************************************************************/
/* File   : Wdg.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "infWdg_Version.h"
#include "infWdg_EcuM.h"
#include "infWdg_Dcm.h"
#include "infWdg_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Wdg:
      public abstract_module
{
   public:
      FUNC(void, WDG_CODE) InitFunction   (void);
      FUNC(void, WDG_CODE) DeInitFunction (void);
      FUNC(void, WDG_CODE) GetVersionInfo (void);
      FUNC(void, WDG_CODE) MainFunction   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Wdg, WDG_VAR) Wdg;
CONSTP2VAR(infEcuMClient, WDG_VAR, WDG_CONST) gptrinfEcuMClient_Wdg = &Wdg;
CONSTP2VAR(infDcmClient,  WDG_VAR, WDG_CONST) gptrinfDcmClient_Wdg  = &Wdg;
CONSTP2VAR(infSchMClient, WDG_VAR, WDG_CONST) gptrinfSchMClient_Wdg = &Wdg;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, WDG_CODE) module_Wdg::InitFunction(void){
   Wdg.IsInitDone = E_OK;
}

FUNC(void, WDG_CODE) module_Wdg::DeInitFunction(void){
   Wdg.IsInitDone = E_NOT_OK;
}

FUNC(void, WDG_CODE) module_Wdg::GetVersionInfo(void){
}

FUNC(void, WDG_CODE) module_Wdg::MainFunction(void){
}

#include "Wdg_Unused.h"

FUNC(void, WDG_CODE) class_Wdg_Unused::SetMode(void){
}

FUNC(void, WDG_CODE) class_Wdg_Unused::SetTriggerCondition(void){
}

FUNC(void, WDG_CODE) class_Wdg_Unused::Cbk_GptNotification(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

