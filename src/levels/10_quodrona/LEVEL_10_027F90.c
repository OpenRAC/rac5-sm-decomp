/* LEVEL_10:0x027F90 -- placement copy of LEVEL_01_028738.c: looks for a value in a four-slot table, returning early when found, and otherwise stores it in the first empty slot. */

extern void *D_0023A340[];

void func_027F90(void *a0)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (a0 == D_0023A340[9 + i]) {
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_0023A340[9 + i] == 0) {
            D_0023A340[9 + i] = a0;
            return;
        }
    }
}
