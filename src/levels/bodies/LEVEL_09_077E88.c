/* LEVEL_09:0x077E88 -- placement copy of LEVEL_01_07B380.c. */
extern char *D_001DFF40;
extern char D_00221EB0[];

void func_077E88(char *value)
{
    if (value == 0)
        D_001DFF40 = D_00221EB0;
    else
        D_001DFF40 = value;
}
