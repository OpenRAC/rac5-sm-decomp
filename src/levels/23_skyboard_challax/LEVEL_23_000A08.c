/* LEVEL_23:0x000A08 -- placement copy of LEVEL_01_000A08.c: calls a helper for six table entries and stores each result in a second table. */

extern int func_11AEE0(void *a0);
extern void *D_001DEAA8[];
extern int D_001C2628[];

void func_000A08(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_001C2628[i] = func_11AEE0(D_001DEAA8[i]);
    }
}
