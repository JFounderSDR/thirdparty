// -*- C++ -*-

//=============================================================================
/**
 *  @file    Operation_Table_Perfect_Hash.h
 *
 *  $Id: Operation_Table_Perfect_Hash.h 14 2007-02-01 15:49:12Z mitza $
 *
 *  @author Aniruddha Gokhale
 */
//=============================================================================

#ifndef TAO_OPERATION_TABLE_PERFECT_HASH_H
#define TAO_OPERATION_TABLE_PERFECT_HASH_H

#include /**/ "ace/pre.h"

#include "tao/PortableServer/portableserver_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PortableServer/Operation_Table.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/**
 * @class TAO_Perfect_Hash_OpTable
 *
 * @brief Helper class  for use of perfect hashing operation lookup
 * strategy.
 *
 * This class declares pure virtual methods called 'lookup ()'
 * and 'hash ()' which will be generated by the GPERF
 * program. These methods are used by 'bind ()' and 'find ()'
 * methods. Subclasses will define the lookup and hash
 * functions.
 */
class TAO_PortableServer_Export TAO_Perfect_Hash_OpTable
  : public TAO_Operation_Table
{
public:

  /// Do nothing destrctor.
  virtual ~TAO_Perfect_Hash_OpTable (void);

  /// See the documentation in the base class for details.
  virtual int find (const char *opname,
                    TAO_Skeleton &skelfunc,
                    const unsigned int length = 0);

  virtual int find (const char *opname,
                    TAO_Collocated_Skeleton &skelfunc,
                    TAO::Collocation_Strategy s,
                    const unsigned int length = 0);

  virtual int bind (const char *opname,
                    const TAO::Operation_Skeletons skel_ptr);

private:
  // = Methods that should defined by the subclasses. GPERF program
  //   will generate these routines.

  virtual unsigned int hash (const char *str, unsigned int len) = 0;

  virtual const TAO_operation_db_entry* lookup (const char *str,
                                                unsigned int len) = 0;
};

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"
#endif /* TAO_OPERATION_TABLE_PERFECT_HASH_H */
