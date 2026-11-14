/* LEVEL_17:0x124550 -- placement copy of LEVEL_16_124B28.c: looks up the record for a fixed object and keeps it in a global. */
extern char *D_002D3D40;
extern char D_001AF688[];
extern char *func_123680(char *record);

void func_124550(void)
{
    D_002D3D40 = func_123680(D_001AF688);
}
