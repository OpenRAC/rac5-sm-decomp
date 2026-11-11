/* LEVEL_01:0x0180B8 -- starts the level record with its two stored words. */
extern int D_001EF2A4;
extern int D_001EF2B4;
extern char D_0022F8B0[];
extern void func_086530(void *, int, int, int, int, int, unsigned int);

void func_0180B8(void)
{
    func_086530(D_0022F8B0, D_001EF2A4, D_001EF2B4, 1, 1, 0, 0xFFFFFFFF);
}
