/* LEVEL_08:0x0189A8 -- placement copy of LEVEL_01_0180B8.c: starts the level record with its two stored words. */
extern int D_00237E24;
extern int D_00237E34;
extern char D_0027EB30[];
extern void func_08E580(void *, int, int, int, int, int, unsigned int);

void func_0189A8(void)
{
    func_08E580(D_0027EB30, D_00237E24, D_00237E34, 1, 1, 0, 0xFFFFFFFF);
}
