/* LEVEL_24:0x0BDEC0 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_001D1034;
extern int D_001D1038;
extern unsigned char D_001D103D;
extern int D_001D1040;
extern int D_001D1044;
extern int D_001D1048;
extern unsigned char D_001D104C;
extern int D_001C4B58;
extern int D_001C4B5C;
extern unsigned char D_001D102C;
extern char D_002F5310[];
extern void func_0BDE10(void);
extern void func_024460(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_0BDEC0(void)
{
    D_001D102C = 0;
    D_001C4B58 = D_001D1034;
    D_001C4B5C = D_001D1038;
    ((void (*)(char *, int, int, char *, int, int, int))func_024460)(D_002F5310, D_001D103D, D_001D1040, (char *)func_0BDE10, D_001D1044, D_001D1048, D_001D104C);
}
