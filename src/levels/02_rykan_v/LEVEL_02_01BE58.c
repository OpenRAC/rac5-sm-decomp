/* LEVEL_02:0x01BE58 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_002040AC;
extern unsigned int D_00204080;
extern int D_00204084;
extern int D_00204078;
extern unsigned char D_002040B0;
typedef struct {
    char *p;
} Hold;

extern Hold D_00208C2C;
extern Blk *D_002488A8;
extern void func_08DC60(int a, int b);
extern void func_0AC910(int a, int b, int c, int d, int e, int f);
extern int func_0AC948(int a);

int func_01BE58(void)
{
    int flag;

    flag = 0;
    func_08DC60(0x200, 0x168);
    D_002040AC = D_002040AC - 1;
    if (D_002040AC < 0) {
        D_002040AC = -1;
        flag = 1;
    }
    if (flag) {
        func_0AC910(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_00204080) {
    case 0:
        if (flag) {
            if (func_0AC948(4)) {
                D_00204080 = 1;
                D_00204084 = 5;
            }
        }
        break;
    case 1:
        D_00204084 = D_00204084 - 1;
        if (D_00204084 == 0) {
            D_00204080 = 2;
        }
        break;
    case 2:
        if (D_002040B0 == 0) {
            D_002040B0 = 1;
            D_002488A8->w_04 = D_00204078;
            D_00208C2C.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
