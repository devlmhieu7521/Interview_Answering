def missingNum(arr):
    n = len(arr)
    total_to_n = (n*(n+1))/2
    sum_in_array = sum(arr)
    return total_to_n - sum_in_array
if __name__ ==  "__main__":
    arr = [0,2,3,4]
    print(missingNum(arr))