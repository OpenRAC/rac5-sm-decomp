/* LEVEL_10:0x169B78 -- placement copy of LEVEL_02_17B310.c: copies two words through the shared transform from one table to another. */
extern int D_0039F128[];
extern int D_00229610[];
extern void func_127E68(int *dst, int *src, int n);

void func_169B78(void)
{
    func_127E68(D_0039F128, D_00229610, 2);
}
