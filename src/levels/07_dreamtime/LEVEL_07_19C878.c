/* LEVEL_07:0x19C878 -- clears two flag bits on each of the first N listed objects, marks the next M listed objects with state 1 and resets the caller sub-state. */
extern unsigned int D_0021D070;
extern unsigned int D_0021D074;

void func_19C878(char *c, int unused, int *list)
{
    unsigned int i;
    unsigned int j;
    int *q;

    for (i = 0; i < D_0021D070; i++) {
        q = &list[i + 2];
        *(int *)(*q + 0x64) &= ~0x10;
        *(int *)(*q + 0x64) &= ~0x20;
    }
    for (j = 0; j < D_0021D074; j++) {
        *(unsigned char *)(list[j + 8] + 0x45) = 1;
    }
    *(unsigned char *)(c + 0x46) = 0;
}
