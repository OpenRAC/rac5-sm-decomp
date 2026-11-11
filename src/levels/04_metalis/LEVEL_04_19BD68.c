/* LEVEL_04:0x19BD68 -- stores the shared lookup result for one of two fixed keys, chosen by a mode global. */
extern int D_00234170;
extern int D_00221E34;
extern int func_1364E8(unsigned int value);

void func_19BD68(void)
{
    unsigned int key;

    if (D_00234170 == 8) {
        key = 0xEA11E074u;
    } else {
        key = 0xF15D37E0u;
    }
    D_00221E34 = func_1364E8(key);
}
