/* LEVEL_16:0x0241C0 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_001A19D8;
extern unsigned char D_001A19D9;
extern unsigned char D_001A19DA;
extern unsigned char D_001A19DB;
extern unsigned char D_001A19DC;
extern unsigned char D_001A19DD;
extern unsigned char D_001A19ED;
extern int D_001A19F4;
extern int D_001A1A70;
extern int D_001A1A74;
extern int D_001A1A78;
extern char D_001DEB60[];

void func_0241C0(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_001A19D8 == 0 && D_001A19D9 == 0) {
        if (name != D_001DEB60) {
            strncpy(D_001DEB60, name, 0x5F);
            D_001DEB60[0x5F] = 0;
        }
        D_001A19DB = 0;
        D_001A19DA = a;
        D_001A1A70 = c;
        D_001A1A78 = e;
        D_001A1A74 = d;
        D_001A19F4 = f;
        D_001A19ED = 0;
        D_001A19DC = b;
        D_001A19DD = g;
        D_001A19D8 = 1;
    }
}
