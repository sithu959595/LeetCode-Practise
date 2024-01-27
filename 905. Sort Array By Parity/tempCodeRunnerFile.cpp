while(left<right){
        cout<<left<<","<<right<<"/";
        if(nums[left]%2!=0){ //left is odd
          fOdd=true;
        }
        else{
          left++;
        }

        if(nums[right]%2==0){ //right is even
          fEven=true;
        }
        else{
          right--;
        }

        //switch if neccessary
        if(fEven && fOdd){
          int temp=nums[left];
          nums[left]=nums[right];
          nums[right]=temp;
          fOdd=false;
          fEven=false;
          left++;
          right--;
        }
      }