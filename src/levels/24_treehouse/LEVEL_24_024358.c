/* LEVEL_24:0x024358 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_001C4B50;
extern unsigned char D_001C4B51;
extern unsigned char D_001C4B52;
extern unsigned char D_001C4B53;
extern unsigned char D_001C4B54;
extern unsigned char D_001C4B55;
extern unsigned char D_001C4B65;
extern int D_001C4B6C;
extern int D_001C4BE8;
extern int D_001C4BEC;
extern int D_001C4BF0;
extern char D_001FBD60[];

void func_024358(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_001C4B50 == 0 && D_001C4B51 == 0) {
        if (name != D_001FBD60) {
            strncpy(D_001FBD60, name, 0x5F);
            D_001FBD60[0x5F] = 0;
        }
        D_001C4B53 = 0;
        D_001C4B52 = a;
        D_001C4BE8 = c;
        D_001C4BF0 = e;
        D_001C4BEC = d;
        D_001C4B6C = f;
        D_001C4B65 = 0;
        D_001C4B54 = b;
        D_001C4B55 = g;
        D_001C4B50 = 1;
    }
}
