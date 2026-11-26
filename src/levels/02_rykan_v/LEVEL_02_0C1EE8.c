/* LEVEL_02:0x0C1EE8 -- placement copy of LEVEL_01_0BB5D8.c: resets a shared state block, then runs two follow-up routines. */
typedef struct { int p0; int w04; int w08; int w0c; int w10; int w14; int w18; unsigned char b1c; unsigned char b1d; char p1[0xA]; int w28; char p2[0x2C]; int w58; } B;
extern B D_0033FF30; extern int func_0C2C48(int); extern void func_0C1F40(void); extern void func_0C1D30(void);
void func_0C1EE8(void)
{
    func_0C2C48(3);
    D_0033FF30.w58 = 0; D_0033FF30.w08 = 0; D_0033FF30.w0c = 0; D_0033FF30.w10 = 0; D_0033FF30.w18 = 0; D_0033FF30.w14 = 0; D_0033FF30.w04 = 0; D_0033FF30.b1c = 0; D_0033FF30.b1d = 0;
    do { D_0033FF30.w28 = 0; func_0C1F40(); } while (0);
    func_0C1D30();
}
