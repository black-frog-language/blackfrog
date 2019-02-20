# SOINE
a language

soine 是一个通过噪声编程的语言。

## Why soine?
这个新的语言叫 soine 的原因是噪声的英文——noise 和科学（science）结合，将 s 与 n 交换而成的。  
而至于为什么要把噪声与此语言相联系是因为一位将来将会十分伟大的噪学家宋本忠，将噪声与科学中的所有学科相联系，
最后噪学取代了科学这个名词。而与噪声联系的计算机科学将会强大无比，计算机科学急需一个新的语言来与噪声相结合。

关于宋本忠的经历，可以去查阅宋本忠简历与 2018 年出版的《本忠是个好》。
## About
soine 有一个非常显著的特点就是自由度高，它是一个强类型、动态类型的解释语言。  
它结合了更偏向于底层的一些运算、语句、操作，同时也可以做到一些更高层的功能。  
语法规则也十分简单，尽量做到与人类语言相近。
在 soine 的标准库中，包括了很多对各界人士相关的函数、类型。

## Introduction

### Types
soine 是一个动态类型语言。暴露在全局作用域的类如下：  
- `Num` 数
- `Str` 字符串
- `Bool` 布尔值
- `List` 列表/向量/数组
- `Dict` 字典
- `Fn` 函数/可调用对象
- `Obj` 对象基类

另外，标准库中有更多的类，以下是一些较为通用的类的示例：

#### `data_structures`
- `Set` 集合
- `Graph` 图
- `Tree` 树
- `BTree (extends Tree)` 二叉树
- `Bitset (implements List)` 二进制数组

#### `async`
- `GeneratorFn (extends Fn)`, `Generator` 生成器（函数）
- `AsyncFn (extends Fn)` 异步（函数）
- `Result` 异步结果

#### `io`
- `Buffer (implements List)`
- `IStream`, `OStream` 输入流、输出流
- `DStream (extends IStream, OStream)`, `TStream (extends DStream)` 双工流、转换流

#### `time`
- `Time` 时间

#### `regex`
- `Regex` 正则表达式

#### `thread`
- `Thread` 线程

#### `error`
- `Error` 错误
- `TypeError (extends Error)` 类型错误
- `RefError (extends Error)` 空值错误
- `RangeError (extends Error)` 区间错误
- `SyntaxError (extends Error)` 语法错误
- `FsError (extends Error)` 文件错误
- `NetError (extends Error)` 网络错误
- `SysError (extends Error)` 系统错误

### Syntax

#### comments
```soine
// 单行注释
/*
  多
  行
  注释
 */
/*!
  多行注释
  包含版权声明
 */
#! Hashbang 也是注释
```

#### variables
像这样声明变量：
```soine
var name: Type = value
const name: Type = value
// Type 和 value 可省略
```

并像这样赋值：

```soine
name = value
```

可以这样展开一个对象：

```soine
var { a, b } = value
// a = value.a
// b = value.b
// Type 可以被添加到单独的名称上，也可以添加到大括号上。
```

并且可以在展开时设置别名：

```soine
var { a: alias, b } = value
// alias = value.a
// b = value.b
// alias 语法可以嵌套大括号赋值。
```

也可以展开数组：

```soine
var [a, b] = value
// a = value[0]
// b = value[1]
// Type 可以被添加到单独的名称上，也可以添加到中括号上。
```

#### import
导入与赋值语法相似；最大的区别是将 `var ... = ...` 改为了 `import ... from ...`。

```soine
import * from 'module' // 导入全部，并展开到全局
import name from 'module' // 导入全部到 name 对象中
import { a, b } from 'module' // 导入 a, b
// 与赋值语法相同，可以嵌套大括号导入。
```

### Development

#### project

#### application

### Others
