/* LEVEL_19:0x022070 -- placement copy of LEVEL_16_022430.c: finds the first of three slots the checker accepts, marks it in the record and reports 1; reports 0 when none is accepted. */
typedef unsigned int u32;

extern int func_022110(int first, int second, u32 index, int third);
extern char *func_021D08(int first, int third);

int func_022070(int first, int second, int third)
{
    u32 index;

    for (index = 0; index < 3; index++) {
        if (func_022110(first, second, index, third)) {
            char *record = func_021D08(first, third);

            ((unsigned char *)record + index)[0x48] = 1;
            return 1;
        }
    }
    return 0;
}
