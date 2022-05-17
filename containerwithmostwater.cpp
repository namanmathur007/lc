class Solution {
public:
    int maxArea(vector<int>& height) {
         int i=0;
			int j = height.size()-1;
            int a =0;
            while(i<j){
                a = max(min(height[i],height[j])*(j-i),a);
                if(height[i]<height[j]){
                    i++;
                }
                else{
                    j--;
                }
            }
            return a;
        }
};