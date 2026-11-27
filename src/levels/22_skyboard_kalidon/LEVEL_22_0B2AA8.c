/* LEVEL_22:0x0B2AA8 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_0015F734;
extern int D_0015F738;
extern unsigned char D_0015F73D;
extern int D_0015F740;
extern int D_0015F744;
extern int D_0015F748;
extern unsigned char D_0015F74C;
extern int D_00153258;
extern int D_0015325C;
extern unsigned char D_0015F72C;
extern char D_0027F010[];
extern void func_0B29F8(void);
extern void func_0214C0(char *, int, int, char *, int, int, int);

void func_0B2AA8(void)
{
    D_0015F72C = 0;
    D_00153258 = D_0015F734;
    D_0015325C = D_0015F738;
    func_0214C0(D_0027F010, D_0015F73D, D_0015F740, (char *)func_0B29F8, D_0015F744, D_0015F748, D_0015F74C);
}
