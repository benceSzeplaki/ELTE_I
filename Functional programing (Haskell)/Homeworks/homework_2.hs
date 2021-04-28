--2. hazi feladat:
--1. Helyvektor:

stretch :: (Double, Double) -> Double -> (Double,Double)
stretch (x , y) z = (x * z, y * z)

--2. Dominók:

matches :: ( Int , Int ) -> ( Int , Int ) -> Bool
matches ( a , b ) ( c , d ) = a == c || b == c || a == d || b == d
