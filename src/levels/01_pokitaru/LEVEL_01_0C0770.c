/* LEVEL_01:0x0C0770 -- fills the option rows of the options menu from the current page and the settings. */

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

extern int D_001FEAC8;
extern Settings *D_001F3FAC;
extern char D_001FEA20[];
extern int D_001FEAD0[];
extern int D_001FE3A0[];
extern int D_001FC9F4;

extern int func_0B9940(void *obj, int row, int a, int id, int b);
extern int func_0B99C8(void *obj, int row, int a, int b);

void func_0C0770(void)
{
    int id;

    switch (D_001FEAC8) {
    case 0:
        func_0B9940(D_001FEA20, 0, 1, 0x1E9, 0);
        func_0B9940(D_001FEA20, 1, 1, D_001F3FAC->f_28 == 1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B9940(D_001FEA20, 2, 1, D_001F3FAC->f_2C == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B99C8(D_001FEA20, 3, 1, 1);
        func_0B9940(D_001FEA20, 3, 1, D_001FEAD0[D_001F3FAC->index], 0);
        break;
    case 1:
        func_0B9940(D_001FEA20, 0, 1, 0x1EA, 0);
        func_0B9940(D_001FEA20, 1, 1, D_001F3FAC->f_30 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B9940(D_001FEA20, 2, 1, D_001F3FAC->f_34 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B99C8(D_001FEA20, 3, 0, 1);
        break;
    }
    func_0B99C8(D_001FEA20, 2, 1, 1);
    func_0B9940(D_001FEA20, 4, 1, D_001F3FAC->w_38 != 0 ? 0x1D7 : 0x1D8, 0);
    id = 0x1E0;
    if (D_001F3FAC->flags & 1)
        id = 0x1E1;
    func_0B9940(D_001FEA20, 5, 1, id, 0);
    id = 0x1D8;
    if (D_001F3FAC->w_44 != 0)
        id = 0x1D7;
    func_0B9940(D_001FEA20, 6, 1, id, 0);
    D_001FC9F4 = D_001FE3A0[D_001FEAC8];
}
