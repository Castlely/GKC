﻿/*
** Copyright (c) 2016, Xin YUAN, courses of Zhejiang University
** All rights reserved.
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the 2-Clause BSD License.
**
** Author contact information:
**   yxxinyuan@zju.edu.cn
**
*/

/*
This file contains parser functions.
*/

////////////////////////////////////////////////////////////////////////////////

#include "PreComp.h"

#include "_GkcParser.h"

#include "wlang/WlangGrammarError.h"
#include "wlang/WlangAction.h"
#include "wlang/WlangParser.h"

////////////////////////////////////////////////////////////////////////////////

//functions

namespace GKC {

// WlangParser

inline void _Internal_WlangParser_Create(GKC::ShareCom<_IWlangParser>& sp, GKC::CallResult& cr) throw()
{
	_CREATE_COMPONENT_INSTANCE(WlangParser, _IWlangParser, sp, cr);
}

} //namespace

// WlangParser

void _WlangParser_Create(GKC::ShareCom<_IWlangParser>& sp, GKC::CallResult& cr) throw()
{
	GKC::_Internal_WlangParser_Create(sp, cr);
}

////////////////////////////////////////////////////////////////////////////////
