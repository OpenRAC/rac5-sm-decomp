/* LEVEL_04:0x000810 -- placement copy of LEVEL_01_000A08.c: calls a helper for six table entries and stores each result in a second table. */

extern int func_1364E8(void *a0);
extern void *D_002252A8[];
extern int D_002083A8[];

void func_000810(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_002083A8[i] = func_1364E8(D_002252A8[i]);
    }
}
