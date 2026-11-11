/* LEVEL_24:0x000810 -- placement copy of LEVEL_01_000A08.c: calls a helper for six table entries and stores each result in a second table. */

extern int func_11FB68(void *a0);
extern void *D_001DC6A8[];
extern int D_001BFEA8[];

void func_000810(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_001BFEA8[i] = func_11FB68(D_001DC6A8[i]);
    }
}
