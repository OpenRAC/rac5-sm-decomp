/* LEVEL_02:0x000A08 -- placement copy of LEVEL_01_000A08.c: calls a helper for six table entries and stores each result in a second table. */

extern int func_130418(void *a0);
extern void *D_002208A8[];
extern int D_00203EA8[];

void func_000A08(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_00203EA8[i] = func_130418(D_002208A8[i]);
    }
}
