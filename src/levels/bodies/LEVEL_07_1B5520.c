/* LEVEL_07:0x1B5520 -- relinks a pending pointer pair in the record, then runs a conditional helper and a release helper. */

extern void func_019C98(char *a0);
extern void func_082CA0(char *a0);

void func_1B5520(char *a0)
{
    char *s0;
    char *a1;
    char *v;

    s0 = *(char **)(a0 + 0x58);
    a1 = *(char **)(a0 + 0x54);
    if (*(char **)(s0 + 0x14) != 0) {
        *(int *)*(char **)(s0 + 0x14) = *(int *)s0;
        v = *(char **)s0;
        if (v != 0) {
            *(int *)(v + 0x14) = *(int *)(s0 + 0x14);
        }
        *(int *)(s0 + 0x14) = 0;
    }
    if (*(unsigned char *)(a1 + 0x20) != 0) {
        func_019C98(a0);
    }
    if (*(char **)(s0 + 0x6C) != 0) {
        func_082CA0(*(char **)(s0 + 0x6C));
        *(int *)(s0 + 0x6C) = 0;
    }
}
