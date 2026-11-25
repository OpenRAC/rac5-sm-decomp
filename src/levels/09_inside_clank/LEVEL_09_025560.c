/* LEVEL_09:0x025560 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_00218B28;
extern char D_00217480[];
extern unsigned char D_001DDCD0;
extern unsigned char D_001DDCD1;
extern unsigned char D_001DDCE7;
extern void (*D_001DDD68)(int);
extern int D_001DDD70;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_09E3E0(int a, unsigned b);
extern void func_09E270(int a);
extern int func_0254C8(void *a, int b);
extern int func_0284B0(void);
extern int func_0247F0(void);
extern int func_0257B0(void);
extern void func_025E60(void);

int func_025560(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_09E3E0(1, 0xFFFFFFFF);
        func_09E270(0);
    }
    do {
        if (!D_00218B28->b34) {
            while (!D_00218B28->b34) {
            }
        }
        if (D_001DDCD1) {
            break;
        }
        if (func_0254C8(a, b)) {
            do {
                f = D_00218B28->b34;
                r = ((int (*)(int))func_0284B0)(0);
                D_001DDCE7 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_0247F0)(D_00217480) && !D_001DDCE7);
            if (!D_001DDCE7) {
                result = func_0257B0();
            } else {
                func_025E60();
                D_001DDCD1 = 0;
            }
        } else {
            if (D_001DDD68 && D_00218B28->b34) {
                D_001DDD68(D_001DDD70);
            }
            D_001DDCD0 = 0;
            D_001DDCE7 = 0;
        }
    } while (D_001DDCE7);
    ReleaseBufferCache__Fv();
    return result;
}
