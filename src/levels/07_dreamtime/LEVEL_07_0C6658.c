/* LEVEL_07:0x0C6658 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_002146B4;
extern int D_002146B8;
extern unsigned char D_002146BD;
extern int D_002146C0;
extern int D_002146C4;
extern int D_002146C8;
extern unsigned char D_002146CC;
extern int D_002081D8;
extern int D_002081DC;
extern unsigned char D_002146AC;
extern char D_0033ED50[];
extern void func_0C65A8(void);
extern void func_026D30(char *, int, int, char *, int, int, int);

void func_0C6658(void)
{
    D_002146AC = 0;
    D_002081D8 = D_002146B4;
    D_002081DC = D_002146B8;
    func_026D30(D_0033ED50, D_002146BD, D_002146C0, (char *)func_0C65A8, D_002146C4, D_002146C8, D_002146CC);
}
