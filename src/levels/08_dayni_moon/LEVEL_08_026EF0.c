/* LEVEL_08:0x026EF0 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_0023CA50;
extern unsigned char D_0023CA51;
extern unsigned char D_0023CA52;
extern unsigned char D_0023CA53;
extern unsigned char D_0023CA54;
extern unsigned char D_0023CA55;
extern unsigned char D_0023CA65;
extern int D_0023CA6C;
extern int D_0023CAE8;
extern int D_0023CAEC;
extern int D_0023CAF0;
extern char D_0027F0E0[];

void func_026EF0(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_0023CA50 == 0 && D_0023CA51 == 0) {
        if (name != D_0027F0E0) {
            strncpy(D_0027F0E0, name, 0x5F);
            D_0027F0E0[0x5F] = 0;
        }
        D_0023CA53 = 0;
        D_0023CA52 = a;
        D_0023CAE8 = c;
        D_0023CAF0 = e;
        D_0023CAEC = d;
        D_0023CA6C = f;
        D_0023CA65 = 0;
        D_0023CA54 = b;
        D_0023CA55 = g;
        D_0023CA50 = 1;
    }
}
