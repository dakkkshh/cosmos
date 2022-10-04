There's a special property of bitwise AND. Bitwise AND of two numbers is strictly less than those two numbers.  
```
(a&b)<a and (a&b)<b
```
For example, bitwise AND of 5 and 6 is 4.  
or bitwise AND of 5 and 7 is 5.  
So the maximum bitwise AND of the array is the maximum element of the array. Hence we need to just find the maximum length of the subarray containing the maximum element.  