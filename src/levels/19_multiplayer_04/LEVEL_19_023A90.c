/* LEVEL_19:0x023A90 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_001E0228;
extern char D_001DEB80[];
extern unsigned char D_001A2B58;
extern unsigned char D_001A2B59;
extern unsigned char D_001A2B6F;
extern void (*D_001A2BF0)(int);
extern int D_001A2BF8;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_08FC20(int a, unsigned b);
extern void func_08FAB0(int a);
extern int func_0239F8(void *a, int b);
extern int func_026C48(void);
extern int func_022D20(void);
extern int func_023CE0(void);
extern void func_0242C8(void);

int func_023A90(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_08FC20(1, 0xFFFFFFFF);
        func_08FAB0(0);
    }
    do {
        if (!D_001E0228->b34) {
            while (!D_001E0228->b34) {
            }
        }
        if (D_001A2B59) {
            break;
        }
        if (func_0239F8(a, b)) {
            do {
                f = D_001E0228->b34;
                r = ((int (*)(int))func_026C48)(0);
                D_001A2B6F = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_022D20)(D_001DEB80) && !D_001A2B6F);
            if (!D_001A2B6F) {
                result = func_023CE0();
            } else {
                func_0242C8();
                D_001A2B59 = 0;
            }
        } else {
            if (D_001A2BF0 && D_001E0228->b34) {
                D_001A2BF0(D_001A2BF8);
            }
            D_001A2B58 = 0;
            D_001A2B6F = 0;
        }
    } while (D_001A2B6F);
    ReleaseBufferCache__Fv();
    return result;
}
