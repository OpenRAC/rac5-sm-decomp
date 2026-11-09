/* LEVEL_03:0x197CC0 -- runs a setup helper, stores an argument into a side record and sets a state byte. */

extern void func_197BA8(void *p);

void func_197CC0(char *a0, int a1, int a2)
{
    char *s2;

    s2 = *(char **)(a0 + 0x54);
    func_197BA8(a0);
    if (a2 != 0) {
        *(int *)s2 = a2;
        a0[0x45] = 2;
    } else {
        a0[0x45] = 4;
    }
}
