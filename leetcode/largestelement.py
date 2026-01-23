def findLargest(arr1):
    largest=arr1[0]
    for i in range(1, len(arr1)):
        if largest<arr1[i]:
            largest=arr1[i]
    return largest

if __name__=="__main__":
    arr1=[2,7,3,1]
    print("largest element in the array is", findLargest(arr1))
