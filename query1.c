SELECT ROUND(TRUNC(MOD(1600,10),-1),2) as "result"
FROM dual;
MOD(1600,10)---> 0
TRUNC(0,-1)----> 0
ROUND(0,2)-----> 0
