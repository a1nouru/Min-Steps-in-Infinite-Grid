int Solution::coverPoints(vector<int> &A, vector<int> &B) {
   int steps = 0, dx, dy, i = 0;

    if(A.size() <=1 || B.size() <= 1 || A.size() != B.size()){
        return 0;
    }

    do{
        dx = abs(A[i] - A[i+1]);
        dy = abs(B[i] - B[i+1]);

        while( dx != 0 && dy != 0 ){
            dx--;
            dy--;
            steps++;
        }
        if(dx == 0){
            steps = steps + dy;
        }
        else{
            steps = steps + dx;
        }
        i++;
    }while(i < A.size()-1);

    return steps;

}
    


