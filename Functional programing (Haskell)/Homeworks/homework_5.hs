--5. hazi feladat:
--1. Hegyek-völgyek:

mountainsValleys :: [Int]
mountainsValleys = concat [[n-n..n] ++ [n-1,n-2.. -n] ++ [-n+1..n-n-1] | n <- [1..]]

--2. Logikai kifejezés:

values :: [(Bool,Bool,Bool)]
values = [ (a , b , c) | a <- [True,False], b <-[True, False], c<-[True, False], (a || (b && c)) /= ((a || b) && c) ]

isPrime :: Int -> Bool
isPrime n = length [d | d <- [1..n], n `mod` d == 0] == 2

--3. Prímek:

largestP :: Int
largestP = last [d | d <- [1..20], isPrime (2^d+1) == True]

--Pluszpontért:

-- + Prímek végtelen listája:

primes :: [Int]
primes = [ d | d <- [2..], isPrime d == True]

-- + Oldjuk meg az "1, 2, 2, 3, 3, 3 ..." feladatot a concat függvény felhasználásával!

interesting' :: [Int]
interesting' = concat [[x] ++ [] | x <- [1..], y <- [1..x]]

-- + Állítsuk elő az [1,1,2,1,2,3,1,2,3,4,…] listát!

exciting :: [Integer]
exciting = concat [[1..d] | d<-[1..]]

-- + Az összes természetes számpár
-- + Soroljuk fel a természetes számpárokat: [(0,0),(0,1),(1,0),(0,2),(1,1),(2,0), …]!

naturalNumberPairs :: [(Int,Int)]
naturalNumberPairs = [(b, a - b) | a <- [0..], b <- [0..a]]
