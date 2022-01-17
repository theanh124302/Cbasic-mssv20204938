#include<stdio.h>
#include<string.h>
char lps[100];
void longestPrefixSuffix(char p[],int lps[])
{
  for (int i = 1; i < strlen(p); i++) {
    int k = lps[i-1];
    while (k > 0 && p[k] != p[i]) k = lps[k-1];
    if (p[k] == p[i]) lps[i] = k + 1;
    else lps[i] = 0;
  }
}

void kmp(char p[], char t[])
{
  int m=strlen(p);
  int n=strlen(t);
  longestPrefixSuffix(p,lps);
  int start = 0, k = 0;
  while (start <= n - m) {
    while (k < m && t[start + k] == p[k]) k++;
    if (k == m) {
      printf("%d\n",start);
    }
    if (k > 0) {
      start += k - lps[k-1];
      k = lps[k-1];
    } else {
      start++;
    }
  }
}
int main() {
   char text[] = "xyztrwqxyzfg";
   char pattern[] = "xyz";
   kmp(text, pattern);
   return 0;
}
