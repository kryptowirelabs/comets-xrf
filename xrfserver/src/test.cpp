/********* Sample code generated by the curl command line tool **********
 * All curl_easy_setopt() options are documented at:
 * https://curl.haxx.se/libcurl/c/curl_easy_setopt.html
 ************************************************************************/
#include <curl/curl.h>

int main(int argc, char *argv[])
{
  CURLcode ret;
  CURL *hnd;
  struct curl_slist *slist1;

  slist1 = NULL;
  slist1 = curl_slist_append(slist1, "Accept: application/json");
  slist1 = curl_slist_append(slist1, "Authorization: Bearer eyJhbGciOiJSUzI1NiIsImtpZCI6IjEwMjY5OTMwMiIsInR5cCI6IkpXVCJ9.eyJhdWQiOiI5YzcxZDI5MC0wYzgyLTQ5ZTMtYTllMS1kZDhhNjM4NGRiNmQiLCJleHAiOiIxMDAwIiwiaXNzIjoibnNzbC54cmYiLCJzY29wZSI6IndyaXRlIiwic3ViIjoiOWM3MWQyOTAtMGM4Mi00OWUzLWE5ZTEtZGQ4YTYzODRkYjZkIn0.NZdj2onMB-PqZ9pxEPYQzpt7B0pZsjcrxZcQGcGvjkU2ONa9DZdF10lyNIVND29OOnhVQMbilO8YWndiZRNzyeI_eZFvTP_MvUKsxEYrUFxgSsXe7nUGIohzGgr0zhb6_r_YMN8mqPsba09rL56XHbfr6kG2Qh4Yubm67Zwc-2JNPEriq9763Uwxwe5PpYEKZNBNwDFb3viCeLajyK9ZnHmzC3yZdIEgOomaYztBGzwNtZRV0QfW5__7tBwJXfi8FYJ1Uvsj75s2PTkq_U3MzzS0YgsdGqgJIzkBF8vGg6C1U0wRpSx-Az80YY904szkJgDoRA5SFUKbYGN_1cPBvO8p2jMQILbmSsWXKW6-GsFRJBQdAKYWiBrqo0uZnO2PBM8TKTCWydCS0bE9cxuxPEAoFWCjxSA6ziRQnkG7eIS2Df_7j25gzlMvUb-QYTL6DEx1wyTrsnqTC2puw4RsCfTV2bgsXWMcSXjmoJqvc_hb0bG-V3kJT8pSZmhXDLNr0CvvXPjtcUeV5cWLlArWirGRZLksq4bjDQTz2bUZ_mopwKMt14ddS_B08zPLQ0Kv7oZbAfPrAT0p0R1otbUI6ctRWDEeN_Gr9HMaM4hPKTGcnGjrDSGqef62HBm4dVXp1RxeRgziBo1efuIgxIfvP7rSwHYwJJYwC_k8WFybEtI");

  hnd = curl_easy_init();
  curl_easy_setopt(hnd, CURLOPT_BUFFERSIZE, 102400L);
  curl_easy_setopt(hnd, CURLOPT_URL, "http://127.0.0.1:9095/serv/test");
  curl_easy_setopt(hnd, CURLOPT_NOPROGRESS, 1L);
  curl_easy_setopt(hnd, CURLOPT_POSTFIELDS, "{\"Key\":\"Value\"}");
  curl_easy_setopt(hnd, CURLOPT_POSTFIELDSIZE_LARGE, (curl_off_t)15);
  curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, slist1);
  curl_easy_setopt(hnd, CURLOPT_USERAGENT, "curl/7.68.0");
  curl_easy_setopt(hnd, CURLOPT_MAXREDIRS, 50L);
  curl_easy_setopt(hnd, CURLOPT_HTTP_VERSION, (long)CURL_HTTP_VERSION_2TLS);
  curl_easy_setopt(hnd, CURLOPT_SSH_KNOWNHOSTS, "/home/nsslm/.ssh/known_hosts");
  curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "POST");
  curl_easy_setopt(hnd, CURLOPT_FTP_SKIP_PASV_IP, 1L);
  curl_easy_setopt(hnd, CURLOPT_TCP_KEEPALIVE, 1L);

  /* Here is a list of options the curl code used that cannot get generated
     as source easily. You may select to either not use them or implement
     them yourself.

  CURLOPT_WRITEDATA set to a objectpointer
  CURLOPT_INTERLEAVEDATA set to a objectpointer
  CURLOPT_WRITEFUNCTION set to a functionpointer
  CURLOPT_READDATA set to a objectpointer
  CURLOPT_READFUNCTION set to a functionpointer
  CURLOPT_SEEKDATA set to a objectpointer
  CURLOPT_SEEKFUNCTION set to a functionpointer
  CURLOPT_ERRORBUFFER set to a objectpointer
  CURLOPT_STDERR set to a objectpointer
  CURLOPT_HEADERFUNCTION set to a functionpointer
  CURLOPT_HEADERDATA set to a objectpointer

  */

  ret = curl_easy_perform(hnd);

  curl_easy_cleanup(hnd);
  hnd = NULL;
  curl_slist_free_all(slist1);
  slist1 = NULL;

  return (int)ret;
}
/**** End of sample code ****/
