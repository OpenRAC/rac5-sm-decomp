/* LEVEL_22:0x021048 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_00182FA8;
extern char D_00181900[];
extern unsigned char D_00153250;
extern unsigned char D_00153251;
extern unsigned char D_00153267;
extern void (*D_001532E8)(int);
extern int D_001532F0;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_08F740(int a, unsigned b);
extern void func_08F5D0(int a);
extern int func_020FB0(void *a, int b);
extern int func_023BE0(void);
extern int func_0202D8(void);
extern int func_021298(void);
extern void func_021880(void);

int func_021048(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_08F740(1, 0xFFFFFFFF);
        func_08F5D0(0);
    }
    do {
        if (!D_00182FA8->b34) {
            while (!D_00182FA8->b34) {
            }
        }
        if (D_00153251) {
            break;
        }
        if (func_020FB0(a, b)) {
            do {
                f = D_00182FA8->b34;
                r = ((int (*)(int))func_023BE0)(0);
                D_00153267 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_0202D8)(D_00181900) && !D_00153267);
            if (!D_00153267) {
                result = func_021298();
            } else {
                func_021880();
                D_00153251 = 0;
            }
        } else {
            if (D_001532E8 && D_00182FA8->b34) {
                D_001532E8(D_001532F0);
            }
            D_00153250 = 0;
            D_00153267 = 0;
        }
    } while (D_00153267);
    ReleaseBufferCache__Fv();
    return result;
}
