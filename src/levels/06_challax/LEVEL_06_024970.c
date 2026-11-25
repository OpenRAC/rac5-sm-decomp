/* LEVEL_06:0x024970 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_0021E128;
extern char D_0021CA80[];
extern unsigned char D_001E2DD0;
extern unsigned char D_001E2DD1;
extern unsigned char D_001E2DE7;
extern void (*D_001E2E68)(int);
extern int D_001E2E70;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_09B900(int a, unsigned b);
extern void func_09B790(int a);
extern int func_0248D8(void *a, int b);
extern int func_027A30(void);
extern int func_023C00(void);
extern int func_024BC0(void);
extern void func_025270(void);

int func_024970(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_09B900(1, 0xFFFFFFFF);
        func_09B790(0);
    }
    do {
        if (!D_0021E128->b34) {
            while (!D_0021E128->b34) {
            }
        }
        if (D_001E2DD1) {
            break;
        }
        if (func_0248D8(a, b)) {
            do {
                f = D_0021E128->b34;
                r = ((int (*)(int))func_027A30)(0);
                D_001E2DE7 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_023C00)(D_0021CA80) && !D_001E2DE7);
            if (!D_001E2DE7) {
                result = func_024BC0();
            } else {
                func_025270();
                D_001E2DD1 = 0;
            }
        } else {
            if (D_001E2E68 && D_0021E128->b34) {
                D_001E2E68(D_001E2E70);
            }
            D_001E2DD0 = 0;
            D_001E2DE7 = 0;
        }
    } while (D_001E2DE7);
    ReleaseBufferCache__Fv();
    return result;
}
