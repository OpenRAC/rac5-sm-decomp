/* LEVEL_07:0x01BBB8 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_0020372C;
extern unsigned int D_00203700;
extern int D_00203704;
extern int D_002036F8;
extern unsigned char D_00203730;
typedef struct {
    char *p;
} Hold;

extern Hold D_002082AC;
extern Blk *D_00246CA8;
extern void func_089400(int a, int b);
extern void func_0A8000(int a, int b, int c, int d, int e, int f);
extern int func_0A8038(int a);

int func_01BBB8(void)
{
    int flag;

    flag = 0;
    func_089400(0x200, 0x168);
    D_0020372C = D_0020372C - 1;
    if (D_0020372C < 0) {
        D_0020372C = -1;
        flag = 1;
    }
    if (flag) {
        func_0A8000(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_00203700) {
    case 0:
        if (flag) {
            if (func_0A8038(4)) {
                D_00203700 = 1;
                D_00203704 = 5;
            }
        }
        break;
    case 1:
        D_00203704 = D_00203704 - 1;
        if (D_00203704 == 0) {
            D_00203700 = 2;
        }
        break;
    case 2:
        if (D_00203730 == 0) {
            D_00203730 = 1;
            D_00246CA8->w_04 = D_002036F8;
            D_002082AC.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
