/* LEVEL_19:0x06E5E8 -- placement copy of LEVEL_01_07B380.c. */
extern char *D_001A52F8;
extern char D_001ECF80[];

void func_06E5E8(char *value)
{
    if (value == 0)
        D_001A52F8 = D_001ECF80;
    else
        D_001A52F8 = value;
}
