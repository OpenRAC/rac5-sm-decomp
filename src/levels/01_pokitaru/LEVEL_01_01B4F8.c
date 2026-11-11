/* LEVEL_01:0x01B4F8 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_001EF42C;
extern unsigned int D_001EF400;
extern int D_001EF404;
extern int D_001EF3F8;
extern unsigned char D_001EF430;
typedef struct {
    char *p;
} Hold;

extern Hold D_001F3FAC;
extern Blk *D_002313A8;
extern void func_087330(int a, int b);
extern void func_0A6000(int a, int b, int c, int d, int e, int f);
extern int func_0A6038(int a);

int func_01B4F8(void)
{
    int flag;

    flag = 0;
    func_087330(0x200, 0x168);
    D_001EF42C = D_001EF42C - 1;
    if (D_001EF42C < 0) {
        D_001EF42C = -1;
        flag = 1;
    }
    if (flag) {
        func_0A6000(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_001EF400) {
    case 0:
        if (flag) {
            if (func_0A6038(4)) {
                D_001EF400 = 1;
                D_001EF404 = 5;
            }
        }
        break;
    case 1:
        D_001EF404 = D_001EF404 - 1;
        if (D_001EF404 == 0) {
            D_001EF400 = 2;
        }
        break;
    case 2:
        if (D_001EF430 == 0) {
            D_001EF430 = 1;
            D_002313A8->w_04 = D_001EF3F8;
            D_001F3FAC.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
