/* LEVEL_09:0x000A08 -- placement copy of LEVEL_01_000A08.c: calls a helper for six table entries and stores each result in a second table. */

extern int func_123000(void *a0);
extern void *D_001F5528[];
extern int D_001D9028[];

void func_000A08(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_001D9028[i] = func_123000(D_001F5528[i]);
    }
}
