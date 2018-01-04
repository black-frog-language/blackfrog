# SFLS-1(Blackfrog-language) 规范
> TODO: ToC
## 概述
SFLS-1 *（下称 Blackfrog 或 BF ）* 是一门函数化的面向对象高级程序设计语言**概念，它目前没有编译或解释实现**。根据 [Zoran Chen](https://github.com/black-frog-language) 的提议， BF 的核心思想是**哲学**。
## 编写
BF 源文件应该使用 UTF-8 编写，并遵循 BF 规范。BF 文件可以经过编译或解释 *（下称**解析**）* 来得到可在一（1）个或更多计算机平台运行的版本。 BF 源文件的推荐后缀名为 `.bf` ，否则可能产生不可预料的问题。
> **For Example**
>
> 将 BF 源文件的后缀名设定为 `.js` ,可能会使编辑器、解释器将其当作 *JavaScript/ECMAScript* 解读。
