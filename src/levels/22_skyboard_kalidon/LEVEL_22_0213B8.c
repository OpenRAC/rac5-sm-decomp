/* LEVEL_22:0x0213B8 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_00153250;
extern unsigned char D_00153251;
extern unsigned char D_00153252;
extern unsigned char D_00153253;
extern unsigned char D_00153254;
extern unsigned char D_00153255;
extern unsigned char D_00153265;
extern int D_0015326C;
extern int D_001532E8;
extern int D_001532EC;
extern int D_001532F0;
extern char D_00181A60[];

void func_0213B8(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_00153250 == 0 && D_00153251 == 0) {
        if (name != D_00181A60) {
            strncpy(D_00181A60, name, 0x5F);
            D_00181A60[0x5F] = 0;
        }
        D_00153253 = 0;
        D_00153252 = a;
        D_001532E8 = c;
        D_001532F0 = e;
        D_001532EC = d;
        D_0015326C = f;
        D_00153265 = 0;
        D_00153254 = b;
        D_00153255 = g;
        D_00153250 = 1;
    }
}
