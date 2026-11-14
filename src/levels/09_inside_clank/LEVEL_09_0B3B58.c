/* LEVEL_09:0x0B3B58 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_001E66B8[];
extern int D_001E65E0[];
extern int D_001E6798[];
extern void func_0B3A70(char *entry);

void func_0B3B58(int index)
{
    func_0B3A70(D_001E66B8 + index * 0x38);
    D_001E65E0[index] = 0;
    D_001E6798[index] = 0;
}
