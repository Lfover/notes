# BGP

## 1.BGP简介

每个国家对数据的管理方式不一样，有自己管理数据的方式，称为自治系统（Autonmous System)简称AS

INNA是分配IP地址的源头机构，IANA给每个自治系统都分配了编号，编号是为了让大家都遵守同样的规则，即BGP规则，BGP是一个边界网关协议

## 2.BGP分类

1.eBGP(external 外部)

* eBGP仅仅处理自治系统之间的数据传输
* eBGP之间是不需要全互联的

2.iBGP（internal 内部）

* IBGP在自治系统内部进行管理
* iBGP之间是需要全互联的

iBGP从eBGP那里得到的自治系统路径是不会更新或是修改的

![image-20220621202918215](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220621202918215.png)

![image-20220621204945711](C:\Users\86134\AppData\Roaming\Typora\typora-user-images\image-20220621204945711.png)

## 3.原理

BGP使用TCP进行传输，使用179端口

四种报文：

* OPEN：建立连接
* UPDATE：更新路由
* NOTIFICATION：中断，拒绝，加入错误信息
* KEEPALIVE：保持会话状态

六种状态

* idel:初始状态

* CONNECT：连接状态
* ACTIVE：活跃状态，进行TCP三次握手
* OPENSENT
* OPENCONFIRM
* Established：连接

五个属性

* WEIGHT
* LOCAL PREFERNCE
* AS PATH
* ORIGIN
* MED



BGP是需要自己手动配置的