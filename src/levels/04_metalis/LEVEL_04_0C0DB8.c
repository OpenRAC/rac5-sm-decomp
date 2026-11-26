/* LEVEL_04:0x0C0DB8 -- placement copy of LEVEL_01_0BB5D8.c: resets a shared state block, then runs two follow-up routines. */
typedef struct { int p0; int w04; int w08; int w0c; int w10; int w14; int w18; unsigned char b1c; unsigned char b1d; char p1[0xA]; int w28; char p2[0x2C]; int w58; } B;
extern B D_00343230; extern int func_0C1B48(int); extern void func_0C0E10(void); extern void func_0C0C00(void);
void func_0C0DB8(void)
{
    func_0C1B48(3);
    D_00343230.w58 = 0; D_00343230.w08 = 0; D_00343230.w0c = 0; D_00343230.w10 = 0; D_00343230.w18 = 0; D_00343230.w14 = 0; D_00343230.w04 = 0; D_00343230.b1c = 0; D_00343230.b1d = 0;
    do { D_00343230.w28 = 0; func_0C0E10(); } while (0);
    func_0C0C00();
}
