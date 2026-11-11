/* LEVEL_07:0x000A08 -- placement copy of LEVEL_01_000A08.c: calls a helper for six table entries and stores each result in a second table. */

extern int func_12D068(void *a0);
extern void *D_00220628[];
extern int D_00203528[];

void func_000A08(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_00203528[i] = func_12D068(D_00220628[i]);
    }
}
