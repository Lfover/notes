linux网络编程

HTTP协议在传输层使用TCP协议

HTTP协议数据包格式

​	1.请求

> 请求首行
>
> ​	请求方法 资源路径 协议版本\r\n
>
> ​	请求体
>
> ​		key:value\r\n
>
> ​		空行\r\n
>
> ​		正文

​	2.请求方法

> Get:从服务器获取数据，但是现在也可以给服务器取提交key= value形式的数据，只不过提交的数据是在url当中
>
> Post:像服务器提交数据，提交的数据是在正文当中的
>
> Post方法比Get方法更私密，想要安全，则需要ssl加密，即两种方法都不安全，只不过一个在正文中，一个在url中

​	3.请求体

HTTP响应

HTTP代码模拟







负载均衡---nginx

​	1.1nginx的安装

> ```
> yum list | grep nginx
> ```
>
> ```
> yum install -y nginx
> ```
>
> 

​	1.2nginx启动/关闭/重启/热加载配置文件

​	1.3进程模型

​	1.4TCP连接管理

​	1.5创建一个http小项目

​		httplib.h

​	1.6使用nginx