/* LEVEL_05:0x078A78 -- placement copy of LEVEL_01_07B380.c. */
extern char *D_001E54C0;
extern char D_002265F0[];

void func_078A78(char *value)
{
    if (value == 0)
        D_001E54C0 = D_002265F0;
    else
        D_001E54C0 = value;
}
