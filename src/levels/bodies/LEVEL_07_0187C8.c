/* LEVEL_07:0x0187C8 -- placement copy of LEVEL_01_0180B8.c: starts the level record with its two stored words. */
extern int D_002035A4;
extern int D_002035B4;
extern char D_002451B0[];
extern void func_088600(void *, int, int, int, int, int, unsigned int);

void func_0187C8(void)
{
    func_088600(D_002451B0, D_002035A4, D_002035B4, 1, 1, 0, 0xFFFFFFFF);
}
