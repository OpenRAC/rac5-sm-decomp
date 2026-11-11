/* LEVEL_23:0x01A008 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_001C282C;
extern unsigned int D_001C2800;
extern int D_001C2804;
extern int D_001C27F8;
extern unsigned char D_001C2830;
typedef struct {
    char *p;
} Hold;

extern Hold D_001C73AC;
extern Blk *D_001FE828;
extern void func_07D1F0(int a, int b);
extern void func_09CD40(int a, int b, int c, int d, int e, int f);
extern int func_09CD78(int a);

int func_01A008(void)
{
    int flag;

    flag = 0;
    func_07D1F0(0x200, 0x168);
    D_001C282C = D_001C282C - 1;
    if (D_001C282C < 0) {
        D_001C282C = -1;
        flag = 1;
    }
    if (flag) {
        func_09CD40(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_001C2800) {
    case 0:
        if (flag) {
            if (func_09CD78(4)) {
                D_001C2800 = 1;
                D_001C2804 = 5;
            }
        }
        break;
    case 1:
        D_001C2804 = D_001C2804 - 1;
        if (D_001C2804 == 0) {
            D_001C2800 = 2;
        }
        break;
    case 2:
        if (D_001C2830 == 0) {
            D_001C2830 = 1;
            D_001FE828->w_04 = D_001C27F8;
            D_001C73AC.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
