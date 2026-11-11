/* LEVEL_07:0x0D1BE8 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_003422A0[];
extern unsigned int D_002188A8;
extern int D_00217794;
extern struct Env0CFB88 *D_002082AC;

int func_0DA458(int *set);
int func_0D1560(void);
int func_0D1540(struct Ctl0CFB88 *c);
void func_0D1BB8(void);
int func_0D1500(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_024C38(int h, int k);
int func_024BF0(int x, int y);
void func_0D1870(void);
void func_0D19F8(void);

void func_0D1BE8(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0DA458((int *)D_003422A0);
    switch (D_002188A8) {
    case 0:
        func_0D1560();
        break;
    case 1:
        if (c != 0) {
            if (func_0D1540(c) != 0) {
                func_0D1BB8();
            } else if (func_0D1500(c) != 0) {
                x = func_024C38(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_024BF0(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_002082AC->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_00217794 = m;
                }
                D_002188A8 = 2;
            } else {
                func_0D1870();
            }
        } else {
            D_002188A8 = 0;
        }
        break;
    case 2:
        func_0D19F8();
        break;
    }
}
