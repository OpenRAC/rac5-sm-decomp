/* LEVEL_17:0x0B2FF0 -- placement copy of LEVEL_01_0C45F8.c: clears a byte, copies two globals into two others, then calls the seven-argument constructor with the table, four global values, the callback and a byte. */
extern int D_001A1A2C;
extern int D_001A1A30;
extern unsigned char D_001A1A35;
extern int D_001A1A38;
extern int D_001A1A3C;
extern int D_001A1A40;
extern unsigned char D_001A1A44;
extern int D_00194FE0;
extern int D_00194FE4;
extern unsigned char D_001A1A24;
extern char D_00268690[];
extern void func_0B2F40(void);
extern void func_023C48(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5, long long a6);

void func_0B2FF0(void)
{
    D_001A1A24 = 0;
    D_00194FE0 = D_001A1A2C;
    D_00194FE4 = D_001A1A30;
    ((void (*)(char *, int, int, char *, int, int, int))func_023C48)(D_00268690, D_001A1A35, D_001A1A38, (char *)func_0B2F40, D_001A1A3C, D_001A1A40, D_001A1A44);
}
