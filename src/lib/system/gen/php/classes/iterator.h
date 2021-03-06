/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __GENERATED_php_classes_iterator_h__
#define __GENERATED_php_classes_iterator_h__

#include <cpp/base/hphp_system.h>
#include <php/classes/iterator.fw.h>

// Declarations
#include <cls/outeriterator.h>
#include <cls/serializable.h>
#include <cls/traversable.h>
#include <cls/countable.h>
#include <cls/arrayiterator.h>
#include <cls/iterator.h>
#include <cls/appenditerator.h>
#include <cls/seekableiterator.h>
#include <cls/recursiveiterator.h>
#include <cls/recursivedirectoryiterator.h>
#include <cls/directoryiterator.h>
#include <cls/iteratoraggregate.h>
#include <cls/recursiveiteratoriterator.h>
#include <cls/filteriterator.h>
#include <php/classes/arrayaccess.h>
#include <php/classes/splfile.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Variant pm_php$classes$iterator_php(bool incOnce = false, LVariableTable* variables = NULL);
Object co_arrayiterator(CArrRef params, bool init = true);
Object co_appenditerator(CArrRef params, bool init = true);
Object co_recursivedirectoryiterator(CArrRef params, bool init = true);
Object co_directoryiterator(CArrRef params, bool init = true);
Object co_recursiveiteratoriterator(CArrRef params, bool init = true);

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_php_classes_iterator_h__
