/* LEVEL_10:0x138120 -- placement copy of LEVEL_01_13A298.c: clears a flag bit in a record, then either runs one helper or stores a value into a sub-record and runs two more helpers. */

extern int func_138110(char *);
extern void func_138438();
extern void func_121E58();
extern int func_1381C8(char *);

void func_138120(char *a0, int a1)
{
    int *flags;
    int v;
    char *sub;

    int mask = -0x21;

    flags = (int *)(a0 + 0x64);
    *flags = *flags & mask;
    v = func_138110(a0);
    if (v != 0) {
        func_138438(a0, 0xE, 1);
    } else {
        sub = *(char **)(a0 + 0x58);
        *(int *)(sub + 0x74) = a1;
        if (a1 != 0) {
            func_121E58(sub + 0x78, a1);
        }
        v = func_1381C8(a0);
        func_138438(a0, v & 0xFF, 1);
    }
}
