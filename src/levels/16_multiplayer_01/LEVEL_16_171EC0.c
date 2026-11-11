/* LEVEL_16:0x171EC0 -- clears a slot word, calls a helper for a new value and returns whether the slot holds a nonzero value. */

extern void *func_112998(void *a0, int a1);
extern int func_0763F8(void *a0, void *a1);

int func_171EC0(char *a0)
{
    void **s1;
    char *s2;
    char *s0;

    s1 = *(void ***)(a0 + 0x58);
    s2 = *(char **)(a0 + 0x54);
    *s1 = 0;
    s0 = (char *)func_112998(a0 + 0x30, 0);
    if (s0 != 0) {
        if (func_0763F8(*(void **)s2, s0 + 0x30) != 0) {
            *s1 = s0;
        }
    }
    return *s1 != 0;
}
