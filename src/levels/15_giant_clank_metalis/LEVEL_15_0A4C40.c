/* LEVEL_15:0x0A4C40 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_00155034;
extern int D_00155038;
extern unsigned char D_0015503D;
extern int D_00155040;
extern int D_00155044;
extern int D_00155048;
extern unsigned char D_0015504C;
extern int D_00148B58;
extern int D_00148B5C;
extern unsigned char D_0015502C;
extern char D_00240C90[];
extern void func_0A4B90(void);
extern void func_0209F0(char *, int, int, char *, int, int, int);

void func_0A4C40(void)
{
    D_0015502C = 0;
    D_00148B58 = D_00155034;
    D_00148B5C = D_00155038;
    func_0209F0(D_00240C90, D_0015503D, D_00155040, (char *)func_0A4B90, D_00155044, D_00155048, D_0015504C);
}
