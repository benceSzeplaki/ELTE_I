[Int]$max = $args[0]
[Int]$current = 1
[Int]$a = 2
[Bool]$divisor = 1
for($i = 2; $i -lt $max; $i++)
{
    for($j = 2; $j -lt $current; $j++){if($a % $j -eq 0){$divisor = 0}}
    $current++
    $a++
    if($divisor -eq 1) {Write-Host $current}
    $divisor = 1
}
