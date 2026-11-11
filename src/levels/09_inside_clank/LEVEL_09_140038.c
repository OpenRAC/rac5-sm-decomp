/* LEVEL_09:0x140038 -- placement copy of LEVEL_01_147058.c: runs the record helper on the embedded block, then wakes the linked body (if any) and reruns its handler when its status bits 1/2 are set. */
extern void func_125198();
extern void func_079108(char *a0, int a1);
extern void func_079268(char *record);

void func_140038(char *o)
{
    char *s = *(char **)(o + 0x58);

    func_125198(s + 0x8C);
    s = *(char **)(s + 0xC);
    if (s != 0) {
        func_079108(s, 1);
        if ((*(unsigned int *)(s + 0x64) & 6) != 0) {
            func_079268(s);
        }
    }
}
