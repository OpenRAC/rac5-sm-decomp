/* LEVEL_18:0x023808 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_001A2E58;
extern unsigned char D_001A2E59;
extern unsigned char D_001A2E5A;
extern unsigned char D_001A2E5B;
extern unsigned char D_001A2E5C;
extern unsigned char D_001A2E5D;
extern unsigned char D_001A2E6D;
extern int D_001A2E74;
extern int D_001A2EF0;
extern int D_001A2EF4;
extern int D_001A2EF8;
extern char D_001DEEE0[];

void func_023808(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_001A2E58 == 0 && D_001A2E59 == 0) {
        if (name != D_001DEEE0) {
            strncpy(D_001DEEE0, name, 0x5F);
            D_001DEEE0[0x5F] = 0;
        }
        D_001A2E5B = 0;
        D_001A2E5A = a;
        D_001A2EF0 = c;
        D_001A2EF8 = e;
        D_001A2EF4 = d;
        D_001A2E74 = f;
        D_001A2E6D = 0;
        D_001A2E5C = b;
        D_001A2E5D = g;
        D_001A2E58 = 1;
    }
}
