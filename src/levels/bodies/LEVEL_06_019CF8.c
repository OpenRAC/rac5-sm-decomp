/* LEVEL_06:0x019CF8 -- placement copy of FRONTEND_002020.c: per-frame state machine: counts a timer down, runs a three-state sequence and, in the last state, publishes a word and clears a byte once. */

typedef struct {
    int w_00;
    int w_04;
} Blk;

extern int D_001DE32C;
extern unsigned int D_001DE300;
extern int D_001DE304;
extern int D_001DE2F8;
extern unsigned char D_001DE330;
typedef struct {
    char *p;
} Hold;

extern Hold D_001E2EAC;
extern Blk *D_0021E128;
extern void func_0801A8(int a, int b);
extern void func_0A07D0(int a, int b, int c, int d, int e, int f);
extern int func_0A0808(int a);

int func_019CF8(void)
{
    int flag;

    flag = 0;
    func_0801A8(0x200, 0x168);
    D_001DE32C = D_001DE32C - 1;
    if (D_001DE32C < 0) {
        D_001DE32C = -1;
        flag = 1;
    }
    if (flag) {
        func_0A07D0(4, 0xFF000000, 0x20, 0x20, 3, 0);
    }
    switch (D_001DE300) {
    case 0:
        if (flag) {
            if (func_0A0808(4)) {
                D_001DE300 = 1;
                D_001DE304 = 5;
            }
        }
        break;
    case 1:
        D_001DE304 = D_001DE304 - 1;
        if (D_001DE304 == 0) {
            D_001DE300 = 2;
        }
        break;
    case 2:
        if (D_001DE330 == 0) {
            D_001DE330 = 1;
            D_0021E128->w_04 = D_001DE2F8;
            D_001E2EAC.p[0x10513] = 0;
        }
        return 1;
    }
    return 0;
}
