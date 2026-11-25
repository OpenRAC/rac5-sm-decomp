/* LEVEL_05:0x0C2BA0 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_001EF734;
extern int D_001EF738;
extern unsigned char D_001EF73D;
extern int D_001EF740;
extern int D_001EF744;
extern int D_001EF748;
extern unsigned char D_001EF74C;
extern int D_001E3258;
extern int D_001E325C;
extern unsigned char D_001EF72C;
extern char D_00315310[];
extern void func_0C2AF0(void);
extern void func_025678(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_0C2BA0(void)
{
    D_001EF72C = 0;
    D_001E3258 = D_001EF734;
    D_001E325C = D_001EF738;
    ((void (*)(char *, int, int, char *, int, int, int))func_025678)(D_00315310, D_001EF73D, D_001EF740, (char *)func_0C2AF0, D_001EF744, D_001EF748, D_001EF74C);
}
