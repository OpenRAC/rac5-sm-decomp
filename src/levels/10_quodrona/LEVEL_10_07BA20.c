/* LEVEL_10:0x07BA20 -- placement copy of LEVEL_01_07B380.c. */
extern char *D_001FF140;
extern char D_00243B30[];

void func_07BA20(char *value)
{
    if (value == 0)
        D_001FF140 = D_00243B30;
    else
        D_001FF140 = value;
}
