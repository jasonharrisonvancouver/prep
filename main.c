//
//  main.c
//  FizzBussJasonHarrison
//
//  Created by jason harrison on 2018-12-28.
//  Copyright © 2018 jason harrison. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for(int i = 1; i <= 100; i++){
        if(((i % 3) == 0) && (i % 5 == 0)){
            printf("FizzBuzz");
            
        }else if((i%3) == 0){
            printf("Fizz");
        }else if((i%5) ==0){
            printf("Buzz");
        }else{
            printf("%d", i);
        }
        
    }
    
    
    return 0;
}
