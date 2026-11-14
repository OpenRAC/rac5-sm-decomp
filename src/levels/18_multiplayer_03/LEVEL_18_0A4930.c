/* LEVEL_18:0x0A4930 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_001ABDB8[];
extern int D_001ABCE0[];
extern int D_001ABE98[];
extern void func_0A4848(char *entry);

void func_0A4930(int index)
{
    func_0A4848(D_001ABDB8 + index * 0x38);
    D_001ABCE0[index] = 0;
    D_001ABE98[index] = 0;
}
