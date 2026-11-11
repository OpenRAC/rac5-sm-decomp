/* LEVEL_23:0x0C69B8 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

struct Ctl0CFB88 {
    char pad_00[0x0C];
    unsigned int d_0C;
    char pad_10[0x04];
    int h_14;
};
struct Ea0CFB88 {
    char pad_00[0x38];
    int v_38;
};
struct Eb0CFB88 {
    char pad_00[0x40];
    int v_40;
};
struct Env0CFB88 {
    char pad_00[0x1C68];
    unsigned int n_1C68;
};

extern char D_002FDDE0[];
extern unsigned int D_001D79A8;
extern int D_001D6894;
extern struct Env0CFB88 *D_001C73AC;

int func_0CF228(int *set);
int func_0C6330(void);
int func_0C6310(struct Ctl0CFB88 *c);
void func_0C6988(void);
int func_0C62D0(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_022710(int h, int k);
int func_0226C8(int x, int y);
void func_0C6640(void);
void func_0C67C8(void);

void func_0C69B8(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0CF228((int *)D_002FDDE0);
    switch (D_001D79A8) {
    case 0:
        func_0C6330();
        break;
    case 1:
        if (c != 0) {
            if (func_0C6310(c) != 0) {
                func_0C6988();
            } else if (func_0C62D0(c) != 0) {
                x = func_022710(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_0226C8(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_001C73AC->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_001D6894 = m;
                }
                D_001D79A8 = 2;
            } else {
                func_0C6640();
            }
        } else {
            D_001D79A8 = 0;
        }
        break;
    case 2:
        func_0C67C8();
        break;
    }
}
