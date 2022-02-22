def getMedian(A,B):
    n = len(A)
    m = len(B)
    i = j = 0
    before_med = med = 0
    half_length = ((n+m)//2) + 1
    for count in range(0,half_length):
        before_med = med
        if i != n and j != m:
            if A[i] > B[j]:
                med = B[j]
                j+=1
            else:
                med = A[i]
                i+=1
        elif i < n:
            med = A[i]
            i+=1
        else: 
            med = B[j]
            j+=1
    if((n+m) % 2 == 0):
        result = (med+before_med)/2
    else:
        result = med
    return result
if __name__ == "__main__":
    A = [1]
    B = [1,2,10]
    print(getMedian(A,B))
                


