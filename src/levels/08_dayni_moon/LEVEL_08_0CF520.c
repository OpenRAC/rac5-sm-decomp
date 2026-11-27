/* LEVEL_08:0x0CF520 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_00249274;
extern int D_00249278;
extern unsigned char D_0024927D;
extern int D_00249280;
extern int D_00249284;
extern int D_00249288;
extern unsigned char D_0024928C;
extern int D_0023CA58;
extern int D_0023CA5C;
extern unsigned char D_0024926C;
extern char D_003786D0[];
extern void func_0CF470(void);
extern void func_026FF8(char *, int, int, char *, int, int, int);

void func_0CF520(void)
{
    D_0024926C = 0;
    D_0023CA58 = D_00249274;
    D_0023CA5C = D_00249278;
    func_026FF8(D_003786D0, D_0024927D, D_00249280, (char *)func_0CF470, D_00249284, D_00249288, D_0024928C);
}
