/* FRONTEND:0x003E60 -- placement copy of LEVEL_01_07B380.c. */
extern char *D_0002AD10;
extern char D_0010BF40[];

void func_003E60(char *value)
{
    if (value == 0)
        D_0002AD10 = D_0010BF40;
    else
        D_0002AD10 = value;
}
