-- 4. Házi feladat:
--1. Első két elem:

take2 :: [Int] -> [Int]
take2 [] = []
take2 [x] = [x]
take2 (x:y:xs) = [x,y]

--2. Összeg:

sum3 :: [Int] -> Int
sum3 [] = 0
sum3 [x] = x
sum3 [x,y] = x + y
sum3 (x : y : z : xs) = x + y + z

--3. Biztonságos fejelem:

safeHead :: Int -> [Int] -> Int
safeHead y (x:xs) = x
safeHead y [] = y

--4. Érdekes minta:

f :: [[Int]] -> Bool
f [[x],[ ]] = False
f [[x],_] = True
f [[ ],_] = False
f [ ] = False
f (x:xs) = False 
