/* LEVEL_06:0x0CA488 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_00319720[];
extern unsigned int D_001F34A8;
extern int D_001F2394;
extern struct Env0CFB88 *D_001E2EAC;

int func_0D2CF8(int *set);
int func_0C9E00(void);
int func_0C9DE0(struct Ctl0CFB88 *c);
void func_0CA458(void);
int func_0C9DA0(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_022D78(int h, int k);
int func_022D30(int x, int y);
void func_0CA110(void);
void func_0CA298(void);

void func_0CA488(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0D2CF8((int *)D_00319720);
    switch (D_001F34A8) {
    case 0:
        func_0C9E00();
        break;
    case 1:
        if (c != 0) {
            if (func_0C9DE0(c) != 0) {
                func_0CA458();
            } else if (func_0C9DA0(c) != 0) {
                x = func_022D78(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_022D30(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_001E2EAC->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_001F2394 = m;
                }
                D_001F34A8 = 2;
            } else {
                func_0CA110();
            }
        } else {
            D_001F34A8 = 0;
        }
        break;
    case 2:
        func_0CA298();
        break;
    }
}
