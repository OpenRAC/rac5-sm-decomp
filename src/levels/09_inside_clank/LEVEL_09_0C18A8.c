/* LEVEL_09:0x0C18A8 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_001EA1B4;
extern int D_001EA1B8;
extern unsigned char D_001EA1BD;
extern int D_001EA1C0;
extern int D_001EA1C4;
extern int D_001EA1C8;
extern unsigned char D_001EA1CC;
extern int D_001DDCD8;
extern int D_001DDCDC;
extern unsigned char D_001EA1AC;
extern char D_00310BD0[];
extern void func_0C17F8(void);
extern void func_0259D8(char *, int, int, char *, int, int, int);

void func_0C18A8(void)
{
    D_001EA1AC = 0;
    D_001DDCD8 = D_001EA1B4;
    D_001DDCDC = D_001EA1B8;
    func_0259D8(D_00310BD0, D_001EA1BD, D_001EA1C0, (char *)func_0C17F8, D_001EA1C4, D_001EA1C8, D_001EA1CC);
}
