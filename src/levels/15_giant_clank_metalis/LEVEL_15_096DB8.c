/* LEVEL_15:0x096DB8 -- placement copy of LEVEL_01_0B68A8.c: resets the 0x38-byte entry for the index and clears its two table words. */
extern char D_00151538[];
extern int D_00151460[];
extern int D_00151618[];
extern void func_096CD0(char *entry);

void func_096DB8(int index)
{
    func_096CD0(D_00151538 + index * 0x38);
    D_00151460[index] = 0;
    D_00151618[index] = 0;
}
