/* LEVEL_02:0x026BC8 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_002488A8;
extern char D_00247200[];
extern unsigned char D_00208B50;
extern unsigned char D_00208B51;
extern unsigned char D_00208B67;
extern void (*D_00208BE8)(int);
extern int D_00208BF0;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_0A7A40(int a, unsigned b);
extern void func_0A78D0(int a);
extern int func_026B30(void *a, int b);
extern int func_029E10(void);
extern int func_025E58(void);
extern int func_026E18(void);
extern void func_0274C8(void);

int func_026BC8(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_0A7A40(1, 0xFFFFFFFF);
        func_0A78D0(0);
    }
    do {
        if (!D_002488A8->b34) {
            while (!D_002488A8->b34) {
            }
        }
        if (D_00208B51) {
            break;
        }
        if (func_026B30(a, b)) {
            do {
                f = D_002488A8->b34;
                r = ((int (*)(int))func_029E10)(0);
                D_00208B67 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_025E58)(D_00247200) && !D_00208B67);
            if (!D_00208B67) {
                result = func_026E18();
            } else {
                func_0274C8();
                D_00208B51 = 0;
            }
        } else {
            if (D_00208BE8 && D_002488A8->b34) {
                D_00208BE8(D_00208BF0);
            }
            D_00208B50 = 0;
            D_00208B67 = 0;
        }
    } while (D_00208B67);
    ReleaseBufferCache__Fv();
    return result;
}
