/* LEVEL_10:0x000798 -- placement copy of LEVEL_01_000A08.c: calls a helper for six table entries and stores each result in a second table. */

extern int func_127EC8(void *a0);
extern void *D_002148A8[];
extern int D_001F8228[];

void func_000798(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_001F8228[i] = func_127EC8(D_002148A8[i]);
    }
}
