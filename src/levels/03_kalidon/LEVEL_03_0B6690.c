/* LEVEL_03:0x0B6690 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_00214F38[];
extern int D_00214E60[];
extern int D_00215018[];
extern void func_0B65A8(char *entry);

void func_0B6690(int index)
{
    func_0B65A8(D_00214F38 + index * 0x38);
    D_00214E60[index] = 0;
    D_00215018[index] = 0;
}
