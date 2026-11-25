/* LEVEL_16:0x023E50 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_001E00A8;
extern char D_001DEA00[];
extern unsigned char D_001A19D8;
extern unsigned char D_001A19D9;
extern unsigned char D_001A19EF;
extern void (*D_001A1A70)(int);
extern int D_001A1A78;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_090390(int a, unsigned b);
extern void func_090220(int a);
extern int func_023DB8(void *a, int b);
extern int func_0270A0(void);
extern int func_0230E0(void);
extern int func_0240A0(void);
extern void func_024688(void);

int func_023E50(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_090390(1, 0xFFFFFFFF);
        func_090220(0);
    }
    do {
        if (!D_001E00A8->b34) {
            while (!D_001E00A8->b34) {
            }
        }
        if (D_001A19D9) {
            break;
        }
        if (func_023DB8(a, b)) {
            do {
                f = D_001E00A8->b34;
                r = ((int (*)(int))func_0270A0)(0);
                D_001A19EF = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_0230E0)(D_001DEA00) && !D_001A19EF);
            if (!D_001A19EF) {
                result = func_0240A0();
            } else {
                func_024688();
                D_001A19D9 = 0;
            }
        } else {
            if (D_001A1A70 && D_001E00A8->b34) {
                D_001A1A70(D_001A1A78);
            }
            D_001A19D8 = 0;
            D_001A19EF = 0;
        }
    } while (D_001A19EF);
    ReleaseBufferCache__Fv();
    return result;
}
