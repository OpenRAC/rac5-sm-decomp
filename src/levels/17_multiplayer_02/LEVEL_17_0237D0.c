/* LEVEL_17:0x0237D0 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_001D13A8;
extern char D_001CFD00[];
extern unsigned char D_00194FD8;
extern unsigned char D_00194FD9;
extern unsigned char D_00194FEF;
extern void (*D_00195070)(int);
extern int D_00195078;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_08F888(int a, unsigned b);
extern void func_08F718(int a);
extern int func_023738(void *a, int b);
extern int func_026A20(void);
extern int func_022A60(void);
extern int func_023A20(void);
extern void func_024008(void);

int func_0237D0(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_08F888(1, 0xFFFFFFFF);
        func_08F718(0);
    }
    do {
        if (!D_001D13A8->b34) {
            while (!D_001D13A8->b34) {
            }
        }
        if (D_00194FD9) {
            break;
        }
        if (func_023738(a, b)) {
            do {
                f = D_001D13A8->b34;
                r = ((int (*)(int))func_026A20)(0);
                D_00194FEF = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_022A60)(D_001CFD00) && !D_00194FEF);
            if (!D_00194FEF) {
                result = func_023A20();
            } else {
                func_024008();
                D_00194FD9 = 0;
            }
        } else {
            if (D_00195070 && D_001D13A8->b34) {
                D_00195070(D_00195078);
            }
            D_00194FD8 = 0;
            D_00194FEF = 0;
        }
    } while (D_00194FEF);
    ReleaseBufferCache__Fv();
    return result;
}
