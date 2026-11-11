/* LEVEL_03:0x000A08 -- placement copy of LEVEL_01_000A08.c: calls a helper for six table entries and stores each result in a second table. */

extern int func_1282D0(void *a0);
extern void *D_00224828[];
extern int D_002078A8[];

void func_000A08(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_002078A8[i] = func_1282D0(D_00224828[i]);
    }
}
