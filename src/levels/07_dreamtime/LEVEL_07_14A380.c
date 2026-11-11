/* LEVEL_07:0x14A380 -- placement copy of LEVEL_01_147058.c: runs the record helper on the embedded block, then wakes the linked body (if any) and reruns its handler when its status bits 1/2 are set. */
extern void func_12F200();
extern void func_07E7F0(char *a0, int a1);
extern void func_07E950(char *record);

void func_14A380(char *o)
{
    char *s = *(char **)(o + 0x58);

    func_12F200(s + 0x8C);
    s = *(char **)(s + 0xC);
    if (s != 0) {
        func_07E7F0(s, 1);
        if ((*(unsigned int *)(s + 0x64) & 6) != 0) {
            func_07E950(s);
        }
    }
}
