/* LEVEL_08:0x052BD8 -- placement copy of LEVEL_03_04BD30.c: returns a scaled distance between two records, or -1 when the check fails. */
extern int func_090D10(void *a);

int func_052BD8(char *o)
{
    char *s0;
    char *s1;
    char *a6;
    char *entry;
    unsigned int flag;
    int off;

    s0 = *(char **)(o + 0x59C);
    s1 = *(char **)(s0 + 0x48);
    if (func_090D10(s1) == 0) {
        return -1;
    }
    a6 = *(char **)(s0 + 0x40);
    flag = (*(unsigned int *)(s0 + 0x64) >> 8) & 1;
    off = 0x28;
    if (flag != 0) {
        off = 0;
    }
    entry = *(char **)((unsigned char)s0[0x44] * 0x34 + *(int *)(a6 + 4) + 8);
    return (*(int *)(s1 + off + 0x60) - *(int *)entry) >> 6;
}
