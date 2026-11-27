/* LEVEL_06:0x0BEEF8 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_001EF2B4;
extern int D_001EF2B8;
extern unsigned char D_001EF2BD;
extern int D_001EF2C0;
extern int D_001EF2C4;
extern int D_001EF2C8;
extern unsigned char D_001EF2CC;
extern int D_001E2DD8;
extern int D_001E2DDC;
extern unsigned char D_001EF2AC;
extern char D_003161D0[];
extern void func_0BEE48(void);
extern void func_024DE8(char *, int, int, char *, int, int, int);

void func_0BEEF8(void)
{
    D_001EF2AC = 0;
    D_001E2DD8 = D_001EF2B4;
    D_001E2DDC = D_001EF2B8;
    func_024DE8(D_003161D0, D_001EF2BD, D_001EF2C0, (char *)func_0BEE48, D_001EF2C4, D_001EF2C8, D_001EF2CC);
}
