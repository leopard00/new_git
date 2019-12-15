/*ここでは
 *１. for文では先にカウンタ定数を i++ してから条件式を比較する。
 *２. scanf("%s",str);では改行を文字として受け取らないため、iの値がfor文終了後では３になる。
 *３.空白入りの文字列を入力したい場合は

	    for(i=0;;i++){
		scanf("%c", &str[i]);
	        if(moji == '\n'){
		    str[i] = '\0';
		    break;
		}
	    }

 *　とすると出来る！
 *４.NULL文字の加え忘れに注意！！
 */
		


#include <stdio.h>

#define N 257

int main(){
    char str[N], str_new[N];
    int i;

    printf("Input : ");
    scanf("%s", str);

    for( i=0; str[i] != '\0'; i++){
	if( (32 <= str[i] && str[i] <= 47) || (58 <= str[i] && str[i] <= 64) || (91 <= str[i] && str[i] <= 96) || (123 <= str[i] && str[i] <= 126) ) {
	    str_new[i] = '_';
	}else {
	    str_new[i] = str[i];
	}
	printf("%d ",str[i]);
    }

    printf("i = %d\n",i);
    str_new[i] = '\0';
    printf("Before : %s\n", str);
    printf("After  : %s\n", str_new);

    return 0;
}
