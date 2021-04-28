--8. Hazi feladat:
--1. Elem beszúrás:

insertAt :: Int -> a -> [a] -> [a]
insertAt 0 v xs = v : xs
insertAt n v (x:xs) 
                   |n < 0 = error "hiba"
                   |n > length(x:xs) = error "hiba"
                   |n > 0 = x : (insertAt (n - 1) v xs)

--2. Feladarabolás:

unconcat :: [a] -> [[a]]
unconcat [] = [[]]
unconcat [n] = [[n]]
unconcat [n,m] = [[n],[m]]
unconcat (x:y:xs) = unconcat [x] ++ unconcat [y] ++ unconcat xs

--3. Elemek megcserélése: 

swapElems :: [[a]] -> [[a]]
swapElems [[]] = [[]]
swapElems [[n]] = [[n]]
swapElems [[n,m]] = [[m,n]]
swapElems [(x:y:xs)] = [(y:x:xs)]
swapElems [(x:y:xs),(a:b:as)] = swapElems [(x:y:xs)] ++ swapElems [(a:b:as)]

--4. Közbeszórás:

intersperse :: a -> [a] -> [a]
intersperse x (y:zs) = y : concat [[x,z] | z <- zs]

--5 Kaarakter keresése:

breakOn :: [a] -> [a] -> ([a], [a])
breakOn a [] = ([], [])