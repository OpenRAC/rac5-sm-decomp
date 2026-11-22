/* LEVEL_15:0x0A0DB8 -- placement copy of LEVEL_01_0C0770.c: fills the option rows of the options menu from the current page and the settings. */

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

extern int D_00153748;
extern Settings *D_00148C2C;
extern char D_001536A0[];
extern int D_00153750[];
extern int D_00153020[];
extern int D_00151674;

extern int func_099F88(void *obj, int row, int a, int id, int b);
extern int func_09A010(void *obj, int row, int a, int b);

void func_0A0DB8(void)
{
    int id;

    switch (D_00153748) {
    case 0:
        func_099F88(D_001536A0, 0, 1, 0x1E9, 0);
        func_099F88(D_001536A0, 1, 1, D_00148C2C->f_28 == 1.0f ? 0x1E1 : 0x1E0, 0);
        func_099F88(D_001536A0, 2, 1, D_00148C2C->f_2C == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_09A010(D_001536A0, 3, 1, 1);
        func_099F88(D_001536A0, 3, 1, D_00153750[D_00148C2C->index], 0);
        break;
    case 1:
        func_099F88(D_001536A0, 0, 1, 0x1EA, 0);
        func_099F88(D_001536A0, 1, 1, D_00148C2C->f_30 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_099F88(D_001536A0, 2, 1, D_00148C2C->f_34 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_09A010(D_001536A0, 3, 0, 1);
        break;
    }
    func_09A010(D_001536A0, 2, 1, 1);
    func_099F88(D_001536A0, 4, 1, D_00148C2C->w_38 != 0 ? 0x1D7 : 0x1D8, 0);
    id = 0x1E0;
    if (D_00148C2C->flags & 1)
        id = 0x1E1;
    func_099F88(D_001536A0, 5, 1, id, 0);
    id = 0x1D8;
    if (D_00148C2C->w_44 != 0)
        id = 0x1D7;
    func_099F88(D_001536A0, 6, 1, id, 0);
    D_00151674 = D_00153020[D_00153748];
}
