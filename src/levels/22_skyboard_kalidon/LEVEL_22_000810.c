/* LEVEL_22:0x000810 -- placement copy of LEVEL_01_000A08.c: calls a helper for six table entries and stores each result in a second table. */

extern int func_100C58(void *a0);
extern void *D_00168DA8[];
extern int D_0014E5A8[];

void func_000810(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_0014E5A8[i] = func_100C58(D_00168DA8[i]);
    }
}
