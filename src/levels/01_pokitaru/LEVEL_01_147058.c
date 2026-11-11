/* LEVEL_01:0x147058 -- runs the record helper on the embedded block, then wakes the linked body (if any) and reruns its handler when its status bits 1/2 are set. */
extern void func_12C200();
extern void func_07C670(char *a0, int a1);
extern void func_07C7D0(char *record);

void func_147058(char *o)
{
    char *s = *(char **)(o + 0x58);

    func_12C200(s + 0x8C);
    s = *(char **)(s + 0xC);
    if (s != 0) {
        func_07C670(s, 1);
        if ((*(unsigned int *)(s + 0x64) & 6) != 0) {
            func_07C7D0(s);
        }
    }
}
