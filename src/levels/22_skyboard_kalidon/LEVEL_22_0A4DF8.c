/* LEVEL_22:0x0A4DF8 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_0015BC38[];
extern int D_0015BB60[];
extern int D_0015BD18[];
extern void func_0A4D10(char *entry);

void func_0A4DF8(int index)
{
    func_0A4D10(D_0015BC38 + index * 0x38);
    D_0015BB60[index] = 0;
    D_0015BD18[index] = 0;
}
