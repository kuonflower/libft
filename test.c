#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
int randum_int (void);
char randum_char (int);
char *number_str();
int order_int(int);
char *order_char(int);
int order_randum_int(int);
void allcpy(char*, char*, int);
int allcmp(char*, char*, int);
void show(char*);
void showpp(char **);
void show256(char*);
int comploc(char*, char*);

#include "libft.h"
/*
1.ft_isalpha()
2.ft_isdigit()
3.ft_isalnum()
4.ft_isascii()
5.ft_isprint()
*/
/*
#include <ctype.h>

int main(void)
{
    int c;
    int oi_return;
    int fti_return;
    while (1)
    {
        c = randum_int();
        //1.isalpha()
        oi_return = isalpha(c);
        fti_return = ft_isalpha(c);
        if (oi_return != fti_return)
        {
            printf("\n\n1.isalpha error\nc = %c(\\%d)\no_return = %d\nft_return = %d\n", c, c, oi_return, fti_return);
            exit (0);
        }
        //2.isdigit()
        oi_return = isdigit(c);
        fti_return = ft_isdigit(c);
        if (oi_return != fti_return)
        {
            printf("\n\n2.isdigit error\nc = %c(\\%d)\no_return = %d\nft_return = %d\n", c, c, oi_return, fti_return);
            exit (0);
        }
        //3.isalnum()
        oi_return = isalnum(c);
        fti_return = ft_isalnum(c);
        if (oi_return != fti_return)
        {
            printf("\n\n3.isalnum error\nc = %c(\\%d)\no_return = %d\nft_return = %d\n", c, c, oi_return, fti_return);
            exit (0);
        }
        //4.isascii()
        oi_return = isascii(c);
        fti_return = ft_isascii(c);
        if (oi_return != fti_return)
        {
            printf("\n\n4.isascii error\nc = %c(\\%d)\no_return = %d\nft_return = %d\n", c, c, oi_return, fti_return);
            exit (0);
        }
        //5.isprint()
        oi_return = isprint(c);
        fti_return = ft_isprint(c);
        if (oi_return != fti_return)
        {
            printf("\n\n5.isprint error\nc = %c(\\%d)\no_return = %d\nft_return = %d\n", c, c, oi_return, fti_return);
            exit (0);
        }
        printf("c = %d(OK)\n",c);
    }
}
*/

/*
1.strlen()
2.memset()
3.bzero()
4.memcpy()
5.memmove()
6.strlcpy()
7.strlcat()
8.toupper()
9.tolower()
10.strchr()
11.strchr()
12.strncmp()
13.memchr()
14.strnstr()
15.atoi()
16.memcmp()
*/

#include<ctype.h>

