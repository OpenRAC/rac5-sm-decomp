/* LEVEL_05:0x025570 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_001E3250;
extern unsigned char D_001E3251;
extern unsigned char D_001E3252;
extern unsigned char D_001E3253;
extern unsigned char D_001E3254;
extern unsigned char D_001E3255;
extern unsigned char D_001E3265;
extern int D_001E326C;
extern int D_001E32E8;
extern int D_001E32EC;
extern int D_001E32F0;
extern char D_0021BB60[];

void func_025570(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_001E3250 == 0 && D_001E3251 == 0) {
        if (name != D_0021BB60) {
            strncpy(D_0021BB60, name, 0x5F);
            D_0021BB60[0x5F] = 0;
        }
        D_001E3253 = 0;
        D_001E3252 = a;
        D_001E32E8 = c;
        D_001E32F0 = e;
        D_001E32EC = d;
        D_001E326C = f;
        D_001E3265 = 0;
        D_001E3254 = b;
        D_001E3255 = g;
        D_001E3250 = 1;
    }
}
