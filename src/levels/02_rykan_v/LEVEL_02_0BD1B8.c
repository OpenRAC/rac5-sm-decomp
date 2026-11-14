/* LEVEL_02:0x0BD1B8 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_00211878[];
extern int D_002117A0[];
extern int D_00211958[];
extern void func_0BD0D0(char *entry);

void func_0BD1B8(int index)
{
    func_0BD0D0(D_00211878 + index * 0x38);
    D_002117A0[index] = 0;
    D_00211958[index] = 0;
}
