$file = Get-Content $args[0]
[int]$num = $args[1]
[int]$sum = 0
for($i = 0; $i -lt $file.Length; $i++)
{
    if([int]$file[$i] -gt $num)
    {
        $sum = $sum + $file[$i]
    }
}
Write-Host $sum
Write-Output $sum > tmp.txt
Write-Output (Get-Content tmp.txt) >> $args[0]
Remove-Item tmp.txt
