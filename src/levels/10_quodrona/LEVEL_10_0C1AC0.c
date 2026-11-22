/* LEVEL_10:0x0C1AC0 -- placement copy of LEVEL_01_0C0770.c: fills the option rows of the options menu from the current page and the settings. */

typedef struct Settings {
    char pad_00[8];
    unsigned int flags;
    char pad_0C[0x18];
    int index;
    float f_28;
    float f_2C;
    float f_30;
    float f_34;
    int w_38;
    char pad_3C[8];
    int w_44;
} Settings;

extern int D_00207AC8;
extern Settings *D_001FCFAC;
extern char D_00207A20[];
extern int D_00207AD0[];
extern int D_002073A0[];
extern int D_002059F4;

extern int func_0BAC88(void *obj, int row, int a, int id, int b);
extern int func_0BAD10(void *obj, int row, int a, int b);

void func_0C1AC0(void)
{
    int id;

    switch (D_00207AC8) {
    case 0:
        func_0BAC88(D_00207A20, 0, 1, 0x1E9, 0);
        func_0BAC88(D_00207A20, 1, 1, D_001FCFAC->f_28 == 1.0f ? 0x1E1 : 0x1E0, 0);
        func_0BAC88(D_00207A20, 2, 1, D_001FCFAC->f_2C == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0BAD10(D_00207A20, 3, 1, 1);
        func_0BAC88(D_00207A20, 3, 1, D_00207AD0[D_001FCFAC->index], 0);
        break;
    case 1:
        func_0BAC88(D_00207A20, 0, 1, 0x1EA, 0);
        func_0BAC88(D_00207A20, 1, 1, D_001FCFAC->f_30 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0BAC88(D_00207A20, 2, 1, D_001FCFAC->f_34 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0BAD10(D_00207A20, 3, 0, 1);
        break;
    }
    func_0BAD10(D_00207A20, 2, 1, 1);
    func_0BAC88(D_00207A20, 4, 1, D_001FCFAC->w_38 != 0 ? 0x1D7 : 0x1D8, 0);
    id = 0x1E0;
    if (D_001FCFAC->flags & 1)
        id = 0x1E1;
    func_0BAC88(D_00207A20, 5, 1, id, 0);
    id = 0x1D8;
    if (D_001FCFAC->w_44 != 0)
        id = 0x1D7;
    func_0BAC88(D_00207A20, 6, 1, id, 0);
    D_002059F4 = D_002073A0[D_00207AC8];
}
