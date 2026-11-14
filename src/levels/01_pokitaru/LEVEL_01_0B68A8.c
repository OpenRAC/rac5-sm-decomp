/* LEVEL_01:0x0B68A8 -- resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_001FC8B8[];
extern int D_001FC7E0[];
extern int D_001FC998[];
extern void func_0B67C0(char *entry);

void func_0B68A8(int index)
{
    func_0B67C0(D_001FC8B8 + index * 0x38);
    D_001FC7E0[index] = 0;
    D_001FC998[index] = 0;
}
