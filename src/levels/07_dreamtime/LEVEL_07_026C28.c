/* LEVEL_07:0x026C28 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_002081D0;
extern unsigned char D_002081D1;
extern unsigned char D_002081D2;
extern unsigned char D_002081D3;
extern unsigned char D_002081D4;
extern unsigned char D_002081D5;
extern unsigned char D_002081E5;
extern int D_002081EC;
extern int D_00208268;
extern int D_0020826C;
extern int D_00208270;
extern char D_00245760[];

void func_026C28(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_002081D0 == 0 && D_002081D1 == 0) {
        if (name != D_00245760) {
            strncpy(D_00245760, name, 0x5F);
            D_00245760[0x5F] = 0;
        }
        D_002081D3 = 0;
        D_002081D2 = a;
        D_00208268 = c;
        D_00208270 = e;
        D_0020826C = d;
        D_002081EC = f;
        D_002081E5 = 0;
        D_002081D4 = b;
        D_002081D5 = g;
        D_002081D0 = 1;
    }
}
