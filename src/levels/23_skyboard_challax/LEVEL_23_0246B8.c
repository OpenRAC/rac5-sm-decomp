/* LEVEL_23:0x0246B8 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_001C72D0;
extern unsigned char D_001C72D1;
extern unsigned char D_001C72D2;
extern unsigned char D_001C72D3;
extern unsigned char D_001C72D4;
extern unsigned char D_001C72D5;
extern unsigned char D_001C72E5;
extern int D_001C72EC;
extern int D_001C7368;
extern int D_001C736C;
extern int D_001C7370;
extern char D_001FD2E0[];

void func_0246B8(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_001C72D0 == 0 && D_001C72D1 == 0) {
        if (name != D_001FD2E0) {
            strncpy(D_001FD2E0, name, 0x5F);
            D_001FD2E0[0x5F] = 0;
        }
        D_001C72D3 = 0;
        D_001C72D2 = a;
        D_001C7368 = c;
        D_001C7370 = e;
        D_001C736C = d;
        D_001C72EC = f;
        D_001C72E5 = 0;
        D_001C72D4 = b;
        D_001C72D5 = g;
        D_001C72D0 = 1;
    }
}
