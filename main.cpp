/*
 * Copyright (c) 2020-2021. xxxxxx Software Ltd. All rights reserved.
 *
 * Author:     xxxxxx <xxxxxx@163.com>
 *
 * Maintainer: xxxxxx <xxxxxx@163.com>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include <iostream>

#include "src/utils/Function.h"

using namespace std;

int main(int argc, char **argv)
{
    int a = 5;
    int b = 3;
    int ret = Function::add(a, b);
    cout << a << " + " << b << " = " << ret << endl;
    ret = Function::minus(a, b);
    cout << a << " - " << b << " = " << ret << endl;
    return 0;
}
