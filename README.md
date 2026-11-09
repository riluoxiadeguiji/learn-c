# learn-c

C 语言自学练习代码。所有程序均为 Visual Studio 控制台应用（C 语言，其中 2 个为 `.cpp` 扩展名但内容为纯 C），按题目分目录存放。

## 题目目录

| 目录 | 题目 | 主要知识点 |
| --- | --- | --- |
| [`AMA test`](<AMA test/AMA test.c>) | 输入 N 个数，统计其中有多少个数可表示为另两个数之和 | 三重循环枚举、`goto` 跳出 |
| [`Collatz conjecture`](<Collatz conjecture/Collatz conjecture.c>) | 角谷猜想：对 n 反复「奇数乘 3 加 1、偶数除以 2」直到 1，并输出完整序列 | `while` 循环、数组暂存、逆序输出 |
| [`counting problem`](<counting problem/counting problem.cpp>) | 统计 1 ~ a 之间数字 b 出现的总次数 | 数位拆分、`while` 取模 |
| [`display`](<display/display.c>) | 用 5 行 × 3 列点阵按数码管样式绘制一个数字串 | 二维字符数组、字符与数字转换 |
| [`dream counting B`](<dream counting B/dream counting B.c>) | 统计区间 [M, N] 内 0 ~ 9 各数字出现的次数 | 数位拆分、计数数组 |
| [`fish compares cuteness`](<fish compares cuteness/fish compares cuteness.c>) | 对每个元素，统计它前面有多少个元素比它大 | 双重循环、计数 |
| [`fish's number game`](<fish's number game/fish's number game.c>) | 连续读入整数直到输入 0，再逆序输出 | `scanf` 返回值作循环条件、数组逆序 |
| [`leap year check`](<leap year check/源.c>) | 判断某年是否为闰年 | 逻辑运算、闰年条件（%4 且非 %100，或 %400） |
| [`lottery drawing`](<lottery drawing/lottery drawing.c>) | 将 n 注号码与 7 个中奖号比对，统计各中奖等级的注数 | 数组比对、重复元素处理 |
| [`pascal's triangle`](<pascal's triangle/pascal‘s triangle.c>) | 输出杨辉三角前 n 行 | 二维数组、递推公式 |
| [`snake matrix`](<snake matrix/snake matrix.c>) | 生成 n × n 的蛇形（螺旋）数字方阵 | 四边界收缩、坐标控制 |
| [`taotao get apples`](<taotao get apples/taotao get apples.c>) | 陶陶摘苹果：凳高 30cm + 身高，统计能够到的苹果数 | 数组遍历、条件计数 |
| [`The tree outside the school gate`](<The tree outside the school gate/The tree outside the school gate.c>) | 校门外的树：给定若干砍树区间，统计剩下的树的数量 | 标记数组、区间覆盖 |
| [`worthy opponent`](<worthy opponent/worthy opponent.c>) | 统计「旗鼓相当的对手」对数（各科分差 ≤ 5、总分差 ≤ 10） | 结构体/二维数组、双重枚举 |
| [`xiaoyu buy pens`](<xiaoyu buy pens/xiaoyu buy pens.cpp>) | 小玉买文具：a 元 b 角最多能买几支 19 元的笔 | 单位换算、整除 |

## 编译与运行

每个目录都有独立的 `.slnx` 解决方案和 `.vcxproj` 工程文件。

**方式一：Visual Studio**

用 Visual Studio 打开任一目录下的 `.slnx` 文件，按 `F5` 生成并运行。

**方式二：MSBuild 命令行**

```powershell
msbuild "AMA test\AMA test.vcxproj" /p:Configuration=Release /p:Platform=x64
```

**方式三：直接使用编译器**

```powershell
cl /EHsc "AMA test\AMA test.c"
```

> 注意：`counting problem` 与 `xiaoyu buy pens` 两个工程的文件扩展名是 `.cpp`，但代码是纯 C 写法（只用 `stdio.h`），用 C 或 C++ 编译器均可编译。

## 说明

- 多数源文件首行有 `#define _CRT_SECURE_NO_WARNINGS`，用于关闭 MSVC 对 `scanf` / `printf` 等 CRT 函数的安全警告。
- 这些题目多为中文教材与在线评测平台的入门题，输入输出格式按题目要求（多为标准输入、纯数字输出）。
- 仓库仅保留源码与工程配置（`.c` / `.cpp` / `.vcxproj` / `.vcxproj.filters` / `.slnx`），`x64/`、`.vs/`、`*.user` 等生成产物不纳入版本管理。
- 各项目使用平台工具集 `v145`（Visual Studio 2026），如需在较早版本打开，可在项目属性中调整平台工具集。
