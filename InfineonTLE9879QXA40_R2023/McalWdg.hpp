#pragma once
/******************************************************************************/
/* File   : McalWdg.hpp                                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infMcalWdg_ServiceNvM_Types.hpp"
#include "CfgMcalWdg.hpp"
#include "McalWdg_core.hpp"
#include "infMcalWdg_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalWdg:
      INTERFACES_EXPORTED_MCALWDG
      public abstract_module
   ,  public class_McalWdg_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, MCALWDG_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCALWDG_CONST,       MCALWDG_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALWDG_CONFIG_DATA, MCALWDG_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCALWDG_CODE) DeInitFunction (void);
      FUNC(void, MCALWDG_CODE) MainFunction   (void);
      MCALWDG_CORE_FUNCTIONALITIES
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
extern VAR(module_McalWdg, MCALWDG_VAR) McalWdg;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

