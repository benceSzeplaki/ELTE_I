$filename = ".\test.txt"
$numberofargs = $args.count
if( $numberofargs -eq 2)
{
    $nameIn = $args
    Get-Content $filename | ForEach-Object {$_.split(":")[0]} | Select-String -Pattern $nameIn > temp.txt
    Get-Content .\temp.txt | Where-Object {$_ -ne ""} > temp2.txt
    $name = Get-Content .\temp2.txt
    Get-Content -Path $filename | Select-String -Pattern $args > person.txt
    Get-Content .\person.txt | Where-Object {$_ -ne ""} > .\newPerson.txt
    if ($name -eq $nameIn) 
    {
        $grades = Get-Content .\newPerson.txt | ForEach-Object {$_.split(":")[1]}
        Get-Content .\newPerson.txt | ForEach-Object {$_.split(":")[1]} > grades.txt
        $grades -replace " ","`n" > grades.txt
        Get-Content .\grades.txt | Where-Object {$_ -ne ""} > goodGrades.txt
        $avarage = Get-Content .\goodGrades.txt | Measure-Object -Average | Select-Object -ExpandProperty Average
        Write-Host $nameIn avarage: $avarage
        Remove-Item .\goodGrades.txt
        Remove-Item .\grades.txt
    }
    else 
    {
        Write-Host "No match for given name in the class list."
        $classlist = Get-Content $filename | ForEach-Object {$_.split(":")[0]}
        $classlist -replace "Firstname Lastname","Class list:"
    }
    Remove-Item .\temp.txt
    Remove-Item .\temp2.txt
    Remove-Item .\person.txt
    Remove-Item .\newPerson.txt
}
if ($numberofargs -eq 1 -or $numberofargs -eq 0)
{
    Write-Host "No match for given name in the class list."
    $classlist = Get-Content $filename | ForEach-Object {$_.split(":")[0]}
    $classlist -replace "Firstname Lastname","Class list:"
}