/* LEVEL_16:0x0B3AB0 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_001AE42C;
extern int D_001AE430;
extern unsigned char D_001AE435;
extern int D_001AE438;
extern int D_001AE43C;
extern int D_001AE440;
extern unsigned char D_001AE444;
extern int D_001A19E0;
extern int D_001A19E4;
extern unsigned char D_001AE424;
extern char D_00277390[];
extern void func_0B3A00(void);
extern void func_0242C8(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_0B3AB0(void)
{
    D_001AE424 = 0;
    D_001A19E0 = D_001AE42C;
    D_001A19E4 = D_001AE430;
    ((void (*)(char *, int, int, char *, int, int, int))func_0242C8)(D_00277390, D_001AE435, D_001AE438, (char *)func_0B3A00, D_001AE43C, D_001AE440, D_001AE444);
}
