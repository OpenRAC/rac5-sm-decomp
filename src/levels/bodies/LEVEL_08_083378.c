/* LEVEL_08:0x083378 -- placement copy of LEVEL_01_07B380.c. */
extern char *D_0023F000;
extern char D_002899C0[];

void func_083378(char *value)
{
    if (value == 0)
        D_0023F000 = D_002899C0;
    else
        D_0023F000 = value;
}
