/* LEVEL_16:0x0A59B8 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_001AA938[];
extern int D_001AA860[];
extern int D_001AAA18[];
extern void func_0A58D0(char *entry);

void func_0A59B8(int index)
{
    func_0A58D0(D_001AA938 + index * 0x38);
    D_001AA860[index] = 0;
    D_001AAA18[index] = 0;
}
