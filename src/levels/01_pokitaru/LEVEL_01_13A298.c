/* LEVEL_01:0x13A298 -- clears a flag bit in a record, then either runs one helper or stores a value into a sub-record and runs two more helpers. */

extern int func_13A288(char *);
extern void func_13A5B0();
extern void func_123BA8();
extern int func_13A340(char *);

void func_13A298(char *a0, int a1)
{
    int *flags;
    int v;
    char *sub;

    int mask = -0x21;

    flags = (int *)(a0 + 0x64);
    *flags = *flags & mask;
    v = func_13A288(a0);
    if (v != 0) {
        func_13A5B0(a0, 0xE, 1);
    } else {
        sub = *(char **)(a0 + 0x58);
        *(int *)(sub + 0x74) = a1;
        if (a1 != 0) {
            func_123BA8(sub + 0x78, a1);
        }
        v = func_13A340(a0);
        func_13A5B0(a0, v & 0xFF, 1);
    }
}
