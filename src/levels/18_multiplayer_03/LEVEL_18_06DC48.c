/* LEVEL_18:0x06DC48 -- placement copy of LEVEL_01_07B380.c. */
extern char *D_001A55F8;
extern char D_001ED180[];

void func_06DC48(char *value)
{
    if (value == 0)
        D_001A55F8 = D_001ED180;
    else
        D_001A55F8 = value;
}
