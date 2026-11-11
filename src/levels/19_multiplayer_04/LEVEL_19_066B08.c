/* LEVEL_19:0x066B08 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_001A4CA4;
extern int D_001A4CA8;
extern int D_001A4CAC;
extern int D_0024E3DC;
extern int D_0024E47C;
extern void func_066F70(void);
extern void func_066F18(void);
extern void func_0686B8(void);
extern void func_0682D0(void);
extern void func_067AB0(void);
extern void func_067A10(void);
extern void func_0879E0(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_087BB8(char *buf);
void func_066B08(void)
{
    char buf[16];
    if (D_001A4CA4 < 0) {
        func_0879E0(buf, (D_0024E3DC << 16) | 0xB0007059, func_066F70, 0x1C, 0, -1, func_066F18);
        D_001A4CA4 = func_087BB8(buf);
    }
    if (D_001A4CA8 < 0) {
        func_0879E0(buf, (D_0024E3DC << 16) | 0x98007059, func_0686B8, 0x44, 0, -1, func_0682D0);
        D_001A4CA8 = func_087BB8(buf);
    }
    if (D_001A4CAC < 0) {
        func_0879E0(buf, (D_0024E47C << 16) | 0x88007059, func_067AB0, 0x1C, 0, -1, func_067A10);
        D_001A4CAC = func_087BB8(buf);
    }
}
