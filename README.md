# C 语言入门

C 语言是一门非常底层的编译型语言, 任何 Linux 或 MacOS 计算机都自带 C 编译器

## 初始

```sh
touch hello.c

# 运行 gcc, 返回 [> clang: error: no input files]. 这表示你没有声明任何文件
gcc

# 编辑器可使用任何, 记事本/sublime/vscode/vim/nano/etc...
# 生成了一个 hello 的可执行程序.
gcc hello.c -o hello

# 运行, 返回 [> Hello World!%]
./hello
```


## References

- [freecodecamp - C 语言入门手册：几小时内就能学会的 C 语言基础](https://www.freecodecamp.org/chinese/news/the-c-beginners-handbook/)
