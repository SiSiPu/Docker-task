version: '2.3'

services:
  mysql:
    restart: always
    image: mariadb:10.3
    container_name: mariadb
    ports:
      - "3307:3306"
    volumes:
      - ./store/:/var/lib/mysql
    mem_limit: 512m
    networks:
      - mysqlnetwork
    environment:
      - MYSQL_ROOT_PASSWORD=root
      - MYSQL_DATABASE=local
      - MYSQL_USER=root
      - MYSQL_PASSWORD=root
      - PMA_ARBITRARY=1
      - PMA_HOST=mysql
      - PMA_PORT=3306
      - PMA_USER=root
      - PMA_PASSWORD=root

  mysql-admin:
    restart: always
    image: phpmyadmin/phpmyadmin
    container_name: mariadb-phpmyadmin
    ports:
      - "8001:80"
    mem_limit: 512m
    networks:
      - mysqlnetwork
    depends_on:
      - mysql
    environment:
      PMA_HOST: mysql
      PMA_PORT: 3306
      PMA_USER: root
      PMA_PASSWORD: root

