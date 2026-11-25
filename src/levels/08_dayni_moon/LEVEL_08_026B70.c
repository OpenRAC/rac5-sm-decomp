/* LEVEL_08:0x026B70 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_00280628;
extern char D_0027EF80[];
extern unsigned char D_0023CA50;
extern unsigned char D_0023CA51;
extern unsigned char D_0023CA67;
extern void (*D_0023CAE8)(int);
extern int D_0023CAF0;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_0ABA28(int a, unsigned b);
extern void func_0AB8B8(int a);
extern int func_026AD8(void *a, int b);
extern int func_029BC0(void);
extern int func_025E00(void);
extern int func_026DC0(void);
extern void func_027480(void);

int func_026B70(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_0ABA28(1, 0xFFFFFFFF);
        func_0AB8B8(0);
    }
    do {
        if (!D_00280628->b34) {
            while (!D_00280628->b34) {
            }
        }
        if (D_0023CA51) {
            break;
        }
        if (func_026AD8(a, b)) {
            do {
                f = D_00280628->b34;
                r = ((int (*)(int))func_029BC0)(0);
                D_0023CA67 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_025E00)(D_0027EF80) && !D_0023CA67);
            if (!D_0023CA67) {
                result = func_026DC0();
            } else {
                func_027480();
                D_0023CA51 = 0;
            }
        } else {
            if (D_0023CAE8 && D_00280628->b34) {
                D_0023CAE8(D_0023CAF0);
            }
            D_0023CA50 = 0;
            D_0023CA67 = 0;
        }
    } while (D_0023CA67);
    ReleaseBufferCache__Fv();
    return result;
}
