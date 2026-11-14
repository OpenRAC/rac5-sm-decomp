/* LEVEL_17:0x123E78 -- placement copy of LEVEL_16_124450.c: clears a flag, stores the lookup result for the table and wires the output record for the table's mode (0, 2 or other). */
extern int D_002D3D44;
extern char *D_002D3D40;
extern int D_001AF688[];
extern char D_001B03A0[];
extern char D_001B02B8[];
extern char D_001B01D0[];
extern char *D_001B0488[];
extern char *D_001B0490;
extern int D_001B049C;
extern char *func_123680(char *record);

void func_123E78(void)
{
    D_002D3D44 = 0;
    D_002D3D40 = func_123680((char *)D_001AF688);
    if (D_001AF688[1] == 0) {
        D_001B0490 = D_001B03A0;
        D_001B049C = 2;
    } else if (D_001AF688[1] == 2) {
        D_001B0488[2] = D_001B02B8;
        D_001B0488[3] = D_001B03A0;
        D_001B049C = 3;
    } else {
        D_001B0488[2] = D_001B01D0;
        D_001B0488[3] = D_001B03A0;
        D_001B049C = 3;
    }
}
