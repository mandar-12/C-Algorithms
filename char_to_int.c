#include <stdio.h>

int char_to_int(char c){
    if(c > 0){
        if(c % 256 < 128){
            return (c % 128);
        }else{
            return (-128 + (c % 128));
        }
    }else{
        return (c % 256);
    }
}

int main() {
    char character = -756;
    printf("%d %d", character, char_to_int(character));
    return 0;
}

