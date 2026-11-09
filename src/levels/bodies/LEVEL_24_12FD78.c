/* LEVEL_24:0x12FD78 -- placement copy of LEVEL_01_13A298.c: clears a flag bit in a record, then either runs one helper or stores a value into a sub-record and runs two more helpers. */

extern int func_12FD68(char *);
extern void func_130090();
extern void func_119B00();
extern int func_12FE20(char *);

void func_12FD78(char *a0, int a1)
{
    int *flags;
    int v;
    char *sub;

    int mask = -0x21;

    flags = (int *)(a0 + 0x64);
    *flags = *flags & mask;
    v = func_12FD68(a0);
    if (v != 0) {
        func_130090(a0, 0xE, 1);
    } else {
        sub = *(char **)(a0 + 0x58);
        *(int *)(sub + 0x74) = a1;
        if (a1 != 0) {
            func_119B00(sub + 0x78, a1);
        }
        v = func_12FE20(a0);
        func_130090(a0, v & 0xFF, 1);
    }
}
