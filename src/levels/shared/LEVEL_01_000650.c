/* LEVEL_01:0x000650 -- calls a per-index test six times on one record and returns one when all pass. */
extern unsigned int func_0004F8(int a0, unsigned int a1);

int func_000650(char *a0)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        if (func_0004F8((int)a0, i) == 0) {
            return 0;
        }
    }
    return 1;
}
