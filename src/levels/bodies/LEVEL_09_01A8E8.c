/* LEVEL_09:0x01A8E8 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_001D922C;
extern unsigned int D_001D9200;
extern int D_001D9204;
extern int D_001D91F8;
extern unsigned char D_001D9230;
typedef struct {
    char *p;
} Hold;

extern Hold D_001DDDAC;
extern Blk *D_00218B28;
extern void func_083CE8(int a, int b);
extern void func_0A32B0(int a, int b, int c, int d, int e, int f);
extern int func_0A32E8(int a);

int func_01A8E8(void)
{
    int flag;

    flag = 0;
    func_083CE8(0x200, 0x168);
    D_001D922C = D_001D922C - 1;
    if (D_001D922C < 0) {
        D_001D922C = -1;
        flag = 1;
    }
    if (flag) {
        func_0A32B0(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_001D9200) {
    case 0:
        if (flag) {
            if (func_0A32E8(4)) {
                D_001D9200 = 1;
                D_001D9204 = 5;
            }
        }
        break;
    case 1:
        D_001D9204 = D_001D9204 - 1;
        if (D_001D9204 == 0) {
            D_001D9200 = 2;
        }
        break;
    case 2:
        if (D_001D9230 == 0) {
            D_001D9230 = 1;
            D_00218B28->w_04 = D_001D91F8;
            D_001DDDAC.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
