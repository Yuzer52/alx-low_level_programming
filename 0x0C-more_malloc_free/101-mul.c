#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * test: test the numbers
  * @len2: length two
  * @len1: length one
  * @num2: number two
  * @num1: number one
  *
  * Return: result
  */
char *test(char *str_num1, char *str_num2, int len1, int len2){	
  int str_sum[512], tmp, index;
  char *result;
  if( str_num1[0] == '0' || str_num2[0] == '0' ) return "0";
  for(int i = 0; i < 512; i++)
    str_sum[i] = 0;
  for(int i = len1 - 1; i >= 0; i--){
    for(int j = len2 - 1; j >= 0; j--){
      str_sum[i + j + 1] += (str_num1[i] - '0') * (str_num2[j] - '0');
      str_sum[i + j] += str_sum[i + j + 1] / 10;
      str_sum[i + j + 1] %= 10;
    }
  }
  for(int i = 0; i < 512; i++){
    if (str_sum[i] != 0){
      index = i;
      break;
    }
  }
  result = (char*)malloc(sizeof(char) * (len1 + len2 + 2));
  int tot_len = len1 + len2;
  if (str_sum[0] != 0){
    for(int i = 0; i < tot_len; i++)
      result[i] = str_sum[i] + '0';
    result[tot_len] = '\0';
  }
  else{
    for(int i = 1; i < tot_len; i++)
      result[i - 1] = str_sum[i] + '0';
    result[tot_len - 1] = '\0';
  }
  return resut;
}
