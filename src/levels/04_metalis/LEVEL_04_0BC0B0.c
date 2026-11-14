/* LEVEL_04:0x0BC0B0 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_00215D78[];
extern int D_00215CA0[];
extern int D_00215E58[];
extern void func_0BBFC8(char *entry);

void func_0BC0B0(int index)
{
    func_0BBFC8(D_00215D78 + index * 0x38);
    D_00215CA0[index] = 0;
    D_00215E58[index] = 0;
}
