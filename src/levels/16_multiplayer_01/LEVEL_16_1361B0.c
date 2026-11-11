/* LEVEL_16:0x1361B0 -- tests whether the value is in the global array. */
extern unsigned int D_001BD700;
extern int D_002E2C20[];

int func_1361B0(int value)
{
    unsigned int i;

    for (i = 0; i < D_001BD700; i++)
        if (D_002E2C20[i] == value)
            return 1;
    return 0;
}
