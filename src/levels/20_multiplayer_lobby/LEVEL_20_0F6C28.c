/* LEVEL_20:0x0F6C28 -- placement copy of LEVEL_16_124B28.c: looks up the record for a fixed object and keeps it in a global. */
extern char *D_00205F80;
extern char D_0011E730[];
extern char *func_0F5D58(char *record);

void func_0F6C28(void)
{
    D_00205F80 = func_0F5D58(D_0011E730);
}
