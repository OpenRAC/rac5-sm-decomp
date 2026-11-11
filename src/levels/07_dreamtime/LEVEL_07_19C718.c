/* LEVEL_07:0x19C718 -- clears two flag bits on each of the first N listed objects, marks the next M listed objects (from entry 6) with state 1 and resets the caller's sub-state. */
extern unsigned int D_0021D06C;
extern unsigned int D_0021D074;

void func_19C718(char *c, int unused, int *list)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < D_0021D06C; i++) {
        *(int *)(list[i] + 0x64) &= ~0x10;
        *(int *)(list[i] + 0x64) &= ~0x20;
    }
    for (j = 0; j < D_0021D074; j++) {
        *(unsigned char *)(list[j + 6] + 0x45) = 1;
    }
    *(unsigned char *)(c + 0x46) = 0;
}
