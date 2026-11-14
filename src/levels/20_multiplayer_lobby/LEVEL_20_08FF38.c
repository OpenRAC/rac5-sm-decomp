/* LEVEL_20:0x08FF38 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_0010D018[];
extern int D_0010CF40[];
extern int D_0010D0F8[];
extern void func_08FE50(char *entry);

void func_08FF38(int index)
{
    func_08FE50(D_0010D018 + index * 0x38);
    D_0010CF40[index] = 0;
    D_0010D0F8[index] = 0;
}
