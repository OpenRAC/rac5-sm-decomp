/* LEVEL_05:0x142A48 -- placement copy of LEVEL_01_147058.c: runs the record helper on the embedded block, then wakes the linked body (if any) and reruns its handler when its status bits 1/2 are set. */
extern void func_127B78();
extern void func_079CF8(char *a0, int a1);
extern void func_079E58(char *record);

void func_142A48(char *o)
{
    char *s = *(char **)(o + 0x58);

    func_127B78(s + 0x8C);
    s = *(char **)(s + 0xC);
    if (s != 0) {
        func_079CF8(s, 1);
        if ((*(unsigned int *)(s + 0x64) & 6) != 0) {
            func_079E58(s);
        }
    }
}
