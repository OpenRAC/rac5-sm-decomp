/* LEVEL_20:0x020E68 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_001040B8;
extern unsigned char D_001040B9;
extern unsigned char D_001040BA;
extern unsigned char D_001040BB;
extern unsigned char D_001040BC;
extern unsigned char D_001040BD;
extern unsigned char D_001040CD;
extern int D_001040D4;
extern int D_00104150;
extern int D_00104154;
extern int D_00104158;
extern char D_001364E0[];

void func_020E68(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_001040B8 == 0 && D_001040B9 == 0) {
        if (name != D_001364E0) {
            strncpy(D_001364E0, name, 0x5F);
            D_001364E0[0x5F] = 0;
        }
        D_001040BB = 0;
        D_001040BA = a;
        D_00104150 = c;
        D_00104158 = e;
        D_00104154 = d;
        D_001040D4 = f;
        D_001040CD = 0;
        D_001040BC = b;
        D_001040BD = g;
        D_001040B8 = 1;
    }
}
