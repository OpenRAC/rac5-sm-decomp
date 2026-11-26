/* LEVEL_07:0x0BD638 -- placement copy of LEVEL_01_0BB5D8.c: resets a shared state block, then runs two follow-up routines. */
typedef struct { int p0; int w04; int w08; int w0c; int w10; int w14; int w18; unsigned char b1c; unsigned char b1d; char p1[0xA]; int w28; char p2[0x2C]; int w58; } B;
extern B D_0033E330; extern int func_0BE398(int); extern void func_0BD690(void); extern void func_0BD480(void);
void func_0BD638(void)
{
    func_0BE398(3);
    D_0033E330.w58 = 0; D_0033E330.w08 = 0; D_0033E330.w0c = 0; D_0033E330.w10 = 0; D_0033E330.w18 = 0; D_0033E330.w14 = 0; D_0033E330.w04 = 0; D_0033E330.b1c = 0; D_0033E330.b1d = 0;
    do { D_0033E330.w28 = 0; func_0BD690(); } while (0);
    func_0BD480();
}
