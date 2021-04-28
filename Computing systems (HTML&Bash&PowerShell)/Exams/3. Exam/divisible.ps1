[Int]$a=$args[0]
[Int]$b=$args[1]
[Int]$c=$args[2]
 
$x=$b-$c

if($x % $a -eq 0)
{
    Write-Host "Divisible"
}
else
{
    Write-Host "Not divisible"
}
