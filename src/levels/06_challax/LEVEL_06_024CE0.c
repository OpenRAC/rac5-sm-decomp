/* LEVEL_06:0x024CE0 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_001E2DD0;
extern unsigned char D_001E2DD1;
extern unsigned char D_001E2DD2;
extern unsigned char D_001E2DD3;
extern unsigned char D_001E2DD4;
extern unsigned char D_001E2DD5;
extern unsigned char D_001E2DE5;
extern int D_001E2DEC;
extern int D_001E2E68;
extern int D_001E2E6C;
extern int D_001E2E70;
extern char D_0021CBE0[];

void func_024CE0(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_001E2DD0 == 0 && D_001E2DD1 == 0) {
        if (name != D_0021CBE0) {
            strncpy(D_0021CBE0, name, 0x5F);
            D_0021CBE0[0x5F] = 0;
        }
        D_001E2DD3 = 0;
        D_001E2DD2 = a;
        D_001E2E68 = c;
        D_001E2E70 = e;
        D_001E2E6C = d;
        D_001E2DEC = f;
        D_001E2DE5 = 0;
        D_001E2DD4 = b;
        D_001E2DD5 = g;
        D_001E2DD0 = 1;
    }
}
