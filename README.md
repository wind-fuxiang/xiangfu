MySQL集群搭建（Ubuntu）


首先在Ubuntu服务器上创建以下节点
    192.168.31.30   管理节点
    192.168.31.31   数据节点1
    192.168.31.32   数据节点2
    192.168.31.33   SQL节点

下载MySQL集群压缩包
    https://dev.mysql.com/downloads/cluster/
解压
    tar -xzvf mysql-cluster-8.0.29-linux-glibc2.12-x86_64.tar.gz

解压后的文件名替换为mysql方便后续管理

将mysql目录中集群管理命令复制到 '/usr/local/bin'目录
    cp bin/ndb_mgm* /usr/local/bin

使用chmod命令使其能够执行
    chmod +x /usr/local/bin/ndb_mgm*



配置集群管理节点
在'/var/lib/'目录中创建新目录'mysql-cluster'并创建文件'config.ini'
文件内容如下
    [ndbd default]
    NoOfReplicas=2
    DataMemory=80M
    IndexMemory=18M
    [mysqld default]
    [ndb_mgmd default]
    [tcp default]
# Cluster Control / Management node
    [ndb_mgmd]
    hostname=192.168.1.11
    [ndbd]
    hostname=192.168.1.12
    DataDir= /var/lib/mysql-cluster
# Data Node 1
    [ndbd]
    HostName=192.168.1.13
    DataDir=/var/lib/mysql-cluster
# SQL Node
    [mysqld]
    hostname=192.168.1.14
# If you to add new SQL Node
    [mysqld]
保存文件

启动管理节点进程
    ![image](https://user-images.githubusercontent.com/105834368/170683203-67d3642a-dbb0-4eb8-8025-db528816d880.png)
