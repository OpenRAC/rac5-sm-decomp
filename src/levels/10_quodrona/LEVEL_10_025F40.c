/* LEVEL_10:0x025F40 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_001FCED0;
extern unsigned char D_001FCED1;
extern unsigned char D_001FCED2;
extern unsigned char D_001FCED3;
extern unsigned char D_001FCED4;
extern unsigned char D_001FCED5;
extern unsigned char D_001FCEE5;
extern int D_001FCEEC;
extern int D_001FCF68;
extern int D_001FCF6C;
extern int D_001FCF70;
extern char D_00239260[];

void func_025F40(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_001FCED0 == 0 && D_001FCED1 == 0) {
        if (name != D_00239260) {
            strncpy(D_00239260, name, 0x5F);
            D_00239260[0x5F] = 0;
        }
        D_001FCED3 = 0;
        D_001FCED2 = a;
        D_001FCF68 = c;
        D_001FCF70 = e;
        D_001FCF6C = d;
        D_001FCEEC = f;
        D_001FCEE5 = 0;
        D_001FCED4 = b;
        D_001FCED5 = g;
        D_001FCED0 = 1;
    }
}
