/* LEVEL_04:0x01B178 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_002085AC;
extern unsigned int D_00208580;
extern int D_00208584;
extern int D_00208578;
extern unsigned char D_002085B0;
typedef struct {
    char *p;
} Hold;

extern Hold D_0020D12C;
extern Blk *D_0024BBA8;
extern void func_08A5C8(int a, int b);
extern void func_0AB210(int a, int b, int c, int d, int e, int f);
extern int func_0AB248(int a);

int func_01B178(void)
{
    int flag;

    flag = 0;
    func_08A5C8(0x200, 0x168);
    D_002085AC = D_002085AC - 1;
    if (D_002085AC < 0) {
        D_002085AC = -1;
        flag = 1;
    }
    if (flag) {
        func_0AB210(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_00208580) {
    case 0:
        if (flag) {
            if (func_0AB248(4)) {
                D_00208580 = 1;
                D_00208584 = 5;
            }
        }
        break;
    case 1:
        D_00208584 = D_00208584 - 1;
        if (D_00208584 == 0) {
            D_00208580 = 2;
        }
        break;
    case 2:
        if (D_002085B0 == 0) {
            D_002085B0 = 1;
            D_0024BBA8->w_04 = D_00208578;
            D_0020D12C.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
