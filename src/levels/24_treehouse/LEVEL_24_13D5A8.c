/* LEVEL_24:0x13D5A8 -- placement copy of LEVEL_01_147058.c: runs the record helper on the embedded block, then wakes the linked body (if any) and reruns its handler when its status bits 1/2 are set. */
extern void func_121D00();
extern void func_076D68(char *a0, int a1);
extern void func_076EC8(char *record);

void func_13D5A8(char *o)
{
    char *s = *(char **)(o + 0x58);

    func_121D00(s + 0x8C);
    s = *(char **)(s + 0xC);
    if (s != 0) {
        func_076D68(s, 1);
        if ((*(unsigned int *)(s + 0x64) & 6) != 0) {
            func_076EC8(s);
        }
    }
}
