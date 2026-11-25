/* LEVEL_19:0x0B3388 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_001AF5AC;
extern int D_001AF5B0;
extern unsigned char D_001AF5B5;
extern int D_001AF5B8;
extern int D_001AF5BC;
extern int D_001AF5C0;
extern unsigned char D_001AF5C4;
extern int D_001A2B60;
extern int D_001A2B64;
extern unsigned char D_001AF5A4;
extern char D_00277510[];
extern void func_0B32D8(void);
extern void func_023F08(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_0B3388(void)
{
    D_001AF5A4 = 0;
    D_001A2B60 = D_001AF5AC;
    D_001A2B64 = D_001AF5B0;
    ((void (*)(char *, int, int, char *, int, int, int))func_023F08)(D_00277510, D_001AF5B5, D_001AF5B8, (char *)func_0B32D8, D_001AF5BC, D_001AF5C0, D_001AF5C4);
}
