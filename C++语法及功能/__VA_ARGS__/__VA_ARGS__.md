在GNU C中，宏可以接受可变数目的参数，就象函数一样，例如:

#define pr_debug(fmt,arg...) \ 
printk(KERN_DEBUG fmt, ##arg)
用可变参数宏(variadic macros)传递可变参数表
你可能很熟悉在函数中使用可变参数表，如:

void printf(const char* format, ...);
直到最近，可变参数表还是只能应用在真正的函数中，不能使用在宏中。

C99编译器标准终于改变了这种局面，它允许你可以定义可变参数宏(variadic macros)，这样你就可以使用拥有可以变化的参数表的宏。可变参数宏就像下面这个样子:

1
#define debug(...) printf(__VA_ARGS__)
缺省号代表一个可以变化的参数表。使用保留名 __VA_ARGS__ 把参数传递给宏。当宏的调用展开时，实际的参数就传递给 printf()了。例如:

1
Debug("Y = %d\n", y);

而处理器会把宏的调用替换成:

1
printf("Y = %d\n", y);

因为debug()是一个可变参数宏，你能在每一次调用中传递不同数目的参数:

1
debug("test");&nbsp; // 一个参数

可变参数宏不被ANSI/ISO C++ 所正式支持。因此，你应当检查你的编译器，看它是否支持这项技术。