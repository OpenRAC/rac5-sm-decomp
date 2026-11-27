/* LEVEL_04:0x0262F0 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_0020D050;
extern unsigned char D_0020D051;
extern unsigned char D_0020D052;
extern unsigned char D_0020D053;
extern unsigned char D_0020D054;
extern unsigned char D_0020D055;
extern unsigned char D_0020D065;
extern int D_0020D06C;
extern int D_0020D0E8;
extern int D_0020D0EC;
extern int D_0020D0F0;
extern char D_0024A660[];

void func_0262F0(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_0020D050 == 0 && D_0020D051 == 0) {
        if (name != D_0024A660) {
            strncpy(D_0024A660, name, 0x5F);
            D_0024A660[0x5F] = 0;
        }
        D_0020D053 = 0;
        D_0020D052 = a;
        D_0020D0E8 = c;
        D_0020D0F0 = e;
        D_0020D0EC = d;
        D_0020D06C = f;
        D_0020D065 = 0;
        D_0020D054 = b;
        D_0020D055 = g;
        D_0020D050 = 1;
    }
}
