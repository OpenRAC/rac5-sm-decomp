/* LEVEL_07:0x028A98 -- placement copy of LEVEL_01_028738.c: looks for a value in a four-slot table, returning early when found, and otherwise stores it in the first empty slot. */

extern void *D_00246840[];

void func_028A98(void *a0)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (a0 == D_00246840[9 + i]) {
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_00246840[9 + i] == 0) {
            D_00246840[9 + i] = a0;
            return;
        }
    }
}
