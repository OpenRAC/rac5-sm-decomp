/* LEVEL_23:0x0BB398 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_001D37B4;
extern int D_001D37B8;
extern unsigned char D_001D37BD;
extern int D_001D37C0;
extern int D_001D37C4;
extern int D_001D37C8;
extern unsigned char D_001D37CC;
extern int D_001C72D8;
extern int D_001C72DC;
extern unsigned char D_001D37AC;
extern char D_002FA890[];
extern void func_0BB2E8(void);
extern void func_0247C0(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_0BB398(void)
{
    D_001D37AC = 0;
    D_001C72D8 = D_001D37B4;
    D_001C72DC = D_001D37B8;
    ((void (*)(char *, int, int, char *, int, int, int))func_0247C0)(D_002FA890, D_001D37BD, D_001D37C0, (char *)func_0BB2E8, D_001D37C4, D_001D37C8, D_001D37CC);
}
