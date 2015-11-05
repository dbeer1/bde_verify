// csamisc_swapusing.t.cpp                                            -*-C++-*-
#include <bsl_utility.h>

struct V { };
void swap(V&, V&);
struct W { };
void swap(W&, W&);

void f()
{
    int i1{};
    int i2{};
    V v1{};
    V v2{};
    W w1{};
    W w2{};

    std::swap(i1, i2);
    ::std::swap(i1, i2);
    std::swap(v1, v2);
    ::std::swap(v1, v2);
    swap(v1, v2);
    std::swap(w1, w2);
    ::std::swap(w1, w2);
    swap(w1, w2);

    using std::swap;

    std::swap(i1, i2);
    ::std::swap(i1, i2);
    swap(i1, i2);
    std::swap(v1, v2);
    ::std::swap(v1, v2);
    swap(v1, v2);
    std::swap(w1, w2);
    ::std::swap(w1, w2);
    swap(w1, w2);
}

// ----------------------------------------------------------------------------
// Copyright (C) 2014 Bloomberg Finance L.P.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
// ----------------------------- END-OF-FILE ----------------------------------