int main(int argc, char *argv[])
{
    (void)argv;
    (void)argc;

    int j = 0;
    long i = 0;
    char *sa;
    char *sb;
    char *ns;
    int l;
    int l2;
    int pl;
    int r;
    char tao[512];
    char taf[512];
    void* op_return;
    void* ftp_return;
    size_t os_return;
    size_t fts_return;
    int oi_return;
    int fti_return;
    char oc_return;
    char ftc_return;

    {
    (void)j;
    (void)i;
    (void)tao;
    (void)taf;
    (void)op_return;
    (void)ftp_return;
    (void)os_return;
    (void)fts_return;
    (void)oi_return;
    (void)fti_return;
    (void)oc_return;
    (void)ftc_return;
    (void)ns;
    }

    while(1)
    {
        sa = order_char(1);
        sb = order_char(2);
        ns = number_str();
        l = (int) *(char*)(order_char(3));
        l2 = (int) *((char*)(order_char(3)) + 1);
        pl = l;
        if(l < 0)
            pl *= -1;
        r = randum_int();
        //printf("sa =  %s , sb =  %s , ns = %s , l = %d, r = %d\n", sa, sb, ns, l, r);



        //1.strlen()

        os_return = strlen(sa);
        fts_return = ft_strlen(sa);
        if (os_return != fts_return)
        {
            printf("\n\n1.strlen error\n1 = %s\no_return = %zu\nft_return = %zu\n", sa, os_return, fts_return);
            printf("sa\n");
            show(sa);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }



        //2.memset()

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        op_return = memset(tao, r, pl);
        ftp_return = ft_memset(taf, r, pl);
        if (allcmp(tao, taf, 512) || tao != op_return || taf != ftp_return)
        {
            printf("\n\n2.memset error\n\nbefor\n1 = %s(%p)\n2 = %d\n3 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nop_return = %p\nftp_return = %p\n", sa, sa, r, pl, tao, taf, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }



        //3.bzero()

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        bzero(tao, pl);
        ft_bzero(taf, pl);
        if (allcmp(tao, taf, 512))
        {
            printf("\n\n3.bzero error\n\nbefor\n1 = %s(%p)\n2 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nno return\n", sa, sa, pl, tao, taf);
            printf("sa\n");
            show(sa);
            printf("tao\n");
            show(tao);
            printf("taf\n");
            show(taf);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }



        //4.memcpy()

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        op_return = memcpy(tao, sb, pl);
        ftp_return = ft_memcpy(taf, sb, pl);
        if (allcmp(tao, taf, 512) || tao != op_return || taf != ftp_return)
        {
            printf("\n\n4.memcpy error\n\nbefor\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nop_return = %p\nftp_return = %p\n", sa, sa, sb, sb, pl, tao, taf, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("tao\n");
            show(tao);
            printf("taf\n");
            show(taf);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }



        //5.memmove()

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        op_return = memmove(tao, sb, pl);
        ftp_return = ft_memmove(taf, sb, pl);
        if (allcmp(tao, taf, 512) || tao != op_return || taf != ftp_return)
        {
            printf("\n\n5.memmove error\n\nbefor\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nop_return = %p\nftp_return = %p\n", sa, sa, sb, sb, pl, tao, taf, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("tao\n");
            show(tao);
            printf("taf\n");
            show(taf);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }



        //6.strlcpy

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        os_return = strlcpy(tao, sb, pl);
        fts_return = ft_strlcpy(taf, sb, pl);
        if (allcmp(tao, taf, 512) ||os_return != fts_return)
        {
            printf("\n\n6.strlcpy error\n\nbefor\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nop_return = %zu\nftp_return = %zu\n", sa, sa, sb, sb, pl, tao, taf, os_return, fts_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("tao\n");
            show(tao);
            printf("taf\n");
            show(taf);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }



        //7.strlcat

        allcpy(tao, sa, 512);
        allcpy(taf, sa, 512);
        os_return = strlcat(tao, sb, pl);
        fts_return = ft_strlcat(taf, sb, pl);
        if (allcmp(tao, taf, 512) ||os_return != fts_return)
        {
            printf("\n\n7.strlcat error\n\nbefor\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\n\nafter\noriginal_1 = %s\nft_1 = %s\nop_return = %zu\nftp_return = %zu\n", sa, sa, sb, sb, pl, tao, taf, os_return, fts_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("tao\n");
            show(tao);
            printf("taf\n");
            show(taf);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }



        //8.toupper

        oi_return = toupper(r);
        fti_return = ft_toupper(r);
        if (oi_return != fti_return)
        {
            printf("\n\n8.toupper error\n1 = %c(\\%d)\no_return =%c (%d)\nft_return =%c (%d)\n", l, l, oi_return, oi_return, fti_return, fti_return);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }



        //9.tolower

        oi_return = tolower(r);
        fti_return = ft_tolower(r);
        if (oi_return != fti_return)
        {
            printf("\n\n9.tolower error\n1 = %c(\\%d)\no_return =%c (%d)\nft_return =%c (%d)\n", l, l, oi_return, oi_return, fti_return, fti_return);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }

/*
        //10.strchr

        op_return = strchr(sa, r);
        ftp_return = ft_strchr(sa, r);
        if (op_return != ftp_return)
        {
            printf("\n\n10.strchr error\n1 = %s(%p)\n2 = %c(\\%d)\nop_return =%p\nftp_return =%p\n", sa, sa, r, r, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }


        //11.strrchr

        op_return = strrchr(sa, r);
        ftp_return = ft_strrchr(sa, r);
        if (op_return != ftp_return)
        {
            printf("\n\n11.strrchr error\n1 = %s(%p)\n2 = %c(\\%d)\nop_return =%p\nftp_return =%p\n", sa, sa, r, r, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }
*/
        //12.strncmp

        oi_return = strncmp(sa, sb, pl);
        fti_return = ft_strncmp(sa, sb, pl);
        if (oi_return != fti_return)
        {
            printf("\n\n12.strncmp error\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\no_return = %d\nft_return = %d\n", sa, sa, sb, sb, pl, oi_return, fti_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }



        //13.memchr

        op_return = memchr(sa, r, pl);
        ftp_return = ft_memchr(sa, r, pl);
        if (op_return != ftp_return)
        {
            printf("\n\n13.memchr error\n1 = %s(%p)\n2 = %d\n3 = %d\no_return = %p\nft_return = %p\n", sa, sa, r, pl, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }


        //14.strnstr

        op_return = strnstr(sa, sb, pl);
        ftp_return = ft_strnstr(sa, sb, pl);
        if (op_return != ftp_return)
        {
            printf("\n\n14.strnstr error\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\no_return = %p\nft_return = %p\n", sa, sa, sb, sb, pl, op_return, ftp_return);
            printf("sa\n");
            show(sa);
            printf("sb\n");
            show(sb);
            printf("\n\n");
            printf("%ld times\n", i);
        }

/*
        //15.atoi

        oi_return = atoi(ns);
        fti_return = ft_atoi(ns);
        if (oi_return != fti_return)
        {
            printf("\n\n15.atoi error\n1 = %s(%p)\no_return = %d\nft_return = %d\n", ns, ns, oi_return, fti_return);
            printf("ns\n");
            show(ns);
            printf("%ld times\n", i);
            exit (0);
        }
*/
        //16.memcmp()
        oi_return = memcmp(sa, sb, pl);
        fti_return = ft_memcmp(sa, sb, pl);
        if (oi_return != fti_return)
        {
            printf("\n\n16.memcmp error\n1 = %s(%p)\n2 = %s(%p)\n3 = %d\no_return = %d\nft_return = %d\n", sa, sa, sb, sb, pl, oi_return, fti_return);
            printf("sa\n");
            show256(sa);
            printf("sb\n");
            show256(sb);
            printf("\n\n");
            printf("%ld times\n", i);
            exit (0);
        }



        //printf("(OK)\n");

        if(j && !sb[0])
        {
            printf("OK\n");
            j = 0;
        }
        if(sb[0])
            j = 1;

        i++;
    }

}


/*
1.calloc()
2.strdup()
3.malloc() <-- 確保して表示するだけ
*/
/*
int main (void)
{
    int n;
    size_t i1;
    size_t i2;
    char c[256];
    void *ori;
    void *ft;

    while (1)
    {
        printf("\n\n\n1,calloc(size_t, size_t);\n2,strdup(const char *);\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("\n~~~calloc(size_t, size_t);~~~\n");
            printf("calloc(____,    );\n");
            scanf("%zu", &i1);
            printf("calloc(%4zu,____);\n", i1);
            scanf("%zu", &i2);
            printf("\ncalloc(%4zu,%4zu);\n\n", i1, i2);
            ori = calloc(i1, i2);
            ft = calloc(i1, i2);
            if(ori)
            {
                printf("ori");
                show256(ori);
            }
            else
                printf("ori = NULL\n");
            printf("\n\n");
            if(ft)
            {
                printf("ft");
                show256(ft);
            }
            else
                printf("ori = NULL\n");
            free(ft);
            free(ori);
            break;

        case 2:
            printf("\n~~~strdup(const char *);~~~\n");
            printf("strdup(____);\n");
            scanf("%s", c);
            printf("\nstrdup(%s);\n\n", c);
            ori = strdup(c);
            ft = strdup(c);
            if(ori)
            {
                printf("ori");
                show256(ori);
            }
            else
                printf("ori = NULL\n");
            printf("\n\n");
            if(ft)
            {
                printf("ft");
                show256(ft);
            }
            else
                printf("ori = NULL\n");
            free(ft);
            free(ori);
            break;

            case 3:
            scanf("%zu", &i1);
            ori = malloc(i1);
            if(ori)
            {
                printf("ori");
                show256(ori);
            }
            else
                printf("ori = NULL\n");
            printf("\n\n");
            free(ori);
            break;

        default:
            exit (0);
        }
    }
}
*/


//数字を生み出す======================================================================================


int randum_int (void)/* 1割の確率で端の数字、3割の確率でchar範囲内の数字、6割の確率でint範囲内の数字 */
{
    int n;

    if (rand() % 10)
    {
        if (rand() % 3)
            n = rand();
        else
            n = (unsigned char)rand();
        if (rand() % 2)
        {
            n *= -1;
            n -= 1;
        }
        return (n);
    }
    switch (rand() % 3)
    {
    case 1:
        return (INT_MAX);
        break;
    case 2:
        return (INT_MIN);
        break;
    default:
        return (0);
        break;
    }
    return (0);
}

char randum_char (int n)/* n = 1 \0以外, n = 2 9割の確率で+- or数字, n = その他 テキトー */
{
    char c;

    switch (n)
    {
    case 2:
        if (rand() % 10)
        {
            if (rand() % 6)
                c = '0' + (rand() % 10);
            else
            {
                if (!(rand() % 3))
                    c = ' ';
                else if(rand() % 2)
                    c = '-';
                else
                    c = '+';
            }
            break;
        }
    case 1:
        c = (char)rand();
        while(c == '\0')
            c = (char)rand();
        break;
    default:
        c = (char)rand();
        break;
    }
    return (c);
}

char* number_str(void)/* MAX長さ10000の文字列を返す */
{
    static char s[64];
    long int n;
    int i;

    n = rand() % 64;
    for ( i = 0; i < n; i++)
        *(s + i) = randum_char(2);
    *(s + i) = '\0';
    for (; i < 64; i++)
        *(s + i) = randum_char(0);
    return (s);
}

int order_int(int n)
{
    static int i[5];
    int j = 1;
    int ii;
    int b;
    static int s = 0;
    if (n <= 0)
    {
        for ( ii = 0; ii < 5; ii++)
            i[ii] = 0;
        s = 0;
        return (0);
    }
    if (s <= 5 * 3 && n == 1)
    {
        j = s;
        for ( ii = 0; ii < 5; ii++)
        {
            switch (j % 3)
            {
            case 0:
                i[ii] = 0;
                break;
            case 1:
                i[ii] = INT_MAX;
                break;
            default:
                i[ii] = INT_MIN;
                break;
            }
            j /= 3;
        }
        s++;
    }
    else if(n == 1)
    {
        b = i[0];
        i[0]++;
        for ( ii = 0; ii < 5; ii++)
        {
           j *= (b < 0 && i[ii] >= 0);
           b = i[(ii + 1) % 5];
           if(j)
                i[(ii + 1) % 5] ++;
        }
    }
    return (i[n - 1]);
}

char* order_char(int n)/*  n < -1 更新,  n = 0 長配列Aのポインタ,　n = 1 更新して長配列Aのポインタ, n = 2 短配列Bのポインタ, n = 3 任意数字l */
{
    static char l[3];
    static char a[512];
    static char b[128];
    int i;
    static int s = 1;

    if (s)
    {
        for ( i = 0; i < 3; i++)
            l[i] = 0;
        s = 0;
    }
    else if(n == 1 || n < 0)
    {
        l[0]++;
        if (l[0] == 0)
            l[1]++;
        if((unsigned)l[1] >= 128)
        {
            l[2]++;
            l[1] = 0;
        }
        if ((unsigned)l[2] >= 32)
            l[2] = 0;
        for ( i = 0; i < (int)((unsigned)l[1]); i++)
                a[i] = randum_char(1);
        a[i] = 0; i++;
        for (;i < 512; i++)
                a[i] = randum_char(0);
        for ( i = 0; i < (int)((unsigned)l[2]); i++)
                b[i] = randum_char(1);
        b[i] = 0; i++;
        for (; i < 128; i++)
            b[i] = randum_char(0);

        b[(int)l[2]] = 0;
    }
    switch (n)
    {
    case 0:
    case 1:
        return(a);
        break;
    case 2:
        return(b);
        break;
    case 3:
        return(l);
        break;
    default:
        return(NULL);
        break;
    }
}

int order_randum_int(int n)
{
    static int i[5];
    int j = 1;
    int ii;
    int b;
    static int s = 0;
    if (n <= 0)
    {
        for ( ii = 0; ii < 5; ii++)
            i[ii] = 0;
        s = 0;
        return (0);
    }
    if (s <= 5 * 3 && n == 1)
    {
        j = s;
        for ( ii = 0; ii < 5; ii++)
        {
            switch (j % 3)
            {
            case 0:
                i[ii] = 0;
                break;
            case 1:
                i[ii] = INT_MAX;
                break;
            default:
                i[ii] = INT_MIN;
                break;
            }
            j /= 3;
        }
        s++;
    }
    else if(n == 1)
    {
        b = i[0];
        i[0]+= rand();
        for ( ii = 0; ii < 5; ii++)
        {
           j *= (b < 0 && i[ii] >= 0);
           b = i[(ii + 1) % 5];
           if(j)
                i[(ii + 1) % 5] += rand();
        }
    }
    return (i[n - 1]);
}

//テストに使う========================================================================================


void allcpy(char *cpy, char *ori, int n)
{
    int i;

    i = 0;
    while(i < n)
    {
        *(cpy + i) = *(ori + i);
        i++;
    }
}

int allcmp(char *cpy, char *ori, int n)
{
    int i;
    int cmp;

    i = 0;
    while(i < n)
    {
        cmp = *(cpy + i) - *(ori + i);
        if (cmp)
            return (cmp);
        i++;
    }
    return (0);
}

void show(char* s)
{
    size_t i;
    size_t ii;
    size_t m;

    m = 0;
    ii = 0;
    printf("\nstart:%p\n", s);
    while (m < 3)
    {
        printf("|");
        i = 0;
        while (i < 16)
        {
            printf("%7zu|", ii + i + 1);
            i++;
        }
        printf("\n|");
        i = 0;
        while (i < 16)
        {
            if (*(s + ii + i) == 0 && !m)
                m++;
            printf("%4d(%c)|", (int)*(s + ii + i), (*(s + ii + i) > 32 && *(s + ii + i) < 127) ? *(s + ii + i) : 32);
            i++;
        }
        printf("\n");
        if (m > 0)
            m++;
        ii += 16;
    }

}

void show256(char* s)
{
    size_t i;
    size_t ii;
    size_t m;

    m = 0;
    ii = 0;
    printf("\nstart:%p\n", s);
    while (ii < 256)
    {
        printf("|");
        i = 0;
        while (i < 32)
        {
            printf("%7zu|", ii + i + 1);
            i++;
        }
        printf("\n|");
        i = 0;
        while (i < 32)
        {
            printf("%4d(%c)|", (int)*(s + ii + i), (*(s + ii + i) > 32 && *(s + ii + i) < 127) ? *(s + ii + i) : 32);
            i++;
        }
        printf("\n");
        ii += 32;
    }

}

void showpp(char **s)
{
    size_t i;
    size_t ii;
    size_t m;

    m = 0;
    ii = 0;
    printf("\nstart:%p\n", s);
    while (m < 3)
    {
        printf("|");
        i = 0;
        while (i < 32)
        {
            printf("%14zu|", ii + i + 1);
            i++;
        }
        printf("\n|");
        i = 0;
        while (i < 32)
        {
            if (*(s + ii + i) == 0 && !m)
                m++;
            printf("%14p|", *(s + ii + i));
            i++;
        }
        printf("\n");
        if (m > 0)
            m++;
        ii += 32;
    }

}
