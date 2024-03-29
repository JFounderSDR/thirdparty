// -*- C++ -*-

//=============================================================================
/**
 *  @file    os_math.h
 *
 *  mathematical declarations
 *
 *  $Id: os_math.h 14 2007-02-01 15:49:12Z mitza $
 *
 *  @author Don Hinton <dhinton@dresystems.com>
 *  @author This code was originally in various places including ace/OS.h.
 */
//=============================================================================

#ifndef ACE_OS_INCLUDE_OS_MATH_H
#define ACE_OS_INCLUDE_OS_MATH_H

#include /**/ "ace/pre.h"

#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

// FUZZ: disable check_for_math_include

#if !defined (ACE_LACKS_MATH_H)
# include /**/ <math.h>
#endif /* !ACE_LACKS_MATH_H */

// Place all additions (especially function declarations) within extern "C" {}
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#include /**/ "ace/post.h"
#endif /* ACE_OS_INCLUDE_OS_MATH_H */
