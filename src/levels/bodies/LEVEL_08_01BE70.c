/* LEVEL_08:0x01BE70 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_00237FAC;
extern unsigned int D_00237F80;
extern int D_00237F84;
extern int D_00237F78;
extern unsigned char D_00237FB0;
typedef struct {
    char *p;
} Hold;

extern Hold D_0023CB2C;
extern Blk *D_00280628;
extern void func_08F380(int a, int b);
extern void func_0B08F8(int a, int b, int c, int d, int e, int f);
extern int func_0B0930(int a);

int func_01BE70(void)
{
    int flag;

    flag = 0;
    func_08F380(0x200, 0x168);
    D_00237FAC = D_00237FAC - 1;
    if (D_00237FAC < 0) {
        D_00237FAC = -1;
        flag = 1;
    }
    if (flag) {
        func_0B08F8(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_00237F80) {
    case 0:
        if (flag) {
            if (func_0B0930(4)) {
                D_00237F80 = 1;
                D_00237F84 = 5;
            }
        }
        break;
    case 1:
        D_00237F84 = D_00237F84 - 1;
        if (D_00237F84 == 0) {
            D_00237F80 = 2;
        }
        break;
    case 2:
        if (D_00237FB0 == 0) {
            D_00237FB0 = 1;
            D_00280628->w_04 = D_00237F78;
            D_0023CB2C.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
