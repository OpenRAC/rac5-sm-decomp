/* LEVEL_18:0x023498 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_001E0428;
extern char D_001DED80[];
extern unsigned char D_001A2E58;
extern unsigned char D_001A2E59;
extern unsigned char D_001A2E6F;
extern void (*D_001A2EF0)(int);
extern int D_001A2EF8;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_08F3A0(int a, unsigned b);
extern void func_08F230(int a);
extern int func_023400(void *a, int b);
extern int func_026650(void);
extern int func_022728(void);
extern int func_0236E8(void);
extern void func_023CD0(void);

int func_023498(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_08F3A0(1, 0xFFFFFFFF);
        func_08F230(0);
    }
    do {
        if (!D_001E0428->b34) {
            while (!D_001E0428->b34) {
            }
        }
        if (D_001A2E59) {
            break;
        }
        if (func_023400(a, b)) {
            do {
                f = D_001E0428->b34;
                r = ((int (*)(int))func_026650)(0);
                D_001A2E6F = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_022728)(D_001DED80) && !D_001A2E6F);
            if (!D_001A2E6F) {
                result = func_0236E8();
            } else {
                func_023CD0();
                D_001A2E59 = 0;
            }
        } else {
            if (D_001A2EF0 && D_001E0428->b34) {
                D_001A2EF0(D_001A2EF8);
            }
            D_001A2E58 = 0;
            D_001A2E6F = 0;
        }
    } while (D_001A2E6F);
    ReleaseBufferCache__Fv();
    return result;
}
