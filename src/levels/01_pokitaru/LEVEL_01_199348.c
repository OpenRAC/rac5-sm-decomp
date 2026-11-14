/* LEVEL_01:0x199348 -- runs the shared reset and copies three words from one table to another. */
extern int D_00396E48[];
extern int D_00224E48[];

extern void func_073FC0(void);
extern void func_12A008(int *dst, int *src, int n);

void func_199348(void)
{
    func_073FC0();
    func_12A008(D_00396E48, D_00224E48, 3);
}
