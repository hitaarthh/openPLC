void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->ADD10_OUT,0,retain)
  __INIT_VAR(data__->EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SEL15_OUT,0,retain)
  __INIT_VAR(data__->AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->ADD10_OUT,)));
  __SET_VAR(data__->,SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->EQ13_OUT,),
    (UINT)__GET_VAR(data__->ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->SEL15_OUT,));
  __SET_VAR(data__->,AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void TRAFFICSIGNL_init__(TRAFFICSIGNL *data__, BOOL retain) {
  __INIT_VAR(data__->RED1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->YELLOW1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GREEN1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RED2,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->YELLOW2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GREEN2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TIME_GREEN1,0,retain)
  __INIT_VAR(data__->TIME_YELLOW1,0,retain)
  __INIT_VAR(data__->TIME_RED1,0,retain)
  __INIT_VAR(data__->TIME_GREEN2,0,retain)
  __INIT_VAR(data__->TIME_YELLOW2,0,retain)
  __INIT_VAR(data__->TIME_RED2,0,retain)
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON3,retain);
  __INIT_VAR(data__->AND13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AND14_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OR24_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OR20_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TIME_TO_INT38_OUT,0,retain)
  __INIT_VAR(data__->SUB39_OUT,0,retain)
  __INIT_VAR(data__->NOT27_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AND17_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AND4_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AND5_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TIME_TO_INT32_OUT,0,retain)
  __INIT_VAR(data__->SUB33_OUT,0,retain)
  __INIT_VAR(data__->AND52_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AND53_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OR62_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OR59_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TIME_TO_INT74_OUT,0,retain)
  __INIT_VAR(data__->SUB75_OUT,0,retain)
  __INIT_VAR(data__->NOT65_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AND56_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AND42_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AND44_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TIME_TO_INT70_OUT,0,retain)
  __INIT_VAR(data__->SUB71_OUT,0,retain)
}

// Code part
void TRAFFICSIGNL_body__(TRAFFICSIGNL *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,AND13_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)!(__GET_VAR(data__->GREEN2,)),
    (BOOL)!(__GET_VAR(data__->YELLOW2,))));
  __SET_VAR(data__->,AND14_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->AND13_OUT,),
    (BOOL)__GET_VAR(data__->RED2,)));
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->AND14_OUT,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 0, 10, 0, 0, 0));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 0, 5, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,RED2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,OR24_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->GREEN2,),
    (BOOL)__GET_VAR(data__->YELLOW2,)));
  __SET_VAR(data__->,OR20_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->OR24_OUT,),
    (BOOL)__GET_VAR(data__->TON1.Q,)));
  __SET_VAR(data__->,RED1,,__GET_VAR(data__->OR20_OUT,));
  __SET_VAR(data__->,TIME_TO_INT38_OUT,,TIME_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TIME)__GET_VAR(data__->TON1.ET,)));
  __SET_VAR(data__->,SUB39_OUT,,SUB__INT__INT__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)5,
    (INT)__GET_VAR(data__->TIME_TO_INT38_OUT,)));
  __SET_VAR(data__->,TIME_RED1,,__GET_VAR(data__->SUB39_OUT,));
  __SET_VAR(data__->,TIME_GREEN2,,__GET_VAR(data__->SUB39_OUT,));
  __SET_VAR(data__->,NOT27_OUT,,!(__GET_VAR(data__->TON1.Q,)));
  __SET_VAR(data__->,AND17_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->NOT27_OUT,),
    (BOOL)__GET_VAR(data__->TON0.Q,)));
  __SET_VAR(data__->,YELLOW1,,__GET_VAR(data__->AND17_OUT,));
  __SET_VAR(data__->,AND4_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->RED2,),
    (BOOL)!(__GET_VAR(data__->YELLOW2,))));
  __SET_VAR(data__->,AND5_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->AND4_OUT,),
    (BOOL)!(__GET_VAR(data__->YELLOW1,))));
  __SET_VAR(data__->,GREEN1,,__GET_VAR(data__->AND5_OUT,));
  __SET_VAR(data__->,TIME_TO_INT32_OUT,,TIME_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TIME)__GET_VAR(data__->TON0.ET,)));
  __SET_VAR(data__->,SUB33_OUT,,SUB__INT__INT__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)10,
    (INT)__GET_VAR(data__->TIME_TO_INT32_OUT,)));
  __SET_VAR(data__->,TIME_YELLOW1,,__GET_VAR(data__->SUB33_OUT,));
  __SET_VAR(data__->,AND52_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)!(__GET_VAR(data__->GREEN1,)),
    (BOOL)!(__GET_VAR(data__->YELLOW1,))));
  __SET_VAR(data__->,AND53_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->AND52_OUT,),
    (BOOL)__GET_VAR(data__->RED1,)));
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->AND53_OUT,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 0, 10, 0, 0, 0));
  TON_body__(&data__->TON2);
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->TON2.Q,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 0, 5, 0, 0, 0));
  TON_body__(&data__->TON3);
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,RED1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,OR62_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->GREEN1,),
    (BOOL)__GET_VAR(data__->YELLOW1,)));
  __SET_VAR(data__->,OR59_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->OR62_OUT,),
    (BOOL)__GET_VAR(data__->TON3.Q,)));
  __SET_VAR(data__->,RED2,,__GET_VAR(data__->OR59_OUT,));
  __SET_VAR(data__->,TIME_TO_INT74_OUT,,TIME_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TIME)__GET_VAR(data__->TON3.ET,)));
  __SET_VAR(data__->,SUB75_OUT,,SUB__INT__INT__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)5,
    (INT)__GET_VAR(data__->TIME_TO_INT74_OUT,)));
  __SET_VAR(data__->,TIME_RED2,,__GET_VAR(data__->SUB75_OUT,));
  __SET_VAR(data__->,TIME_GREEN1,,__GET_VAR(data__->SUB75_OUT,));
  __SET_VAR(data__->,NOT65_OUT,,!(__GET_VAR(data__->TON3.Q,)));
  __SET_VAR(data__->,AND56_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->NOT65_OUT,),
    (BOOL)__GET_VAR(data__->TON2.Q,)));
  __SET_VAR(data__->,YELLOW2,,__GET_VAR(data__->AND56_OUT,));
  __SET_VAR(data__->,AND42_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->RED1,),
    (BOOL)!(__GET_VAR(data__->YELLOW1,))));
  __SET_VAR(data__->,AND44_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->AND42_OUT,),
    (BOOL)!(__GET_VAR(data__->YELLOW2,))));
  __SET_VAR(data__->,GREEN2,,__GET_VAR(data__->AND44_OUT,));
  __SET_VAR(data__->,TIME_TO_INT70_OUT,,TIME_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TIME)__GET_VAR(data__->TON2.ET,)));
  __SET_VAR(data__->,SUB71_OUT,,SUB__INT__INT__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)10,
    (INT)__GET_VAR(data__->TIME_TO_INT70_OUT,)));
  __SET_VAR(data__->,TIME_YELLOW2,,__GET_VAR(data__->SUB71_OUT,));

  goto __end;

__end:
  return;
} // TRAFFICSIGNL_body__() 





