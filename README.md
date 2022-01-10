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
    
    

 

    


