/* LEVEL_07:0x0B8908 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_00210BB8[];
extern int D_00210AE0[];
extern int D_00210C98[];
extern void func_0B8820(char *entry);

void func_0B8908(int index)
{
    func_0B8820(D_00210BB8 + index * 0x38);
    D_00210AE0[index] = 0;
    D_00210C98[index] = 0;
}
