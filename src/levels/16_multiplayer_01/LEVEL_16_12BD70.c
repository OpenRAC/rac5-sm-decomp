/* LEVEL_16:0x12BD70 -- placement copy of LEVEL_01_147058.c: runs the record helper on the embedded block, then wakes the linked body (if any) and reruns its handler when its status bits 1/2 are set. */
extern void func_109040();
extern void func_06F940(char *a0, int a1);
extern void func_06FA20(char *record);

void func_12BD70(char *o)
{
    char *s = *(char **)(o + 0x58);

    func_109040(s + 0x8C);
    s = *(char **)(s + 0xC);
    if (s != 0) {
        func_06F940(s, 1);
        if ((*(unsigned int *)(s + 0x64) & 6) != 0) {
            func_06FA20(s);
        }
    }
}
