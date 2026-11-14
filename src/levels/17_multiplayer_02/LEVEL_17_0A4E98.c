/* LEVEL_17:0x0A4E98 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_0019DF38[];
extern int D_0019DE60[];
extern int D_0019E018[];
extern void func_0A4DB0(char *entry);

void func_0A4E98(int index)
{
    func_0A4DB0(D_0019DF38 + index * 0x38);
    D_0019DE60[index] = 0;
    D_0019E018[index] = 0;
}
