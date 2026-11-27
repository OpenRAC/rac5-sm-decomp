/* LEVEL_03:0x0C43E0 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_00218A34;
extern int D_00218A38;
extern unsigned char D_00218A3D;
extern int D_00218A40;
extern int D_00218A44;
extern int D_00218A48;
extern unsigned char D_00218A4C;
extern int D_0020C558;
extern int D_0020C55C;
extern unsigned char D_00218A2C;
extern char D_003442D0[];
extern void func_0C4330(void);
extern void func_026648(char *, int, int, char *, int, int, int);

void func_0C43E0(void)
{
    D_00218A2C = 0;
    D_0020C558 = D_00218A34;
    D_0020C55C = D_00218A38;
    func_026648(D_003442D0, D_00218A3D, D_00218A40, (char *)func_0C4330, D_00218A44, D_00218A48, D_00218A4C);
}
