/*
 * Copyright (c) 2020-2021. xxxxxx Software Ltd. All rights reserved.
 *
 * Author:     xxxxxx <xxxxxx@163.com>
 *
 * Maintainer: xxxxxx <xxxxxx@163.com>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

class Function
{
public:
    /*
     * 计算两个整型数据相加
     *
     * @param opNum1: 操作数1
     * @param opNum2: 操作数2
     *
     * @return int: 返回两数相加的结果
     */
    static int add(int opNum1, int opNum2);

    /*
     * 计算两个整型数据相减
     *
     * @param opNum1: 操作数1
     * @param opNum2: 操作数2
     *
     * @return int: 返回两数相减的结果
     */
    static int minus(int opNum1, int opNum2);
};