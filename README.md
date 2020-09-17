## 嵌入汇编代码(__asm__)
```
int add(int num) {//内嵌汇编
    __asm__ __volatile__(
        "lsl x0, x0, 1\n"
        "str x0, [sp, #12]\n"
    );
    return num;
}
```

XNU内核是Darwin操作系统的一部分，可在macOS和iOS操作系统中使用。 

XNU是X is Not Unix的缩写。 

XNU是一个混合内核，它结合了卡内基梅隆大学开发的Mach内核，FreeBSD的组件以及用于编写称为IOKit的驱动程序的C ++ API。 

XNU在x86_64上单处理器和多处理器配置运行。

XNU 源码树
```
config - 导出的api的配置以支持受支持的体系结构和平台
SETUP - 用于配置内核，版本控制和kextsymbol管理的基本工具集。
EXTERNAL_HEADERS - 标头来自其他项目，以避免在构建时出现依赖循环。 更新源时，应定期同步这些标头。
libkern - 用于处理驱动程序和kext的C ++ IOKit库代码。
libsa - 用于启动的内核引导程序代码
libsyscall - 用户空间程序的syscall库接口
libkdd - 用户库的源，用于解析内核数据（如内核组块数据）。
makedefs - 顶层规则并为内核构建定义。
osfmk - 基于Mach内核的子系统
pexpert - 平台特定的代码，例如中断处理，原子等。
security - 强制访问检查策略接口和相关实施。
bsd - BSD子系统代码
tools - 一组用于测试，调试和配置内核的实用程序。
```
