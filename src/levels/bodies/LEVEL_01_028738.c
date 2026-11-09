/* LEVEL_01:0x028738 -- looks for a value in a four-slot table, returning early when found, and otherwise stores it in the first empty slot. */

extern void *D_00230F40[];

void func_028738(void *a0)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (a0 == D_00230F40[9 + i]) {
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_00230F40[9 + i] == 0) {
            D_00230F40[9 + i] = a0;
            return;
        }
    }
}
