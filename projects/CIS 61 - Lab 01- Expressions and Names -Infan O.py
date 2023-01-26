#Questionn 1
def twenty_twenty_three():
    return 100*20+24-1
#Question 1(part 2)
from operator import add, mul, sub

def twenty_twenty_three_1():
    return add(sub(mul(10,3),7),2000)

#Question 2
from math import pi

def sphere_area(r):
    """
    >>> sphere_area(10)
    1256.6370614359173
    >>> sphere_area(100)
    125663.70614359173
    """
    return 4*pi*r**2
 
def sphere_volume(r):
    """
    >>> sphere_volume(5)
    523.5987755982989
    >>> sphere_volume(15)
    14137.166941154068
    """
    return (4.0/3.0)*pi*r**3

# Lambda expression of qeustion2

sphere_area = lambda r : 4*pi*r**2

sphere_volume = lambda r : (4.0/3.0)*pi*r**3


#Question 3
def wears_jacket_with_if(temp, raining):
    """
    >>> wears_jacket(90, False)
    False
    >>> wears_jacket(40, False)
    True
    >>> wears_jacket(100, True)
    True
    """
    return temp < 60 or raining

    #lambda expression of question 3
    wear_jacket_with_if = lambda temp, raining: temp < 60 or raining


#Question 4

def sumNaturals(n):
    """Sum all the first n natural numbers.
    >>> sumN(3) # 1 + 2 + 3 = 6
    6
    >>> sumN(5) # 1 + 2 + 3 + 4 + 5 = 15
    15
    """
    return n*(n+1)//2

#lambda expression of question 4

sumN = lambda n: n*(n+1)//2


#Question 5
def mod_number(x, y):
    '''Take two parameters, x and y, and return x mod y
    >>> mod_number(100, 2)
    0
    >>> mod_number(6,5)
    1
    >>> mod_number(6,51)
    6
    '''
    return x % y








