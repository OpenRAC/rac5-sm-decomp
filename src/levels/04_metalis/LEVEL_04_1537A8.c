/* LEVEL_04:0x1537A8 -- placement copy of LEVEL_01_147058.c: runs the record helper on the embedded block, then wakes the linked body (if any) and reruns its handler when its status bits 1/2 are set. */
extern void func_138680();
extern void func_07FAE8(char *a0, int a1);
extern void func_07FC48(char *record);

void func_1537A8(char *o)
{
    char *s = *(char **)(o + 0x58);

    func_138680(s + 0x8C);
    s = *(char **)(s + 0xC);
    if (s != 0) {
        func_07FAE8(s, 1);
        if ((*(unsigned int *)(s + 0x64) & 6) != 0) {
            func_07FC48(s);
        }
    }
}
