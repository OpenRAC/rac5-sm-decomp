/* LEVEL_02:0x0C7080 -- placement copy of LEVEL_01_0C0770.c: fills the option rows of the options menu from the current page and the settings. */

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

extern int D_00213A88;
extern Settings *D_00208C2C;
extern char D_002139E0[];
extern int D_00213A90[];
extern int D_00213360[];
extern int D_002119B4;

extern int func_0C0250(void *obj, int row, int a, int id, int b);
extern int func_0C02D8(void *obj, int row, int a, int b);

void func_0C7080(void)
{
    int id;

    switch (D_00213A88) {
    case 0:
        func_0C0250(D_002139E0, 0, 1, 0x1E9, 0);
        func_0C0250(D_002139E0, 1, 1, D_00208C2C->f_28 == 1.0f ? 0x1E1 : 0x1E0, 0);
        func_0C0250(D_002139E0, 2, 1, D_00208C2C->f_2C == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0C02D8(D_002139E0, 3, 1, 1);
        func_0C0250(D_002139E0, 3, 1, D_00213A90[D_00208C2C->index], 0);
        break;
    case 1:
        func_0C0250(D_002139E0, 0, 1, 0x1EA, 0);
        func_0C0250(D_002139E0, 1, 1, D_00208C2C->f_30 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0C0250(D_002139E0, 2, 1, D_00208C2C->f_34 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0C02D8(D_002139E0, 3, 0, 1);
        break;
    }
    func_0C02D8(D_002139E0, 2, 1, 1);
    func_0C0250(D_002139E0, 4, 1, D_00208C2C->w_38 != 0 ? 0x1D7 : 0x1D8, 0);
    id = 0x1E0;
    if (D_00208C2C->flags & 1)
        id = 0x1E1;
    func_0C0250(D_002139E0, 5, 1, id, 0);
    id = 0x1D8;
    if (D_00208C2C->w_44 != 0)
        id = 0x1D7;
    func_0C0250(D_002139E0, 6, 1, id, 0);
    D_002119B4 = D_00213360[D_00213A88];
}
