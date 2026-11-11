/* LEVEL_17:0x12B7C0 -- placement copy of LEVEL_01_147058.c: runs the record helper on the embedded block, then wakes the linked body (if any) and reruns its handler when its status bits 1/2 are set. */
extern void func_1085B8();
extern void func_06FF78(char *a0, int a1);
extern void func_070058(char *record);

void func_12B7C0(char *o)
{
    char *s = *(char **)(o + 0x58);

    func_1085B8(s + 0x8C);
    s = *(char **)(s + 0xC);
    if (s != 0) {
        func_06FF78(s, 1);
        if ((*(unsigned int *)(s + 0x64) & 6) != 0) {
            func_070058(s);
        }
    }
}
