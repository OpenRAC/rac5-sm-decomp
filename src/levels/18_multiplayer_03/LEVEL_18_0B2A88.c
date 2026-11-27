/* LEVEL_18:0x0B2A88 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_001AF8AC;
extern int D_001AF8B0;
extern unsigned char D_001AF8B5;
extern int D_001AF8B8;
extern int D_001AF8BC;
extern int D_001AF8C0;
extern unsigned char D_001AF8C4;
extern int D_001A2E60;
extern int D_001A2E64;
extern unsigned char D_001AF8A4;
extern char D_00277710[];
extern void func_0B29D8(void);
extern void func_023910(char *, int, int, char *, int, int, int);

void func_0B2A88(void)
{
    D_001AF8A4 = 0;
    D_001A2E60 = D_001AF8AC;
    D_001A2E64 = D_001AF8B0;
    func_023910(D_00277710, D_001AF8B5, D_001AF8B8, (char *)func_0B29D8, D_001AF8BC, D_001AF8C0, D_001AF8C4);
}
