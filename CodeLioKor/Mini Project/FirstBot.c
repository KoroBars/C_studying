#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

//Very bad function
//void sleep(long long t){
//    t *= 1000000000;
//    while(t > 0){
//        t -= 1;
//    }
//}

int main(){
    char text[100];
    char url_template[] = "curl -L \"https://api.telegram.org/bot%s/sendMessage?text=%s&chat_id=%s\"";
    char url[224];
    char api_key[100];
    char chat_id[32];

    printf("Enter your api key:\n");
    scanf("%s", &api_key);

    printf("Enter your chat id:\n");
    scanf("%s", chat_id);

    printf("Enter your message:\n");
    scanf("%s", &text);

    int n;
    printf("Enter amount of messages, that you want to send:\n");
    scanf("%d", &n);

    sprintf(url, url_template, api_key, text, chat_id);

    for (int i = 0; i < n; i++){
        system(url);
        Sleep(2000);
    }

    return 0;
}