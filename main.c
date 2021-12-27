#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char ho[30],dem[30],ten[30]
}hovaten;
void tach(char a[], hovaten *s)
{
    int i=0,j=strlen(a)-1;
    while((a[i]!=' ')&&(a[i]!='\n')){   //cho i tăng dần, gặp space thì dừng để lấy mốc kết thúc phần họ
        i++;
    }
    while(a[j]!=' '){   //cho j giảm dần đến khi gặp space để lấy mốc kết thúc phần tên (j đi từ cuối lên đầu)
        j--;
    }
    for(int x=0;x<i;x++){  //lấy họ là từ a[0] đến a[i]
        s->ho[x]=a[x];
    }
    for(int x=(j+1);x<strlen(a);x++){  //lấy tên từ a[j+1] đến hết (vì j hiện tại đang dừng ở ký tự space, j+1 mới bắt đầu tên
        s->ten[x-j-1]=a[x];
    }
    for(int x=i+1;x<j;x++){   //lấy đệm từ sau họ đến trước tên : a[i+1] đến a[j]
        s->dem[x-i-1]=a[x];
    }
    printf("%s-%s-%s",s->ho,s->dem,s->ten);
}

int main()
{
    hovaten s;
    tach("hoang the anh",&s);
    return 0;
}
