/* LEVEL_24:0x075AE8 -- placement copy of LEVEL_01_07B380.c. */
extern char *D_001C6DC0;
extern char D_00206630[];

void func_075AE8(char *value)
{
    if (value == 0)
        D_001C6DC0 = D_00206630;
    else
        D_001C6DC0 = value;
}
