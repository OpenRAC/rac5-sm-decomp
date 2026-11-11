/* LEVEL_18:0x12AE18 -- placement copy of LEVEL_01_147058.c: runs the record helper on the embedded block, then wakes the linked body (if any) and reruns its handler when its status bits 1/2 are set. */
extern void func_107CF0();
extern void func_06F008(char *a0, int a1);
extern void func_06F0E8(char *record);

void func_12AE18(char *o)
{
    char *s = *(char **)(o + 0x58);

    func_107CF0(s + 0x8C);
    s = *(char **)(s + 0xC);
    if (s != 0) {
        func_06F008(s, 1);
        if ((*(unsigned int *)(s + 0x64) & 6) != 0) {
            func_06F0E8(s);
        }
    }
}
