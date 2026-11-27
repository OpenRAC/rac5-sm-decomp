/* LEVEL_01:0x0C45F8 -- clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_002003B4;
extern int D_002003B8;
extern unsigned char D_002003BD;
extern int D_002003C0;
extern int D_002003C4;
extern int D_002003C8;
extern unsigned char D_002003CC;
extern int D_001F3ED8;
extern int D_001F3EDC;
extern unsigned char D_002003AC;
extern char D_00329450[];
extern void func_0C4548(void);
extern void func_026768(char *, int, int, char *, int, int, int);

void func_0C45F8(void)
{
    D_002003AC = 0;
    D_001F3ED8 = D_002003B4;
    D_001F3EDC = D_002003B8;
    func_026768(D_00329450, D_002003BD, D_002003C0, (char *)func_0C4548, D_002003C4, D_002003C8, D_002003CC);
}
