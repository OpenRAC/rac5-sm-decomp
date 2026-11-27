/* LEVEL_02:0x0CAF08 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_00215374;
extern int D_00215378;
extern unsigned char D_0021537D;
extern int D_00215380;
extern int D_00215384;
extern int D_00215388;
extern unsigned char D_0021538C;
extern int D_00208B58;
extern int D_00208B5C;
extern unsigned char D_0021536C;
extern char D_00340950[];
extern void func_0CAE58(void);
extern void func_027040(char *, int, int, char *, int, int, int);

void func_0CAF08(void)
{
    D_0021536C = 0;
    D_00208B58 = D_00215374;
    D_00208B5C = D_00215378;
    func_027040(D_00340950, D_0021537D, D_00215380, (char *)func_0CAE58, D_00215384, D_00215388, D_0021538C);
}
