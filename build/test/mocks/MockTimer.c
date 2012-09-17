/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "MockTimer.h"

typedef struct _CMOCK_Timer_Init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_Timer_Init_CALL_INSTANCE;

typedef struct _CMOCK_Timer_ToggleRequested_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;

} CMOCK_Timer_ToggleRequested_CALL_INSTANCE;

static struct MockTimerInstance
{
  int Timer_Init_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE Timer_Init_CallInstance;
  int Timer_ToggleRequested_IgnoreBool;
  int Timer_ToggleRequested_FinalReturn;
  CMOCK_MEM_INDEX_TYPE Timer_ToggleRequested_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void MockTimer_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.Timer_Init_IgnoreBool)
    Mock.Timer_Init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Timer_Init_CallInstance, cmock_line, "Function 'Timer_Init' called less times than expected.");
  if (Mock.Timer_ToggleRequested_IgnoreBool)
    Mock.Timer_ToggleRequested_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Timer_ToggleRequested_CallInstance, cmock_line, "Function 'Timer_ToggleRequested' called less times than expected.");
}

void MockTimer_Init(void)
{
  MockTimer_Destroy();
}

void MockTimer_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void Timer_Init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Timer_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Timer_Init_CallInstance);
  Mock.Timer_Init_CallInstance = CMock_Guts_MemNext(Mock.Timer_Init_CallInstance);
  if (Mock.Timer_Init_IgnoreBool)
  {
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'Timer_Init' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Timer_Init' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Timer_Init' called later than expected.");
}

void Timer_Init_CMockIgnore(void)
{
  Mock.Timer_Init_IgnoreBool = (int)1;
}

void Timer_Init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_Init_CALL_INSTANCE));
  CMOCK_Timer_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Timer_Init_CallInstance = CMock_Guts_MemChain(Mock.Timer_Init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

int Timer_ToggleRequested(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Timer_ToggleRequested_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_ToggleRequested_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Timer_ToggleRequested_CallInstance);
  Mock.Timer_ToggleRequested_CallInstance = CMock_Guts_MemNext(Mock.Timer_ToggleRequested_CallInstance);
  if (Mock.Timer_ToggleRequested_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.Timer_ToggleRequested_FinalReturn;
    Mock.Timer_ToggleRequested_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'Timer_ToggleRequested' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Timer_ToggleRequested' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'Timer_ToggleRequested' called later than expected.");
  return cmock_call_instance->ReturnVal;
}

void Timer_ToggleRequested_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_ToggleRequested_CALL_INSTANCE));
  CMOCK_Timer_ToggleRequested_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_ToggleRequested_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Timer_ToggleRequested_CallInstance = CMock_Guts_MemChain(Mock.Timer_ToggleRequested_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Timer_ToggleRequested_IgnoreBool = (int)1;
}

void Timer_ToggleRequested_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_ToggleRequested_CALL_INSTANCE));
  CMOCK_Timer_ToggleRequested_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_ToggleRequested_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.Timer_ToggleRequested_CallInstance = CMock_Guts_MemChain(Mock.Timer_ToggleRequested_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

