/* LEVEL_19:0x023E00 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_001A2B58;
extern unsigned char D_001A2B59;
extern unsigned char D_001A2B5A;
extern unsigned char D_001A2B5B;
extern unsigned char D_001A2B5C;
extern unsigned char D_001A2B5D;
extern unsigned char D_001A2B6D;
extern int D_001A2B74;
extern int D_001A2BF0;
extern int D_001A2BF4;
extern int D_001A2BF8;
extern char D_001DECE0[];

void func_023E00(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_001A2B58 == 0 && D_001A2B59 == 0) {
        if (name != D_001DECE0) {
            strncpy(D_001DECE0, name, 0x5F);
            D_001DECE0[0x5F] = 0;
        }
        D_001A2B5B = 0;
        D_001A2B5A = a;
        D_001A2BF0 = c;
        D_001A2BF8 = e;
        D_001A2BF4 = d;
        D_001A2B74 = f;
        D_001A2B6D = 0;
        D_001A2B5C = b;
        D_001A2B5D = g;
        D_001A2B58 = 1;
    }
}
