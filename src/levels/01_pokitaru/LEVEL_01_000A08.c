/* LEVEL_01:0x000A08 -- calls a helper for six table entries and stores each result in a second table. */

extern int func_12A068(void *a0);
extern void *D_0020B928[];
extern int D_001EF228[];

void func_000A08(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_001EF228[i] = func_12A068(D_0020B928[i]);
    }
}
