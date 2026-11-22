/* LEVEL_06:0x0BB070 -- placement copy of LEVEL_01_0C0770.c: fills the option rows of the options menu from the current page and the settings. */

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

extern int D_001ED9C8;
extern Settings *D_001E2EAC;
extern char D_001ED920[];
extern int D_001ED9D0[];
extern int D_001ED2A0[];
extern int D_001EB8F4;

extern int func_0B4240(void *obj, int row, int a, int id, int b);
extern int func_0B42C8(void *obj, int row, int a, int b);

void func_0BB070(void)
{
    int id;

    switch (D_001ED9C8) {
    case 0:
        func_0B4240(D_001ED920, 0, 1, 0x1E9, 0);
        func_0B4240(D_001ED920, 1, 1, D_001E2EAC->f_28 == 1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B4240(D_001ED920, 2, 1, D_001E2EAC->f_2C == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B42C8(D_001ED920, 3, 1, 1);
        func_0B4240(D_001ED920, 3, 1, D_001ED9D0[D_001E2EAC->index], 0);
        break;
    case 1:
        func_0B4240(D_001ED920, 0, 1, 0x1EA, 0);
        func_0B4240(D_001ED920, 1, 1, D_001E2EAC->f_30 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B4240(D_001ED920, 2, 1, D_001E2EAC->f_34 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B42C8(D_001ED920, 3, 0, 1);
        break;
    }
    func_0B42C8(D_001ED920, 2, 1, 1);
    func_0B4240(D_001ED920, 4, 1, D_001E2EAC->w_38 != 0 ? 0x1D7 : 0x1D8, 0);
    id = 0x1E0;
    if (D_001E2EAC->flags & 1)
        id = 0x1E1;
    func_0B4240(D_001ED920, 5, 1, id, 0);
    id = 0x1D8;
    if (D_001E2EAC->w_44 != 0)
        id = 0x1D7;
    func_0B4240(D_001ED920, 6, 1, id, 0);
    D_001EB8F4 = D_001ED2A0[D_001ED9C8];
}
