/* LEVEL_07:0x0996D8 -- placement copy of LEVEL_08_09F780.c. */
extern char D_002ADBCC[];
extern void func_099330(long long, void *, void *);

void func_0996D8(long long value, int index)
{
    char *entry = D_002ADBCC + index * 40;
    func_099330(value, entry + 16, entry);
}