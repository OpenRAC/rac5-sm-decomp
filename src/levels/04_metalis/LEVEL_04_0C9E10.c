/* LEVEL_04:0x0C9E10 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_00219874;
extern int D_00219878;
extern unsigned char D_0021987D;
extern int D_00219880;
extern int D_00219884;
extern int D_00219888;
extern unsigned char D_0021988C;
extern int D_0020D058;
extern int D_0020D05C;
extern unsigned char D_0021986C;
extern char D_00343C50[];
extern void func_0C9D60(void);
extern void func_0263F8(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_0C9E10(void)
{
    D_0021986C = 0;
    D_0020D058 = D_00219874;
    D_0020D05C = D_00219878;
    ((void (*)(char *, int, int, char *, int, int, int))func_0263F8)(D_00343C50, D_0021987D, D_00219880, (char *)func_0C9D60, D_00219884, D_00219888, D_0021988C);
}
