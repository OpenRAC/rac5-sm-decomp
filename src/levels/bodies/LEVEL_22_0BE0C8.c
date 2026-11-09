/* LEVEL_22:0x0BE0C8 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_00282560[];
extern unsigned int D_00163928;
extern int D_00162814;
extern struct Env0CFB88 *D_0015332C;

int func_0C6938(int *set);
int func_0BDA40(void);
int func_0BDA20(struct Ctl0CFB88 *c);
void func_0BE098(void);
int func_0BD9E0(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_01F4A8(int h, int k);
int func_01F460(int x, int y);
void func_0BDD50(void);
void func_0BDED8(void);

void func_0BE0C8(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0C6938((int *)D_00282560);
    switch (D_00163928) {
    case 0:
        func_0BDA40();
        break;
    case 1:
        if (c != 0) {
            if (func_0BDA20(c) != 0) {
                func_0BE098();
            } else if (func_0BD9E0(c) != 0) {
                x = func_01F4A8(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_01F460(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_0015332C->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_00162814 = m;
                }
                D_00163928 = 2;
            } else {
                func_0BDD50();
            }
        } else {
            D_00163928 = 0;
        }
        break;
    case 2:
        func_0BDED8();
        break;
    }
}
