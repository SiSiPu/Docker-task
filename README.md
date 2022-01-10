# Docker-task

## 1. Create a docker-compose.yml and enter with vim

    pusisi@pusisideMacBook-Pro ~ % vim docker-compose.yml
    
## 2.check image
 
    docker image
    
Result：
 
    REPOSITORY              TAG       IMAGE ID       CREATED         SIZE
    
    mariadb                 10.3      a28b99a44105   3 days ago      373MB
    
    docker101tutorial       latest    f38f03e40d60   3 days ago      27.4MB
    
    phpmyadmin/phpmyadmin   latest    2e5141bbcbfb   7 months ago    474MB
    
    redis                   4.0       7a8c2384752f   20 months ago   83.5MB
    
## 3.Run the image out of the container

    docker compose up -d
    
Result：
    
    [+] Running 3/3
    
    ⠿ Container redis-server        Running                                   0.0s
    
    ⠿ Container mariadb             Running                                   0.0s
    
    ⠿ Container mariadb-phpmyadmin  Running                                   0.0s
    
## 4.check all containers

    docker ps -a
   
Result:

    CONTAINER ID   IMAGE                   COMMAND                  CREATED        STATUS                  PORTS                    NAMES
    
    1cceb4f8282c   phpmyadmin/phpmyadmin   "/docker-entrypoint.…"   38 hours ago   Up 16 minutes           0.0.0.0:8001->80/tcp     mariadb-phpmyadmin
    
    56954e6e68da   mariadb:10.3            "docker-entrypoint.s…"   38 hours ago   Up 16 minutes           0.0.0.0:3307->3306/tcp   mariadb
    
    cfd69d093440   redis:4.0               "docker-entrypoint.s…"   38 hours ago   Up 16 minutes           0.0.0.0:6380->6379/tcp   redis-server
    
## 5. Enter the website according to the port information

    localhost:8001
    
## 6.My task vidio link:https://youtu.be/vosWh4eSCRQ![image](https://user-images.githubusercontent.com/96793141/148740249-6a143798-da27-4172-841f-33a3c7eb5dc0.png)

    

    
    

 

    


