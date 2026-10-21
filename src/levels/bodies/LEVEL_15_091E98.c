/* LEVEL_15.REL:0x091E98 -- stores the float argument in the global at 0x150DE0. */
extern char D_00150DE0[];

void func_091E98(float x)
{
    *(float *)D_00150DE0 = x;
}
