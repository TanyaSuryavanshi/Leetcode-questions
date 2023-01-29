/*If we consider each ring of data as a larger iteration, we can notice that each successive ring shortens in the length of its side by 2. 
This means that we will need to perform this process to a maximum depth of floor(n / 2) times. We can use floor here because the center cell of an 
odd-sided matrix will not need to be swapped.
For each ring, we'll need to perform a number of iterations equal to the length of the side minus 1, since we will have already swapped the far corner
as our first iteration. As noticed earlier, the length of the side of a ring is shortened by 2 for each layer of depth we've achieved (len = n - 2 * i - 1).
Inside the nested for loops, we need to perform a four-way swap between the linked cells. In order to save on some processing, we can store the value of 
the opposite side of i (opp = n - 1 - i) */
class Solution {
public:
    void rotate(vector<vector<int>>& M) {
        int n = M.size(), depth = n / 2;
        for (int i = 0; i < depth; i++) {
            int len = n - 2 * i - 1, opp = n - 1 - i;
            for (int j = 0; j < len; j++) {
                int temp = M[i][i+j];
                M[i][i+j] = M[opp-j][i];
                M[opp-j][i] = M[opp][opp-j];
                M[opp][opp-j] = M[i+j][opp];
                M[i+j][opp] = temp;
            }
        }
    }
};
