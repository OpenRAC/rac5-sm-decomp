/* LEVEL_19:0x12C998 -- placement copy of LEVEL_01_147058.c: runs the record helper on the embedded block, then wakes the linked body (if any) and reruns its handler when its status bits 1/2 are set. */
extern void func_1096E0();
extern void func_06F9A8(char *a0, int a1);
extern void func_06FA88(char *record);

void func_12C998(char *o)
{
    char *s = *(char **)(o + 0x58);

    func_1096E0(s + 0x8C);
    s = *(char **)(s + 0xC);
    if (s != 0) {
        func_06F9A8(s, 1);
        if ((*(unsigned int *)(s + 0x64) & 6) != 0) {
            func_06FA88(s);
        }
    }
}
