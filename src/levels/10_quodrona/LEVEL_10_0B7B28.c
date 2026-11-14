/* LEVEL_10:0x0B7B28 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_002058B8[];
extern int D_002057E0[];
extern int D_00205998[];
extern void func_0B7A40(char *entry);

void func_0B7B28(int index)
{
    func_0B7A40(D_002058B8 + index * 0x38);
    D_002057E0[index] = 0;
    D_00205998[index] = 0;
}
