/* LEVEL_08:0x0C1798 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_00245778[];
extern int D_002456A0[];
extern int D_00245858[];
extern void func_0C16B0(char *entry);

void func_0C1798(int index)
{
    func_0C16B0(D_00245778 + index * 0x38);
    D_002456A0[index] = 0;
    D_00245858[index] = 0;
}
