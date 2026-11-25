/* LEVEL_04:0x025F70 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_0024BBA8;
extern char D_0024A500[];
extern unsigned char D_0020D050;
extern unsigned char D_0020D051;
extern unsigned char D_0020D067;
extern void (*D_0020D0E8)(int);
extern int D_0020D0F0;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_0A6340(int a, unsigned b);
extern void func_0A61D0(int a);
extern int func_025ED8(void *a, int b);
extern int func_0290F0(void);
extern int func_025200(void);
extern int func_0261C0(void);
extern void func_026880(void);

int func_025F70(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_0A6340(1, 0xFFFFFFFF);
        func_0A61D0(0);
    }
    do {
        if (!D_0024BBA8->b34) {
            while (!D_0024BBA8->b34) {
            }
        }
        if (D_0020D051) {
            break;
        }
        if (func_025ED8(a, b)) {
            do {
                f = D_0024BBA8->b34;
                r = ((int (*)(int))func_0290F0)(0);
                D_0020D067 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_025200)(D_0024A500) && !D_0020D067);
            if (!D_0020D067) {
                result = func_0261C0();
            } else {
                func_026880();
                D_0020D051 = 0;
            }
        } else {
            if (D_0020D0E8 && D_0024BBA8->b34) {
                D_0020D0E8(D_0020D0F0);
            }
            D_0020D050 = 0;
            D_0020D067 = 0;
        }
    } while (D_0020D067);
    ReleaseBufferCache__Fv();
    return result;
}
