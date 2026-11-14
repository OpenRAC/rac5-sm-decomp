/* LEVEL_23:0x0AD670 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_001CFCB8[];
extern int D_001CFBE0[];
extern int D_001CFD98[];
extern void func_0AD588(char *entry);

void func_0AD670(int index)
{
    func_0AD588(D_001CFCB8 + index * 0x38);
    D_001CFBE0[index] = 0;
    D_001CFD98[index] = 0;
}
