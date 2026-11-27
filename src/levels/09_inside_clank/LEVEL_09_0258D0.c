/* LEVEL_09:0x0258D0 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_001DDCD0;
extern unsigned char D_001DDCD1;
extern unsigned char D_001DDCD2;
extern unsigned char D_001DDCD3;
extern unsigned char D_001DDCD4;
extern unsigned char D_001DDCD5;
extern unsigned char D_001DDCE5;
extern int D_001DDCEC;
extern int D_001DDD68;
extern int D_001DDD6C;
extern int D_001DDD70;
extern char D_002175E0[];

void func_0258D0(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_001DDCD0 == 0 && D_001DDCD1 == 0) {
        if (name != D_002175E0) {
            strncpy(D_002175E0, name, 0x5F);
            D_002175E0[0x5F] = 0;
        }
        D_001DDCD3 = 0;
        D_001DDCD2 = a;
        D_001DDD68 = c;
        D_001DDD70 = e;
        D_001DDD6C = d;
        D_001DDCEC = f;
        D_001DDCE5 = 0;
        D_001DDCD4 = b;
        D_001DDCD5 = g;
        D_001DDCD0 = 1;
    }
}
