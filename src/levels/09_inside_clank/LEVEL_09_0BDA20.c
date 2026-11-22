/* LEVEL_09:0x0BDA20 -- placement copy of LEVEL_01_0C0770.c: fills the option rows of the options menu from the current page and the settings. */

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

extern int D_001E88C8;
extern Settings *D_001DDDAC;
extern char D_001E8820[];
extern int D_001E88D0[];
extern int D_001E81A0[];
extern int D_001E67F4;

extern int func_0B6BF0(void *obj, int row, int a, int id, int b);
extern int func_0B6C78(void *obj, int row, int a, int b);

void func_0BDA20(void)
{
    int id;

    switch (D_001E88C8) {
    case 0:
        func_0B6BF0(D_001E8820, 0, 1, 0x1E9, 0);
        func_0B6BF0(D_001E8820, 1, 1, D_001DDDAC->f_28 == 1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B6BF0(D_001E8820, 2, 1, D_001DDDAC->f_2C == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B6C78(D_001E8820, 3, 1, 1);
        func_0B6BF0(D_001E8820, 3, 1, D_001E88D0[D_001DDDAC->index], 0);
        break;
    case 1:
        func_0B6BF0(D_001E8820, 0, 1, 0x1EA, 0);
        func_0B6BF0(D_001E8820, 1, 1, D_001DDDAC->f_30 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B6BF0(D_001E8820, 2, 1, D_001DDDAC->f_34 == -1.0f ? 0x1E1 : 0x1E0, 0);
        func_0B6C78(D_001E8820, 3, 0, 1);
        break;
    }
    func_0B6C78(D_001E8820, 2, 1, 1);
    func_0B6BF0(D_001E8820, 4, 1, D_001DDDAC->w_38 != 0 ? 0x1D7 : 0x1D8, 0);
    id = 0x1E0;
    if (D_001DDDAC->flags & 1)
        id = 0x1E1;
    func_0B6BF0(D_001E8820, 5, 1, id, 0);
    id = 0x1D8;
    if (D_001DDDAC->w_44 != 0)
        id = 0x1D7;
    func_0B6BF0(D_001E8820, 6, 1, id, 0);
    D_001E67F4 = D_001E81A0[D_001E88C8];
}
