/* LEVEL_16:0x019B68 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_0019AEB4;
extern unsigned int D_0019AE88;
extern int D_0019AE8C;
extern int D_0019AE80;
extern unsigned char D_0019AEB8;
typedef struct {
    char *p;
} Hold;

extern Hold D_001A1AB4;
extern Blk *D_001E00A8;
extern void func_078848(int a, int b);
extern void func_095168(int a, int b, int c, int d, int e, int f);
extern int func_0951A0(int a);

int func_019B68(void)
{
    int flag;

    flag = 0;
    func_078848(0x200, 0x168);
    D_0019AEB4 = D_0019AEB4 - 1;
    if (D_0019AEB4 < 0) {
        D_0019AEB4 = -1;
        flag = 1;
    }
    if (flag) {
        func_095168(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_0019AE88) {
    case 0:
        if (flag) {
            if (func_0951A0(4)) {
                D_0019AE88 = 1;
                D_0019AE8C = 5;
            }
        }
        break;
    case 1:
        D_0019AE8C = D_0019AE8C - 1;
        if (D_0019AE8C == 0) {
            D_0019AE88 = 2;
        }
        break;
    case 2:
        if (D_0019AEB8 == 0) {
            D_0019AEB8 = 1;
            D_001E00A8->w_04 = D_0019AE80;
            D_001A1AB4.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
