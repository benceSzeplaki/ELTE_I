--10. hazi feladat
import Data.List
--1. Kitömörítés:

decompress :: [(a,Int)] -> [a] 
decompress [] = []
decompress x = concat ( map (\(z,y) -> replicate y z) x)

--2. 1, 31, 331, ...:

funnyNumbers :: [Integer]
funnyNumbers = iterate ((+21).(*10)) 1

--3. Minimumok maximuma:

maximumOfMinimums :: (Ord a, Foldable t) => [t a] -> a
maximumOfMinimums x = maximum (map (minimum) x)

--4. Ismétlődő elemek:

repeated :: Ord a => [a] -> [a]
repeated = map head . filter ((>1).length) . group . sort

--5. Prelude.until:

until' :: (a -> Bool) -> (a -> a) -> a -> a
until' f p = head . filter (f) . iterate p