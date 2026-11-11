/* LEVEL_09:0x133278 -- placement copy of LEVEL_01_13A298.c: clears a flag bit in a record, then either runs one helper or stores a value into a sub-record and runs two more helpers. */

extern int func_133268(char *);
extern void func_133590();
extern void func_11D030();
extern int func_133320(char *);

void func_133278(char *a0, int a1)
{
    int *flags;
    int v;
    char *sub;

    int mask = -0x21;

    flags = (int *)(a0 + 0x64);
    *flags = *flags & mask;
    v = func_133268(a0);
    if (v != 0) {
        func_133590(a0, 0xE, 1);
    } else {
        sub = *(char **)(a0 + 0x58);
        *(int *)(sub + 0x74) = a1;
        if (a1 != 0) {
            func_11D030(sub + 0x78, a1);
        }
        v = func_133320(a0);
        func_133590(a0, v & 0xFF, 1);
    }
}
