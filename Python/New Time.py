#!/usr/bin/python 
# -*- coding: utf-8 -*-

import time
 
t = time.localtime(time.time())
localtime = time.asctime(t)
str = "Time:" + time.asctime(t)
print("Hello world!");
print(str);
