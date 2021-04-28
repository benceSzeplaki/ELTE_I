--7. Házi feladat:
import Data.List
--1. Collatz-sejtés:

collatzkovetkezo :: Int -> Int
collatzkovetkezo 1 = 1
collatzkovetkezo n =
  if (mod n 2 == 0)
    then (n `div` 2)
    else (3 * n + 1)
collatz :: Int -> [Int]
collatz n =
  if n == 1
    then [1]
    else [n] ++ collatz (collatzkovetkezo n)

--2. Elem előfordulásainak száma:

count :: Int -> [Int] -> Int
count x [] = 0
count x (y:ys)
    | x == y = 1 + (count x ys)
    | otherwise = count x ys

--3. Sokszorosítás: 

replicate' :: Int -> Int -> [Int]   
replicate' a b 
    | a <= 0    = []  
    | otherwise = b:replicate' (a-1) b

--4. Elem törlése:

remove :: Int -> [Int] -> [Int]
remove n [] = []
remove n [m] |n == head[m]=[]
			 |otherwise = [b]
remove n (x:xs) | n == x =(xs)
				| otherwise = ( x : remove n (xs))

--5. Összes elem törlése: 

removeALL :: Int -> [Int] -> [Int]
removeALL _ []     = []
removeALL x (y:ys) 
					| x == y    = removeALL x ys    
                	| otherwise = y : removeALL x ys

--6.Listák különbsége:

difference :: [Int] -> [Int] -> [Int]
[] `difference` (x:xs) = []
(x:xs) `difference` (y:ys) = (x:xs) \\ (y:ys)

--7.Ismétlődő szakaszok eltávolítása:

removeRepetitions :: [Int] -> [Int]
removeRepetitions [] = []
removeRepetitions [x] = [x]
removeRepetitions [x,y] | x == y = [x]
						| otherwise = [x,y]
removeRepetitions (x:y:xs) 
    					| x == y = removeRepetitions (x:xs)
    					| otherwise = x : removeRepetitions xs
