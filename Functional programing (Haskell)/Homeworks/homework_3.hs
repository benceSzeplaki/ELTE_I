--3. hazi feladat:
--1. Tükrözés:

mirrorX :: (Int,Int) -> (Int,Int)
mirrorX (x , y) = ( x , -1 * y )

--2. Számjegyek:

isDigit :: Char -> Bool
isDigit '0' = True
isDigit '1' = True
isDigit '2' = True
isDigit '3' = True
isDigit '4' = True
isDigit '5' = True
isDigit '6' = True
isDigit '7' = True
isDigit '8' = True
isDigit '9' = True
isDigit _ = False

--3. Pont egy tengelyen:

onAxis :: (Double,Double) -> Bool
onAxis (0,_) = True
onAxis (_,0) = True
onAxis (_,_) = False
