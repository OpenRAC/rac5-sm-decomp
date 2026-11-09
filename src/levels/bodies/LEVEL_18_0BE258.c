/* LEVEL_18:0x0BE258 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_0027ADA0[];
extern unsigned int D_001B38D8;
extern int D_001B27C4;
extern struct Env0CFB88 *D_001A2F34;

int func_0C6AC8(int *set);
int func_0BDBD0(void);
int func_0BDBB0(struct Ctl0CFB88 *c);
void func_0BE228(void);
int func_0BDB70(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_021758(int h, int k);
int func_021710(int x, int y);
void func_0BDEE0(void);
void func_0BE068(void);

void func_0BE258(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0C6AC8((int *)D_0027ADA0);
    switch (D_001B38D8) {
    case 0:
        func_0BDBD0();
        break;
    case 1:
        if (c != 0) {
            if (func_0BDBB0(c) != 0) {
                func_0BE228();
            } else if (func_0BDB70(c) != 0) {
                x = func_021758(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_021710(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_001A2F34->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_001B27C4 = m;
                }
                D_001B38D8 = 2;
            } else {
                func_0BDEE0();
            }
        } else {
            D_001B38D8 = 0;
        }
        break;
    case 2:
        func_0BE068();
        break;
    }
}
