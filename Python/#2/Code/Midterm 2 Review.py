def revList(ls):
    if len(ls) == 0:
        return ls
    else:
        return revList(ls[1:]) + [ls[0]]

print(revList([1,2,3,4,5]))


