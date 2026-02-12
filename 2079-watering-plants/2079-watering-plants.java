class Solution {
    public int wateringPlants(int[] plants, int capacity) {
        int  i=0,icap=capacity,step=0;
        while(i<plants.length){
            if(plants[i]<=icap){
                icap-=plants[i];
                plants[i]=0;
                step++;
                i++;
            }
            else{
                step+=(i*2);
                icap=capacity;
            }
        }
        return step;
    }
}