/* LEVEL_08:0x1BCA98 -- placement copy of LEVEL_04_19BD68.c: stores the shared lookup result for one of two fixed keys, chosen by a mode global. */
extern int D_00264470;
extern int D_00251E1C;
extern int func_13B5A0(unsigned int value);

void func_1BCA98(void)
{
    unsigned int key;

    if (D_00264470 == 8) {
        key = 0xEA11E074u;
    } else {
        key = 0xF15D37E0u;
    }
    D_00251E1C = func_13B5A0(key);
}
