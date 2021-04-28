--11. hazi feladat:
--1. Pont eltolása:

type X = Int
type Y = Int 
data Point = P X Y
 deriving (Eq, Show)

translate :: (Int, Int) -> Point -> Point
translate (a , b) (P x y) = (P (x+a) (y+b))

--2. Irányok:

data Direction = L | R
   deriving (Eq, Show)

mirror :: Direction -> Direction
mirror x 
        |x == L = R
        |otherwise = L

numberOfLs :: [Direction] -> Int
numberOfLs [] = 0
numberOfLs [x] 
              | x == L = 1
              |otherwise = 0
numberOfLs (x:xs) = numberOfLs [x] + numberOfLs xs

--3. Időpontok:

type Hour = Int
type Minute = Int
data Time = T Hour Minute
    deriving (Eq,Show)
data USTime = AM Hour Minute | PM Hour Minute
    deriving (Eq,Show)

isEarlier :: Time -> Time -> Bool
T x y `isEarlier` T a b 
                       | x == a && y == b = False
                       | x < a = True
                       | x == a && y < b = True
                       |otherwise = False

isBetween :: Time -> Time -> Time -> Bool
isBetween (T a b) (T x y) (T i j) 
  |(T x y `isEarlier` T i j == True) && (T x y `isEarlier` T a b == False) = True
  |otherwise = False

eqTime :: Time -> Time -> Bool
eqTime (T h m) (T h' m') = h == h' && m == m'

usTimeToTime :: USTime -> Time
usTimeToTime (AM x y) |x == 12 = T 00 y
                      |otherwise = T x y 
usTimeToTime (PM x y) |x < 12 = T (12 + x) y  
                      |otherwise = T x y

timeToUSTime :: Time -> USTime
timeToUSTime (T x y) 
                     | x == 12 = (PM x y)
                     | x == 0 = (AM 12 y)
                     | x < 12 = (AM x y)
                     | x > 12 = (PM (x-12) y)

--4. Hőmérsékletek:

type Temp = Int
data Temperature = Daytime Temp | Night Temp
  deriving (Eq, Show, Ord)

isDaytime :: Temperature -> Bool
isDaytime (Daytime _ ) = True
isDaytime (Night _ ) = False

showOnlyTemp :: [Temperature] -> [Temp]
showOnlyTemp [(Daytime x)] = [x]
showOnlyTemp [(Night y)] = [y]
showOnlyTemp (x:xs) = showOnlyTemp [x] ++ showOnlyTemp xs

highestDaytime :: [Temperature] -> Int
highestDaytime [] = error "hiba"
highestDaytime (x:xs) = maximum (showOnlyTemp (x:xs))