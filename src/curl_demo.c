//
// Created by root on 2023/8/1.
//
#include <stdio.h>
#include "curl/curl.h"

#pragma comment ( lib, "libcurl.lib" )

int main(void)
{
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL,"http://www.baidu.com");
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }

    printf("%d \n", curl);

    system("pause");
    return 0;
}