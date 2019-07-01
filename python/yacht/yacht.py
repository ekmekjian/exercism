# -*- coding: utf-8 -*-
"""
This exercise stub and the test suite contain several enumerated constants.

Since Python 2 does not have the enum module, the idiomatic way to write
enumerated constants has traditionally been a NAME assigned to an arbitrary,
but unique value. An integer is traditionally used because it’s memory
efficient.
It is a common practice to export both constants and functions that work with
those constants (ex. the constants in the os, subprocess and re modules).

You can learn more here: https://en.wikipedia.org/wiki/Enumerated_type
"""


# Score categories.
# Change the values as you see fit.
YACHT = 50 #if all dice are the same side
ONES = 1 #any combination
TWOS = 2 #any combination
THREES = 3 #any combination
FOURS = 4 # any combination
FIVES = 5 #any combination
SIXES = 6 #any combination
FULL_HOUSE = None #total of 2 of the side and 3 of the same side
FOUR_OF_A_KIND = None #Total of the 4 with the same side
LITTLE_STRAIGHT = 30 # if order is 1-2-3-4-5
BIG_STRAIGHT = 30 # if order is 2-3-4-5-6
CHOICE = None # Sum of the edice

def yacht(dice):
    temp = dice[0]
    infull = 0
    for i in dice:
        if temp != i:
            return 0
        infull+=1
    if infull==5:    
        return CD ..YACHT

def ones(dice,num):
    score = 0
    for i in dice:
        if(i == num):
            score+=num
    return score

def fullhouse(dice):
    dice.sort()
    score = 0
    threeside = False
    twoside = False
    for i in dice:
        count = {}
        count[i]=0
        for j in dice:
            temp=i
            if(temp==j):
                count[temp]+=1
    for key,value in count.iteritems():
        if value ==3:
            score += (key*3)
            threeside = True
        if value == 2:
            score += (key*2)
            twoside = True
    if(threeside == True and twoside == True):
        return score
    else:
        return 0

def littlestraight(dice):
    dice.sort()
    if dice[0] != 1:
        return 0
    for i in range(len(dice)):
        if (i+1) != len(dice):
            if((dice[i]+1)!=dice[i+1]):
                return 0;
        
    return LITTLE_STRAIGHT

def bigstraight(dice):
    dice.sort()
    if dice[0]!=2:
        return 0
    for i in range(len(dice)):
        if (i+1) != len(dice):
            if((dice[i]+1)!=dice[i+1]):
                return 0;
    return BIG_STRAIGHT

def choice(dice):
    sum = 0
    for i in dice:
        sum += i
    return sum

def fourofakind(dice):
    for i in dice:
        infull=0
        for j in dice:
            if(i==j):
                infull+=1
            if(infull ==4):
                return FOUR_OF_A_KIND
    return 0
def score(dice, category):
    score = 0
    option = {
    'yacht':yacht(dice),
    'ones':ones(dice,1),
    'twos':ones(dice,2),
    'threes':ones(dice,3),
    'fours':ones(dice,4),
    'fives':ones(dice,5),
    'sixes': ones(dice,6),
    'full_house':fullhouse(dice),
    'four_of_a_kind':fourofakind(dice),
    'little_straight':littlestraight(dice),
    'big_straight':bigstraight(dice),
    'choice':choice(dice)}
    score = option.get(category)
    return score

print score([2,5,2,5,5],"full_house")