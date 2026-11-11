/* LEVEL_21:0x014978 -- placement copy of LEVEL_01_0180B8.c: starts the level record with its two stored words. */
extern int D_00143F0C;
extern int D_00143F1C;
extern char D_00177A30[];
extern void func_06AC10(void *, int, int, int, int, int, unsigned int);

void func_014978(void)
{
    func_06AC10(D_00177A30, D_00143F0C, D_00143F1C, 1, 1, 0, 0xFFFFFFFF);
}
