/* LEVEL_24:0x0B0138 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_001CD538[];
extern int D_001CD460[];
extern int D_001CD618[];
extern void func_0B0050(char *entry);

void func_0B0138(int index)
{
    func_0B0050(D_001CD538 + index * 0x38);
    D_001CD460[index] = 0;
    D_001CD618[index] = 0;
}
