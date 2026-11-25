/* LEVEL_15:0x020578 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_00179528;
extern char D_00177E80[];
extern unsigned char D_00148B50;
extern unsigned char D_00148B51;
extern unsigned char D_00148B67;
extern void (*D_00148BE8)(int);
extern int D_00148BF0;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_081A28(int a, unsigned b);
extern void func_0818B8(int a);
extern int func_0204E0(void *a, int b);
extern int func_022E20(void);
extern int func_01F808(void);
extern int func_0207C8(void);
extern void func_020DB0(void);

int func_020578(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_081A28(1, 0xFFFFFFFF);
        func_0818B8(0);
    }
    do {
        if (!D_00179528->b34) {
            while (!D_00179528->b34) {
            }
        }
        if (D_00148B51) {
            break;
        }
        if (func_0204E0(a, b)) {
            do {
                f = D_00179528->b34;
                r = ((int (*)(int))func_022E20)(0);
                D_00148B67 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_01F808)(D_00177E80) && !D_00148B67);
            if (!D_00148B67) {
                result = func_0207C8();
            } else {
                func_020DB0();
                D_00148B51 = 0;
            }
        } else {
            if (D_00148BE8 && D_00179528->b34) {
                D_00148BE8(D_00148BF0);
            }
            D_00148B50 = 0;
            D_00148B67 = 0;
        }
    } while (D_00148B67);
    ReleaseBufferCache__Fv();
    return result;
}
