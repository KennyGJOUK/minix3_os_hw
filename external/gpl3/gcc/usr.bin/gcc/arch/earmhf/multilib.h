/* This file is automatically generated.  DO NOT EDIT! */
/* Generated from: 	NetBSD: mknative-gcc,v 1.69 2013/04/25 16:18:43 skrll Exp  */
/* Generated from: NetBSD: mknative.common,v 1.9 2007/02/05 18:26:01 apb Exp  */

static const char *const multilib_raw[] = {
". !mabi=aapcs-linux !mabi=aapcs !mabi=atpcs !mabi=apcs-gnu !mabi=iwmmxt;",
".:. mabi=aapcs-linux !mabi=aapcs !mabi=atpcs !mabi=apcs-gnu !mabi=iwmmxt;",
".:../lib/aapcs !mabi=aapcs-linux mabi=aapcs !mabi=atpcs !mabi=apcs-gnu !mabi=iwmmxt;",
".:../lib/atpcs !mabi=aapcs-linux !mabi=aapcs mabi=atpcs !mabi=apcs-gnu !mabi=iwmmxt;",
".:../lib/oabi !mabi=aapcs-linux !mabi=aapcs !mabi=atpcs mabi=apcs-gnu !mabi=iwmmxt;",
".:../lib/iwmmxt !mabi=aapcs-linux !mabi=aapcs !mabi=atpcs !mabi=apcs-gnu mabi=iwmmxt;",
NULL
};

static const char *const multilib_matches_raw[] = {
"mabi=aapcs-linux mabi=aapcs-linux;",
"mabi=aapcs mabi=aapcs;",
"mabi=atpcs mabi=atpcs;",
"mabi=apcs-gnu mabi=apcs-gnu;",
"mabi=iwmmxt mabi=iwmmxt;",
NULL
};

static const char *multilib_extra = "";

static const char *const multilib_exclusions_raw[] = {
NULL
};

static const char *multilib_options = "mabi=aapcs-linux/mabi=aapcs/mabi=atpcs/mabi=apcs-gnu/mabi=iwmmxt";

#define DISABLE_MULTILIB  1
