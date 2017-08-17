public class Solution {

    /*The idea is: I calculated the stored water at each index a and b in my code. At the start of every loop, I update the current maximum height from left side (that is from A[0,1...a]) and the maximum height from right side(from A[b,b+1...n-1]). if(leftmax<rightmax) then, at least (leftmax-A[a]) water can definitely be stored no matter what happens between [a,b] since we know there is a barrier at the rightside(rightmax>leftmax). On the other side, we cannot store more water than (leftmax-A[a]) at index a since the barrier at left is of height leftmax. So, we know the water that can be stored at index a is exactly (leftmax-A[a]). The same logic applies to the case when (leftmax>rightmax). At each loop we can make a and b one step closer. Thus we can finish it in linear time.

    */

    public int trap(int[] A){

        int a=0;

        int b=A.length-1;

        int max=0;

        int leftmax=0;

        int rightmax=0;

        while(a<=b){

            leftmax=Math.max(leftmax,A[a]);

            rightmax=Math.max(rightmax,A[b]);

            if(leftmax<rightmax){

                max+=(leftmax-A[a]);       // leftmax is smaller than rightmax, so the (leftmax-A[a]) water can be stored

                a++;

            }

            else{

                max+=(rightmax-A[b]);

                b--;

            }

        }

        return max;

    }

}
