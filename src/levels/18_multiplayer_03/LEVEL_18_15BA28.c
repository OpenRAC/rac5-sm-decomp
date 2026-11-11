/* LEVEL_18:0x15BA28 -- tries the record's primary check, then falls back to a secondary helper. */
extern int func_036BE8(void *a0);
extern void func_15B878(void *a0, void *a1);
extern int func_159C10(void *a0);

int func_15BA28(char *a0, void *a1)
{
    char *s1 = *(char **)(a0 + 0x58);
    int r;

    if (*(int *)(*(char **)s1 + 0xF4) == 0 || func_036BE8(*(char **)s1)) {
        func_15B878(a0, *(char **)s1);
        return 1;
    }
    r = func_159C10(a0);
    if (r != 0) {
        return 0;
    }
    func_15B878(a0, *(char **)s1);
    s1[0x18C] = 1;
    return 1;
}
