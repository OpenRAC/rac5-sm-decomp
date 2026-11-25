/* LEVEL_05:0x025200 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_0021D0A8;
extern char D_0021BA00[];
extern unsigned char D_001E3250;
extern unsigned char D_001E3251;
extern unsigned char D_001E3267;
extern void (*D_001E32E8)(int);
extern int D_001E32F0;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_09F6F0(int a, unsigned b);
extern void func_09F580(int a);
extern int func_025168(void *a, int b);
extern int func_0282C0(void);
extern int func_024490(void);
extern int func_025450(void);
extern void func_025B00(void);

int func_025200(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_09F6F0(1, 0xFFFFFFFF);
        func_09F580(0);
    }
    do {
        if (!D_0021D0A8->b34) {
            while (!D_0021D0A8->b34) {
            }
        }
        if (D_001E3251) {
            break;
        }
        if (func_025168(a, b)) {
            do {
                f = D_0021D0A8->b34;
                r = ((int (*)(int))func_0282C0)(0);
                D_001E3267 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_024490)(D_0021BA00) && !D_001E3267);
            if (!D_001E3267) {
                result = func_025450();
            } else {
                func_025B00();
                D_001E3251 = 0;
            }
        } else {
            if (D_001E32E8 && D_0021D0A8->b34) {
                D_001E32E8(D_001E32F0);
            }
            D_001E3250 = 0;
            D_001E3267 = 0;
        }
    } while (D_001E3267);
    ReleaseBufferCache__Fv();
    return result;
}
