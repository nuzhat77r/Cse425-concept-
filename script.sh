echo "Enter 1 to search by Time:"
echo "Enter 2 to search by Account:"
echo "Enter 3 to search by Code:"
echo "Enter 4 to search by Country:"
echo "Enter 5 to search by Product:"
echo "Enter 6 to search by Value:"
echo "Enter 7 to search by Status:"
echo "Enter 8 to sort by Country:"
read choice

if [ "$choice" -eq 1 ]; then
     echo "Enter Time:"
     read timeinput
     grep "$timeinput" gsquarterly_december-2020-revised.csv
elif [ "$choice" -eq 2 ]; then
     echo "Enter Account:"
     read accountinput
     grep "$accountinput" gsquarterly_december-2020-revised.csv
elif [ "$choice" -eq 3 ]; then
     echo "Enter Code:"
     read codeinput
     grep "$codeinput" gsquarterly_december-2020-revised.csv
elif [ "$choice" -eq 4 ]; then
     echo "Enter Country:"
     read countryinput
     grep "$codeinput" gsquarterly_december-2020-revised.csv
elif [ "$choice" -eq 5 ]; then
     echo "Enter Product:"
     read productinput
     grep "$countryinput" gsquarterly_december-2020-revised.csv
elif [ "$choice" -eq 6 ]; then
     echo "Enter Value:"
     read valueinput
     grep "$valueinput" gsquarterly_december-2020-revised.csv
elif [ "$choice" -eq 7 ]; then
     echo "Enter Status:"
     read statusinput
     grep "$statusinput" gsquarterly_december-2020-revised.csv
elif [ "$choice" -eq 8 ]; then
     sort -t"," -k4 gsquarterly_december-2020-revised.csv

fi    
