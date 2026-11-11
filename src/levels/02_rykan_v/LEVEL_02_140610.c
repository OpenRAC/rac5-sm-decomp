/* LEVEL_02:0x140610 -- placement copy of LEVEL_01_13A298.c: clears a flag bit in a record, then either runs one helper or stores a value into a sub-record and runs two more helpers. */

extern int func_140600(char *);
extern void func_140928();
extern void func_129ED0();
extern int func_1406B8(char *);

void func_140610(char *a0, int a1)
{
    int *flags;
    int v;
    char *sub;

    int mask = -0x21;

    flags = (int *)(a0 + 0x64);
    *flags = *flags & mask;
    v = func_140600(a0);
    if (v != 0) {
        func_140928(a0, 0xE, 1);
    } else {
        sub = *(char **)(a0 + 0x58);
        *(int *)(sub + 0x74) = a1;
        if (a1 != 0) {
            func_129ED0(sub + 0x78, a1);
        }
        v = func_1406B8(a0);
        func_140928(a0, v & 0xFF, 1);
    }
}
