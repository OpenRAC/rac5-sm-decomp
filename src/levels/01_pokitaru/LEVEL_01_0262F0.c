/* LEVEL_01:0x0262F0 -- placement copy of FRONTEND_001240.c: waits for the buffer cache, then runs the load loop until it finishes. */
typedef struct Cache {
    char pad0[0x34];
    unsigned char b34;
} Cache;

extern Cache *D_002313A8;
extern char D_0022FD00[];
extern unsigned char D_001F3ED0;
extern unsigned char D_001F3ED1;
extern unsigned char D_001F3EE7;
extern void (*D_001F3F68)(int);
extern int D_001F3F70;

extern unsigned BufferCacheInUse__Fv(void);
extern void AllocateBufferCache__FUi(unsigned size);
extern int GetBufferCachePtr__Fv(void);
extern void ReleaseBufferCache__Fv(void);
extern void func_0A1130(int a, unsigned b);
extern void func_0A0FC0(int a);
extern int func_026258(void *a, int b);
extern int func_029648(void);
extern int func_025580(void);
extern int func_026540(void);
extern void func_026BF0(void);

int func_0262F0(void *a, int b)
{
    int result;
    int f;
    int r;

    result = 0;
    if (BufferCacheInUse__Fv() == 0xFFFFFFFF) {
        AllocateBufferCache__FUi(0x200000);
    }
    while (!GetBufferCachePtr__Fv()) {
        func_0A1130(1, 0xFFFFFFFF);
        func_0A0FC0(0);
    }
    do {
        if (!D_002313A8->b34) {
            while (!D_002313A8->b34) {
            }
        }
        if (D_001F3ED1) {
            break;
        }
        if (func_026258(a, b)) {
            do {
                f = D_002313A8->b34;
                r = ((int (*)(int))func_029648)(0);
                D_001F3EE7 = (f ^ 1) | (r != 0);
            } while (!((int (*)(char *))func_025580)(D_0022FD00) && !D_001F3EE7);
            if (!D_001F3EE7) {
                result = func_026540();
            } else {
                func_026BF0();
                D_001F3ED1 = 0;
            }
        } else {
            if (D_001F3F68 && D_002313A8->b34) {
                D_001F3F68(D_001F3F70);
            }
            D_001F3ED0 = 0;
            D_001F3EE7 = 0;
        }
    } while (D_001F3EE7);
    ReleaseBufferCache__Fv();
    return result;
}
