/* LEVEL_16:0x022430 -- finds the first of three slots the checker accepts, marks it in the record and reports 1; reports 0 when none is accepted. */
typedef unsigned int u32;

extern int func_0224D0(int first, int second, u32 index, int third);
extern char *func_0220C8(int first, int third);

int func_022430(int first, int second, int third)
{
    u32 index;

    for (index = 0; index < 3; index++) {
        if (func_0224D0(first, second, index, third)) {
            char *record = func_0220C8(first, third);

            ((unsigned char *)record + index)[0x48] = 1;
            return 1;
        }
    }
    return 0;
}
