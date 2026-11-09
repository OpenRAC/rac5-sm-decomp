/* LEVEL_24:0x0C94C8 -- placement copy of LEVEL_01_0CFB88.c: steps a three-state controller and, in state one, advances it to state two after clamping a stored value. */

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

extern char D_002F8860[];
extern unsigned int D_001D5228;
extern int D_001D4114;
extern struct Env0CFB88 *D_001C4C2C;

int func_0D1D60(int *set);
int func_0C8E40(void);
int func_0C8E20(struct Ctl0CFB88 *c);
void func_0C9498(void);
int func_0C8DE0(struct Ctl0CFB88 *c);
struct Ea0CFB88 *func_022448(int h, int k);
int func_022400(int x, int y);
void func_0C9150(void);
void func_0C92D8(void);

void func_0C94C8(void)
{
    struct Ctl0CFB88 *c;
    struct Ea0CFB88 *x;
    struct Eb0CFB88 *y;
    int n;
    int m;

    c = (struct Ctl0CFB88 *)func_0D1D60((int *)D_002F8860);
    switch (D_001D5228) {
    case 0:
        func_0C8E40();
        break;
    case 1:
        if (c != 0) {
            if (func_0C8E20(c) != 0) {
                func_0C9498();
            } else if (func_0C8DE0(c) != 0) {
                x = func_022448(c->h_14, -1);
                y = (struct Eb0CFB88 *)func_022400(c->h_14, -1);
                if (x != 0 && y != 0) {
                    n = D_001C4C2C->n_1C68 / c->d_0C;
                    m = x->v_38 - y->v_40;
                    if (m >= n) {
                        m = n;
                    }
                    D_001D4114 = m;
                }
                D_001D5228 = 2;
            } else {
                func_0C9150();
            }
        } else {
            D_001D5228 = 0;
        }
        break;
    case 2:
        func_0C92D8();
        break;
    }
}
