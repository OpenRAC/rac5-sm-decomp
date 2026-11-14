/* LEVEL_06:0x0B1178 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_001EB7B8[];
extern int D_001EB6E0[];
extern int D_001EB898[];
extern void func_0B1090(char *entry);

void func_0B1178(int index)
{
    func_0B1090(D_001EB7B8 + index * 0x38);
    D_001EB6E0[index] = 0;
    D_001EB898[index] = 0;
}
