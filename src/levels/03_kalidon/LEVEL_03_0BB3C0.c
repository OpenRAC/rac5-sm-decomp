/* LEVEL_03:0x0BB3C0 -- placement copy of LEVEL_01_0BB5D8.c: resets a shared state block, then runs two follow-up routines. */
typedef struct { int p0; int w04; int w08; int w0c; int w10; int w14; int w18; unsigned char b1c; unsigned char b1d; char p1[0xA]; int w28; char p2[0x2C]; int w58; } B;
extern B D_003438B0; extern int func_0BC120(int); extern void func_0BB418(void); extern void func_0BB208(void);
void func_0BB3C0(void)
{
    func_0BC120(3);
    D_003438B0.w58 = 0; D_003438B0.w08 = 0; D_003438B0.w0c = 0; D_003438B0.w10 = 0; D_003438B0.w18 = 0; D_003438B0.w14 = 0; D_003438B0.w04 = 0; D_003438B0.b1c = 0; D_003438B0.b1d = 0;
    do { D_003438B0.w28 = 0; func_0BB418(); } while (0);
    func_0BB208();
}
