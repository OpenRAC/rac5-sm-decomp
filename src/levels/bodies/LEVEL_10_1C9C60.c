/* LEVEL_10:0x1C9C60 -- calls a helper for each slot from a start index to a limit, advancing the index modulo ten. */

extern void func_081168(char *record);

void func_1C9C60(char *a0)
{
    char *s1;
    int *tb;
    int s0;
    int off;

    s1 = *(char **)(a0 + 0x58);
    s0 = *(int *)(s1 + 0x50);
    if (s0 == *(int *)(s1 + 0x54)) {
        return;
    }
    tb = (int *)(s1 + 0x28);
    do {
        off = s0 << 2;
        func_081168(*(char **)((char *)tb + off));
        s0 = (s0 + 1) % 10;
    } while (s0 != *(int *)(s1 + 0x54));
}
