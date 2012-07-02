// csamisc_anonymousnamespaceinheader.t.cpp                           -*-C++-*-
// -----------------------------------------------------------------------------
// Copyright 2011 Dietmar Kuehl http://www.dietmar-kuehl.de              
// Distributed under the Boost Software License, Version 1.0. (See file  
// LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt).     
// -----------------------------------------------------------------------------

#include <csabase_analyser.h>
#include <csabase_location.h>
#include <csabase_registercheck.h>
#ident "$Id$"

// -----------------------------------------------------------------------------

static std::string const check_name("anon-namespace");

static void
anonymous_namespace_in_header(cool::csabase::Analyser& analyser, clang::NamespaceDecl const* decl)
{
    if (decl->isAnonymousNamespace()
        && analyser.get_location(decl).file() != analyser.toplevel())
    {
        analyser.report(decl, check_name, "anonymous namespace in header");
    }
}

// -----------------------------------------------------------------------------

static cool::csabase::RegisterCheck check(::check_name, &::anonymous_namespace_in_header);
