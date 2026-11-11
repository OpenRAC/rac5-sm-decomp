/* LEVEL_24:0x019AE8 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_001C00AC;
extern unsigned int D_001C0080;
extern int D_001C0084;
extern int D_001C0078;
extern unsigned char D_001C00B0;
typedef struct {
    char *p;
} Hold;

extern Hold D_001C4C2C;
extern Blk *D_001FD2A8;
extern void func_0805D0(int a, int b);
extern void func_09F878(int a, int b, int c, int d, int e, int f);
extern int func_09F8B0(int a);

int func_019AE8(void)
{
    int flag;

    flag = 0;
    func_0805D0(0x200, 0x168);
    D_001C00AC = D_001C00AC - 1;
    if (D_001C00AC < 0) {
        D_001C00AC = -1;
        flag = 1;
    }
    if (flag) {
        func_09F878(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_001C0080) {
    case 0:
        if (flag) {
            if (func_09F8B0(4)) {
                D_001C0080 = 1;
                D_001C0084 = 5;
            }
        }
        break;
    case 1:
        D_001C0084 = D_001C0084 - 1;
        if (D_001C0084 == 0) {
            D_001C0080 = 2;
        }
        break;
    case 2:
        if (D_001C00B0 == 0) {
            D_001C00B0 = 1;
            D_001FD2A8->w_04 = D_001C0078;
            D_001C4C2C.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
