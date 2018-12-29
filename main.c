//
//  main.c
//  User String Length Calculator
//
//  Created by jason harrison on 2018-12-28.
//  Copyright © 2018 jason harrison. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    char input[128];
    
    printf("Type something and press return: ");
    scanf("%s", input);
    printf("\nYou typed: %s, which has %d characters!", input, strlen(input));
    
    

    return 0;
}
