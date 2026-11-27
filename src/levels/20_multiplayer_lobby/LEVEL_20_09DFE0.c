/* LEVEL_20:0x09DFE0 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_00110B0C;
extern int D_00110B10;
extern unsigned char D_00110B15;
extern int D_00110B18;
extern int D_00110B1C;
extern int D_00110B20;
extern unsigned char D_00110B24;
extern int D_001040C0;
extern int D_001040C4;
extern unsigned char D_00110B04;
extern char D_0019ABD0[];
extern void func_09DF30(void);
extern void func_020F70(char *, int, int, char *, int, int, int);

void func_09DFE0(void)
{
    D_00110B04 = 0;
    D_001040C0 = D_00110B0C;
    D_001040C4 = D_00110B10;
    func_020F70(D_0019ABD0, D_00110B15, D_00110B18, (char *)func_09DF30, D_00110B1C, D_00110B20, D_00110B24);
}
