/* LEVEL_03:0x0261C0 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_0024C228;
extern char D_0024AB80[];
extern unsigned char D_0020C550;
extern unsigned char D_0020C551;
extern unsigned char D_0020C567;
extern void (*D_0020C5E8)(int);
extern int D_0020C5F0;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_0A0EB0(int a, unsigned b);
extern void func_0A0D40(int a);
extern int func_026128(void *a, int b);
extern int func_029440(void);
extern int func_025450(void);
extern int func_026410(void);
extern void func_026AD0(void);

int func_0261C0(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_0A0EB0(1, 0xFFFFFFFF);
        func_0A0D40(0);
    }
    do {
        if (!D_0024C228->b34) {
            while (!D_0024C228->b34) {
            }
        }
        if (D_0020C551) {
            break;
        }
        if (func_026128(a, b)) {
            do {
                f = D_0024C228->b34;
                r = ((int (*)(int))func_029440)(0);
                D_0020C567 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_025450)(D_0024AB80) && !D_0020C567);
            if (!D_0020C567) {
                result = func_026410();
            } else {
                func_026AD0();
                D_0020C551 = 0;
            }
        } else {
            if (D_0020C5E8 && D_0024C228->b34) {
                D_0020C5E8(D_0020C5F0);
            }
            D_0020C550 = 0;
            D_0020C567 = 0;
        }
    } while (D_0020C567);
    ReleaseBufferCache__Fv();
    return result;
}
