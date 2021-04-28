--6. Hazi feladat:
--1. Sorozat:

nthElem :: Int -> Double
nthElem 0 = 1
nthElem 1 = 3
nthElem x = nthElem (x-1) + sqrt(nthElem(x-2))

--2. Melyik igaz?:

allTrue :: [Bool] -> Bool
allTrue [] = True
allTrue (x:xs)
    | x == False = False
    | otherwise = allTrue xs

--3. Összefésülés:

merge :: [Int] -> [Int] -> [Int]
xs `merge` [] = xs
[] `merge` ys = ys
(x:xs) `merge` (y:ys) = x : y : xs `merge` ys

--4. Rendezett összefűzés:

sortMerge :: [Int] -> [Int] -> [Int]
sortMerge [] [] = []
sortMerge (x:xs) [] = x : sortMerge xs []
sortMerge [] (y:ys) = y : sortMerge [] ys
sortMerge (x:xs) (y:ys) 
	|y<x = y : sortMerge (x:xs) ys
	|x<y = x : sortMerge xs (y:ys)