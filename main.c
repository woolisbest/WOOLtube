#include <stdio.h>
#include <curl/curl.h>

size_t w(void *c, size_t s, size_t n, void *p){ return fwrite(c,s,n,stdout); }

int main(){
    CURL *h=curl_easy_init();
    if(h){
        curl_easy_setopt(h,CURLOPT_URL,"https://cdn.jsdelivr.net/gh/woolisbest/WOOLtube@main/main/index.html");
        curl_easy_setopt(h,CURLOPT_WRITEFUNCTION,w);
        curl_easy_perform(h);
        curl_easy_cleanup(h);
    }
}
