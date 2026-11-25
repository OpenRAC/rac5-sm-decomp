/* LEVEL_07:0x13AC08 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_002AD6C0[];
extern unsigned int D_0022FBF0[];
extern int D_0021B3D0[];
extern int D_0021B3DC;
extern int D_0021B3E0;
extern int func_1E2C68(unsigned int value);
extern void func_1EBA88(unsigned int value);
extern int func_12D068(unsigned int value);

void func_13AC08(void)
{
    unsigned int i;
    int *p = &D_0021B3DC;

    *p = func_1E2C68(((unsigned int)D_002AD6C0[82] << 16) | 0xE8005041u);
    D_0021B3E0 = ((int (*)(unsigned int value))func_1EBA88)(((unsigned int)D_002AD6C0[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_0021B3D0[i] = func_12D068(D_0022FBF0[i]);
    }
}
