def stock_list(listOfArt, listOfCat):
    r=""
    for i in listOfCat:
        sum=0
        for j in listOfArt:
            if j.find(i)==0:
                sum+=int(j[j.find(" ")+1:])
        r+=f"({i}:{sum}) - "
    return r[:-2]

b = ["ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600"]
c = ["A", "B"]
print(stock_list(b,c))