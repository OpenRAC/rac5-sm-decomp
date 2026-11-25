/* LEVEL_24:0x023FE8 -- placement copy of LEVEL_01_0262F0.c: placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_001FD2A8;
extern char D_001FBC00[];
extern unsigned char D_001C4B50;
extern unsigned char D_001C4B51;
extern unsigned char D_001C4B67;
extern void (*D_001C4BE8)(int);
extern int D_001C4BF0;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_09A9A8(int a, unsigned b);
extern void func_09A838(int a);
extern int func_023F50(void *a, int b);
extern int func_026B88(void);
extern int func_023278(void);
extern int func_024238(void);
extern void func_024820(void);

int func_023FE8(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_09A9A8(1, 0xFFFFFFFF);
        func_09A838(0);
    }
    do {
        if (!D_001FD2A8->b34) {
            while (!D_001FD2A8->b34) {
            }
        }
        if (D_001C4B51) {
            break;
        }
        if (func_023F50(a, b)) {
            do {
                f = D_001FD2A8->b34;
                r = ((int (*)(int))func_026B88)(0);
                D_001C4B67 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_023278)(D_001FBC00) && !D_001C4B67);
            if (!D_001C4B67) {
                result = func_024238();
            } else {
                func_024820();
                D_001C4B51 = 0;
            }
        } else {
            if (D_001C4BE8 && D_001FD2A8->b34) {
                D_001C4BE8(D_001C4BF0);
            }
            D_001C4B50 = 0;
            D_001C4B67 = 0;
        }
    } while (D_001C4B67);
    ReleaseBufferCache__Fv();
    return result;
}
