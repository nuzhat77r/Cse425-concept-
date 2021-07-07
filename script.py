import csv
import time
import operator
start = time.time()
def menu():
        
    print("Press 1 to Search by Time")
    print("Press 2 to Search by Account")
    print("Press 3 to Search by Code")
    print("Press 4 to Search by Country")
    print("Press 5 to Search by Type")
    print("Press 6 to Search by Value")
    print("Press 7 to Search by Status")

    print("Press 8 to Sort by Country")
    
    choice = input()

    if choice == "1":  
        timeinput = input("Enter Time:")
        with open('gsquarterly_december-2020-revised.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if timeinput == row[1]: 
                    print(row)

    if choice == "2":  
        accountinput = input("Enter Account:")
        with open('gsquarterly_december-2020-revised.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if accountinput == row[2]: 
                    print(row)

    if choice == "3":  
        codeinput = input("Enter Code:")
        with open('gsquarterly_december-2020-revised.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if codeinput == row[3]: 
                    print(row)
    
    if choice == "4":  
        countryinput = input("Enter Country:")
        with open('gsquarterly_december-2020-revised.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if countryinput == row[4]: # if the username shall be on column 3 (-> index 2)
                    print(row)

    if choice == "5":  
        typeinput = input("Enter Type:")
        with open('gsquarterly_december-2020-revised.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if typeinput == row[5]: 
                    print(row)

    
    if choice == "6":  
        valueinput = input("Enter Value:")
        with open('gsquarterly_december-2020-revised.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if valueinput == row[6]: 
                    print(row)

    
    if choice == "7":  
        statusinput = input("Enter Status:")
        with open('gsquarterly_december-2020-revised.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if statusinput == row[7]: 
                    print(row)

    if choice == "8":
        with open('gsquarterly_december-2020-revised.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            sort=sorted(reader,key=operator.itemgetter(4))
            for row in sort: 
                print(row)

menu()
end = time.time()
time_taken=end-start
print('\nTime Taken'+' '+str(time_taken))
                        
