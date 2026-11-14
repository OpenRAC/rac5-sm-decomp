/* LEVEL_19:0x0A5230 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_001ABAB8[];
extern int D_001AB9E0[];
extern int D_001ABB98[];
extern void func_0A5148(char *entry);

void func_0A5230(int index)
{
    func_0A5148(D_001ABAB8 + index * 0x38);
    D_001AB9E0[index] = 0;
    D_001ABB98[index] = 0;
}
