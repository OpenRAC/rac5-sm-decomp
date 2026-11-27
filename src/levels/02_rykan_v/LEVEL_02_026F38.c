/* LEVEL_02:0x026F38 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_00208B50;
extern unsigned char D_00208B51;
extern unsigned char D_00208B52;
extern unsigned char D_00208B53;
extern unsigned char D_00208B54;
extern unsigned char D_00208B55;
extern unsigned char D_00208B65;
extern int D_00208B6C;
extern int D_00208BE8;
extern int D_00208BEC;
extern int D_00208BF0;
extern char D_00247360[];

void func_026F38(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_00208B50 == 0 && D_00208B51 == 0) {
        if (name != D_00247360) {
            strncpy(D_00247360, name, 0x5F);
            D_00247360[0x5F] = 0;
        }
        D_00208B53 = 0;
        D_00208B52 = a;
        D_00208BE8 = c;
        D_00208BF0 = e;
        D_00208BEC = d;
        D_00208B6C = f;
        D_00208B65 = 0;
        D_00208B54 = b;
        D_00208B55 = g;
        D_00208B50 = 1;
    }
}
