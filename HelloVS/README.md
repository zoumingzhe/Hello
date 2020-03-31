# Debugging Linux programs in Visual Studio 

# 在Visual Studio中调试Linux程序
 创建第一个可以在Visual Studio中调试的Linux程序。

# 如何在Visual Studio中创建第一个Linux项目

# 如何在Visual Studio中编译、调试Linux项目

# 如何调试子进程
1.修改Linux配置文件“/etc/ssh/sshd_config”，将PermitRootLogin修改为yes。

2.重启Linux中的SSH服务，在Visual Studio中用Root用户远程登录。

3.“调试” -> “Project属性” -> “调试” -> “调试子进程” -> “是”。

# Reference （参考）
1.[VS2017 编译调试 Linux 程序](https://blog.csdn.net/u013272009/article/details/81023594)

2.[Linux development with C++ in Visual Studio](https://devblogs.microsoft.com/cppblog/linux-development-with-c-in-visual-studio/)

3.[IntelliSense for Remote Linux Headers](https://devblogs.microsoft.com/cppblog/intellisense-for-remote-linux-headers/)

4.[C++ Debugging and Diagnostics](https://devblogs.microsoft.com/cppblog/c-debugging-and-diagnostics/)