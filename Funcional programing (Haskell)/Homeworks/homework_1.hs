--1. hazi feladat:
--1. feladat:

int1 :: (Int)
int1 = 2 * 3 + 8 - 7

int2 :: (Int)
int2 = 1 + 9 - 3 * 1

int3 :: (Int)
int3 = 15 - 11 + 3 * 1 

--2. feladat:

double1 :: (Double)
double1 = (sqrt ((7 - 2) / 2) + 4 ** 5) * 1

double2 :: (Double)
double2 = (double1 / 100) + 14 ** 2 - sqrt(25)

double3 :: (Double)
double3 = (double1 / double2) ** 2 + 4

--3. feladat:

bool1 :: (Bool)
bool1 = (2 < 3) || (4 + 5) <= 9 && not (10 == 20)

bool2 :: (Bool)
bool2 = not (10 == 10) || 10 - 1 > 9 && 56 >= 10

--4. feladat:

divides :: Int -> Int -> Bool
divides x y = mod y x == 0

--5. feladat:

isLeapYear :: Int -> Bool
isLeapYear z = divides 400 z || divides 4 z && divides 100 z == False
