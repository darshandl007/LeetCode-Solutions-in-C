double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
int arr[nums1Size + nums2Size];
int k=0;
for(int i=0;i<nums1Size;i++){
    arr[k++]=nums1[i];
}

for(int i=0;i<nums2Size;i++){
     arr[k++]=nums2[i];
}
for(int i=0;i<k;i++){
    for(int j=0;j<k-i-1;j++){
        if(arr[j] > arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

float res;
if(k%2==1){
    res=arr[k/2];
}else{
    res=(arr[k/2-1] +arr[k/2])/2.0;
}
return res;



}