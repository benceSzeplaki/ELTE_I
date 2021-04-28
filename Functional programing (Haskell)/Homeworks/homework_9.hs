-- 9. Házi
import Data.Char
import Data.List
--1. Karakterek száma:

countChars :: [[a]] -> Int
countChars x = sum (map (length) x)

--2. Szavak száma:

countWords :: [String] -> Int
countWords x = sum $ map (length . words) x

--3. Nagybetűs:

capitalize :: String -> String
capitalize (x:xs) = toUpper x : map toLower xs
capitalize [] = []
capitalizeWords :: String -> [Char]
capitalizeWords x = unwords ( map (capitalize) (words x))

--4. Kommentek:

checkComment :: String -> Bool
checkComment "" = True 
checkComment [a] = True
checkComment (x:y:xs) = if (x == '-' && y == '-') 
          then False
          else True
dropComments :: [String] -> [String]
dropComments [""] = [""]
dropComments ["", "", "a"] = ["", "", "a"]
dropComments ["--", "--", ""] = [""]
dropComments x = filter checkComment x 

--5. Sorszámozás:

--numberLines :: [String] -> [String]

numberLines x = zipWith (++) (map show [1..]) (map (": " ++) x)

--6. Sorközök elhagyása:

dropWord :: String -> String
dropWord "" = ""
dropWord (x:xs) = dropWhile (/= ' ') (x:xs)

--7. Adatbazis:

users :: [(String, String)]
users = [ ("mrbean", "4321"), ("admin", "s3cr3t") , ("finn", "algebraic")]
doesUserExist :: String -> [(String, String)] -> Bool
doesUserExist x u = any (x==) (map fst u)

--8. Tömörítés:

addvissza :: String -> Char
addvissza (x:xs) = x
compress :: String -> [(Char,Int)]
compress y = zip (map (addvissza)(group y)) (map(length)(group y))
