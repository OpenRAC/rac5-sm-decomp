/* LEVEL_06:0x000A08 -- placement copy of LEVEL_01_000A08.c: calls a helper for six table entries and stores each result in a second table. */

extern int func_1206C0(void *a0);
extern void *D_001FA7A8[];
extern int D_001DE128[];

void func_000A08(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_001DE128[i] = func_1206C0(D_001FA7A8[i]);
    }
}
