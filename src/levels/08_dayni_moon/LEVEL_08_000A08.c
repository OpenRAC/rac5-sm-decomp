/* LEVEL_08:0x000A08 -- placement copy of LEVEL_01_000A08.c: calls a helper for six table entries and stores each result in a second table. */

extern int func_13B5A0(void *a0);
extern void *D_002555A8[];
extern int D_00237DA8[];

void func_000A08(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_00237DA8[i] = func_13B5A0(D_002555A8[i]);
    }
}
