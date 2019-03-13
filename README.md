# SOINE
a language  
soine是一个通过噪声编程的语言  
>注：目前的更新请在branch中的readme查看  
## Why soine?
这个新的语言叫soine的原因是噪声的英文(noise)和科学(science)结合而成，将s与n交换而成的。  
而至于为什么要把噪声与此语言相联系是因为一位将来将会十分伟大的噪学家宋本忠，将噪声与科学中的所有学科相联系
最后噪学取代了科学这个名词。而与噪声联系的计算机科学将会强大无比，计算机科学急需一个新的语言来与噪声相结合。

关于宋本忠的经历，可以去查阅宋本忠简历与2018年出版的《本忠是个好》。
## About
soine有一个非常显著的特点就是自由度高，它是一个弱类型的解释语言。  
它结合了更偏向于底层的一些运算、语句、操作，同时也可以做到一些更高层的功能。  
语法规则也十分简单，尽量做到与人类语言相近。
soine以动态内存存储变量，这让用户可以更方便地切换类型。  
在soine的标准库中，可以添加很多对各界人士相关的函数、类型。  

## Types
因为soine是一个弱类型语言，变量有如下的类型：  
 - ```num``` 数
 - ```str``` 字符串
 - ```bool``` 布尔值
 - ```list``` 列表/向量

另外，也可以使用```import```来获得更多数据类型。
soine支持大量的数据类型，都可以在标准库中找到。
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
var { alias = a, b } = value
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
import 'module' // 特殊：不暴露到当前作用域，仅运行模块
import * from 'module' // 导入全部，并展开到全局
import name from 'module' // 导入全部到 name 对象中
import { a, b } from 'module' // 导入 a, b
// 与赋值语法相同，可以嵌套大括号导入。
```
## Development
 ### project
 ### application
## Others
