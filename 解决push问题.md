1. 新建RSA密钥，一直回车即可，新建出来的文件位于`~/.ssh`下

```
ssh-keygen -t rsa -C "3524613297@qq.com"
```

2. 将公钥`id_rsa.pub`放入github ssh中
3. 执行

```
ssh -T git@github.com
```

4. 

```
git config --global user.name "Lfover"
git config --global user.email "3524613297@qq.com"
```

