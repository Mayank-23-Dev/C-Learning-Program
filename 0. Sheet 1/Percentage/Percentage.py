def per():
    a=float(input("Enter the Maximum Marks Anyone can achieve-:"))
    b=float(input("Enter the Total Marks You achieved-:"))
    c=b*100/a
    if c>100:
        print("May be You have given the incorrect Values.Pls enter the Value carefully.")
    else:
        print("The Percentage achieved is-:",c)
    z=input("Do you want to Run again(y/n)-:")
    if z=="y":
        per()
    elif z=="Y":
        per()
    else:
        print("Thanks for the Visit")
per()
    
