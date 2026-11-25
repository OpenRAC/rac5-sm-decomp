/* LEVEL_23:0x024338 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_001FE828;
extern char D_001FD180[];
extern unsigned char D_001C72D0;
extern unsigned char D_001C72D1;
extern unsigned char D_001C72E7;
extern void (*D_001C7368)(int);
extern int D_001C7370;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_097E70(int a, unsigned b);
extern void func_097D00(int a);
extern int func_0242A0(void *a, int b);
extern int func_0271B8(void);
extern int func_0235C8(void);
extern int func_024588(void);
extern void func_024C48(void);

int func_024338(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_097E70(1, 0xFFFFFFFF);
        func_097D00(0);
    }
    do {
        if (!D_001FE828->b34) {
            while (!D_001FE828->b34) {
            }
        }
        if (D_001C72D1) {
            break;
        }
        if (func_0242A0(a, b)) {
            do {
                f = D_001FE828->b34;
                r = ((int (*)(int))func_0271B8)(0);
                D_001C72E7 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_0235C8)(D_001FD180) && !D_001C72E7);
            if (!D_001C72E7) {
                result = func_024588();
            } else {
                func_024C48();
                D_001C72D1 = 0;
            }
        } else {
            if (D_001C7368 && D_001FE828->b34) {
                D_001C7368(D_001C7370);
            }
            D_001C72D0 = 0;
            D_001C72E7 = 0;
        }
    } while (D_001C72E7);
    ReleaseBufferCache__Fv();
    return result;
}
