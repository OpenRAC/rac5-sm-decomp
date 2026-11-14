/* LEVEL_05:0x0B4E50 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_001EBC38[];
extern int D_001EBB60[];
extern int D_001EBD18[];
extern void func_0B4D68(char *entry);

void func_0B4E50(int index)
{
    func_0B4D68(D_001EBC38 + index * 0x38);
    D_001EBB60[index] = 0;
    D_001EBD18[index] = 0;
}
