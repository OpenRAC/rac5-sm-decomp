/* LEVEL_21:0x0208E8 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_00148B50;
extern unsigned char D_00148B51;
extern unsigned char D_00148B52;
extern unsigned char D_00148B53;
extern unsigned char D_00148B54;
extern unsigned char D_00148B55;
extern unsigned char D_00148B65;
extern int D_00148B6C;
extern int D_00148BE8;
extern int D_00148BEC;
extern int D_00148BF0;
extern char D_00177FE0[];

void func_0208E8(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_00148B50 == 0 && D_00148B51 == 0) {
        if (name != D_00177FE0) {
            strncpy(D_00177FE0, name, 0x5F);
            D_00177FE0[0x5F] = 0;
        }
        D_00148B53 = 0;
        D_00148B52 = a;
        D_00148BE8 = c;
        D_00148BF0 = e;
        D_00148BEC = d;
        D_00148B6C = f;
        D_00148B65 = 0;
        D_00148B54 = b;
        D_00148B55 = g;
        D_00148B50 = 1;
    }
}
