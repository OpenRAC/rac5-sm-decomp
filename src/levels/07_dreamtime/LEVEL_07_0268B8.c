/* LEVEL_07:0x0268B8 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_00246CA8;
extern char D_00245600[];
extern unsigned char D_002081D0;
extern unsigned char D_002081D1;
extern unsigned char D_002081E7;
extern void (*D_00208268)(int);
extern int D_00208270;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_0A3130(int a, unsigned b);
extern void func_0A2FC0(int a);
extern int func_026820(void *a, int b);
extern int func_029988(void);
extern int func_025B48(void);
extern int func_026B08(void);
extern void func_0271B8(void);

int func_0268B8(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_0A3130(1, 0xFFFFFFFF);
        func_0A2FC0(0);
    }
    do {
        if (!D_00246CA8->b34) {
            while (!D_00246CA8->b34) {
            }
        }
        if (D_002081D1) {
            break;
        }
        if (func_026820(a, b)) {
            do {
                f = D_00246CA8->b34;
                r = ((int (*)(int))func_029988)(0);
                D_002081E7 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_025B48)(D_00245600) && !D_002081E7);
            if (!D_002081E7) {
                result = func_026B08();
            } else {
                func_0271B8();
                D_002081D1 = 0;
            }
        } else {
            if (D_00208268 && D_00246CA8->b34) {
                D_00208268(D_00208270);
            }
            D_002081D0 = 0;
            D_002081E7 = 0;
        }
    } while (D_002081E7);
    ReleaseBufferCache__Fv();
    return result;
}
