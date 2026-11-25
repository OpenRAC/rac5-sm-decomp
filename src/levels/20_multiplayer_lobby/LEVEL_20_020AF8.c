/* LEVEL_20:0x020AF8 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_00137A28;
extern char D_00136380[];
extern unsigned char D_001040B8;
extern unsigned char D_001040B9;
extern unsigned char D_001040CF;
extern void (*D_00104150)(int);
extern int D_00104158;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_07AA88(int a, unsigned b);
extern void func_07A918(int a);
extern int func_020A60(void *a, int b);
extern int func_023BA8(void);
extern int func_01FD88(void);
extern int func_020D48(void);
extern void func_021330(void);

int func_020AF8(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_07AA88(1, 0xFFFFFFFF);
        func_07A918(0);
    }
    do {
        if (!D_00137A28->b34) {
            while (!D_00137A28->b34) {
            }
        }
        if (D_001040B9) {
            break;
        }
        if (func_020A60(a, b)) {
            do {
                f = D_00137A28->b34;
                r = ((int (*)(int))func_023BA8)(0);
                D_001040CF = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_01FD88)(D_00136380) && !D_001040CF);
            if (!D_001040CF) {
                result = func_020D48();
            } else {
                func_021330();
                D_001040B9 = 0;
            }
        } else {
            if (D_00104150 && D_00137A28->b34) {
                D_00104150(D_00104158);
            }
            D_001040B8 = 0;
            D_001040CF = 0;
        }
    } while (D_001040CF);
    ReleaseBufferCache__Fv();
    return result;
}
