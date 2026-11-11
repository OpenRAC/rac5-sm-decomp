/* LEVEL_18:0x0191B0 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_0019C334;
extern unsigned int D_0019C308;
extern int D_0019C30C;
extern int D_0019C300;
extern unsigned char D_0019C338;
typedef struct {
    char *p;
} Hold;

extern Hold D_001A2F34;
extern Blk *D_001E0428;
extern void func_0781C8(int a, int b);
extern void func_094178(int a, int b, int c, int d, int e, int f);
extern int func_0941B0(int a);

int func_0191B0(void)
{
    int flag;

    flag = 0;
    func_0781C8(0x200, 0x168);
    D_0019C334 = D_0019C334 - 1;
    if (D_0019C334 < 0) {
        D_0019C334 = -1;
        flag = 1;
    }
    if (flag) {
        func_094178(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_0019C308) {
    case 0:
        if (flag) {
            if (func_0941B0(4)) {
                D_0019C308 = 1;
                D_0019C30C = 5;
            }
        }
        break;
    case 1:
        D_0019C30C = D_0019C30C - 1;
        if (D_0019C30C == 0) {
            D_0019C308 = 2;
        }
        break;
    case 2:
        if (D_0019C338 == 0) {
            D_0019C338 = 1;
            D_001E0428->w_04 = D_0019C300;
            D_001A2F34.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
