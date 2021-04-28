import Data.List
import Data.Char
--1. Feladat:
extract :: (Int, Int) -> (Int, Int) -> (Int, Int)
extract (a,b) (x,y) = (a-x, b-y)

--2. Feladat:
hasDivisibleNum :: Integral i => [i] -> i -> Bool
hasDivisibleNum [] _ = False
hasDivisibleNum [x] y | mod x y == 0 = True
                      | otherwise = False
hasDivisibleNum (x:xs) y |mod x y == 0 = True
                         |otherwise = hasDivisibleNum xs y

--3. Feladat:
caseSwap :: Char -> Char
caseSwap x | isLower x == True = toUpper x
           | isUpper x == True = toLower x
           | otherwise = x

--4. Feladat:
semifactor :: Integer -> Integer
semifactor 0 = 1
semifactor 1 = 1
semifactor x = x * semifactor (x-2)

--5. Feladat:
functionZip :: [a] -> [(a -> b)] -> [b]
functionZip [] [] = []
functionZip [] (x:xs) = []
functionZip (x:xs) [] = []
functionZip (x:xs) (y:ys) = map (y) [x] ++ functionZip xs ys 

--6. Feladat:
notEmpity :: [[a]] -> Int
notEmpity [] = 0
notEmpity [[]] = 0
notEmpity [x] = 1
notEmpity (x:xs) = 1

countNonEmpties :: [[a]] -> Int
countNonEmpties [] = 0
countNonEmpties [[]] = 0
countNonEmpties [[x]] = 1
countNonEmpties (x:xs) | notEmpity [x] == 1 = 1 + countNonEmpties xs
                       | otherwise = countNonEmpties xs

--7. Feladat:
combine :: [a] -> [(a,a)]
combine [] = []
combine [x] = []

--8. Feladat:
ap2Maybe :: (a -> b -> c) -> (Maybe a -> Maybe b -> Maybe c)
ap2Maybe x Nothing y = Nothing 
ap2Maybe x y Nothing = Nothing  
ap2Maybe x (Just y) (Just z) = Just (x y z)

--9. Feladat:
--10. Feladat:
reverseWords :: String -> String
reverseWords "" = ""
reverseWords [x] = [x]
reverseWords (x:xs) = unwords $ map reverse (words (x:xs))

--11. Feladat:
--12. Feladat:
--13. Feladat:
--14. Feladat:
type Forint = Double
type Euro = Double
data Currency = Forint Double | Euro Double
 deriving (Eq, Show)

swapCurrency :: Currency -> Currency
swapCurrency (Forint x) = (Euro (x / 360))
swapCurrency (Euro x ) = (Forint (x * 360))
--15. Feladat:
type Transactions = [Currency]

sortedTransactions :: Transactions -> Transactions
sortedTransactions [] = []
--sortedTransactions (x:xs) 
