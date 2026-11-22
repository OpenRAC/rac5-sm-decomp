/* LEVEL_07:0x0C27D0 -- placement copy of LEVEL_01_0C0770.c: fills the option rows of the options menu from the current page and the settings. */

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

extern int D_00212DC8;
extern Settings *D_002082AC;
extern char D_00212D20[];
extern int D_00212DD0[];
extern int D_002126A0[];
extern int D_00210CF4;

extern int func_0BB9A0(void *obj, int row, int a, int id, int b);
extern int func_0BBA28(void *obj, int row, int a, int b);

void func_0C27D0(void)
{
    int id;

    switch (D_00212DC8) {
    case 0:
        func_0BB9A0(D_00212D20, 0, 1, 0x1E9, 0);
        func_0BB9A0(D_00212D20, 1, 1, D_002082AC->f_28 == 1.0f ? 0x1E1 : 0x1E0, 0);
        func_0BB9A0(D_00212D20, 2, 1, D_002082AC->f_2C == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0BBA28(D_00212D20, 3, 1, 1);
        func_0BB9A0(D_00212D20, 3, 1, D_00212DD0[D_002082AC->index], 0);
        break;
    case 1:
        func_0BB9A0(D_00212D20, 0, 1, 0x1EA, 0);
        func_0BB9A0(D_00212D20, 1, 1, D_002082AC->f_30 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0BB9A0(D_00212D20, 2, 1, D_002082AC->f_34 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0BBA28(D_00212D20, 3, 0, 1);
        break;
    }
    func_0BBA28(D_00212D20, 2, 1, 1);
    func_0BB9A0(D_00212D20, 4, 1, D_002082AC->w_38 != 0 ? 0x1D7 : 0x1D8, 0);
    id = 0x1E0;
    if (D_002082AC->flags & 1)
        id = 0x1E1;
    func_0BB9A0(D_00212D20, 5, 1, id, 0);
    id = 0x1D8;
    if (D_002082AC->w_44 != 0)
        id = 0x1D7;
    func_0BB9A0(D_00212D20, 6, 1, id, 0);
    D_00210CF4 = D_002126A0[D_00212DC8];
}
