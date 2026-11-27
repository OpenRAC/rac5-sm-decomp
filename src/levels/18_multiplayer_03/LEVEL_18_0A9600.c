/* LEVEL_18:0x0A9600 -- placement copy of LEVEL_01_0BB5D8.c: resets a shared state block, then runs two follow-up routines. */
typedef struct { int p0; int w04; int w08; int w0c; int w10; int w14; int w18; unsigned char b1c; unsigned char b1d; char p1[0xA]; int w28; char p2[0x2C]; int w58; } B;
extern B D_00276CF0; extern int func_0AA718(int); extern void func_0A9658(void); extern void func_0A9448(void);
void func_0A9600(void)
{
    func_0AA718(3);
    D_00276CF0.w58 = 0; D_00276CF0.w08 = 0; D_00276CF0.w0c = 0; D_00276CF0.w10 = 0; D_00276CF0.w18 = 0; D_00276CF0.w14 = 0; D_00276CF0.w04 = 0; D_00276CF0.b1c = 0; D_00276CF0.b1d = 0;
    do { D_00276CF0.w28 = 0; func_0A9658(); } while (0);
    func_0A9448();
}
