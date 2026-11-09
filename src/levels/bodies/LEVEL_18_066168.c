/* LEVEL_18:0x066168 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_001A4FA4;
extern int D_001A4FA8;
extern int D_001A4FAC;
extern int D_0024E5DC;
extern int D_0024E67C;
extern void func_0665D0(void);
extern void func_066578(void);
extern void func_067D18(void);
extern void func_067930(void);
extern void func_067110(void);
extern void func_067070(void);
extern void func_086E78(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_087050(char *buf);
void func_066168(void)
{
    char buf[16];
    if (D_001A4FA4 < 0) {
        func_086E78(buf, (D_0024E5DC << 16) | 0xB0007059, func_0665D0, 0x1C, 0, -1, func_066578);
        D_001A4FA4 = func_087050(buf);
    }
    if (D_001A4FA8 < 0) {
        func_086E78(buf, (D_0024E5DC << 16) | 0x98007059, func_067D18, 0x44, 0, -1, func_067930);
        D_001A4FA8 = func_087050(buf);
    }
    if (D_001A4FAC < 0) {
        func_086E78(buf, (D_0024E67C << 16) | 0x88007059, func_067110, 0x1C, 0, -1, func_067070);
        D_001A4FAC = func_087050(buf);
    }
}
