/* LEVEL_01:0x0BB5D8 -- resets a shared state block, then runs two follow-up routines. */
typedef struct { int p0; int w04; int w08; int w0c; int w10; int w14; int w18; unsigned char b1c; unsigned char b1d; char p1[0xA]; int w28; char p2[0x2C]; int w58; } B;
extern B D_00328A30; extern int func_0BC338(int); extern void func_0BB630(void); extern void func_0BB420(void);
void func_0BB5D8(void)
{
    func_0BC338(3);
    D_00328A30.w58 = 0; D_00328A30.w08 = 0; D_00328A30.w0c = 0; D_00328A30.w10 = 0; D_00328A30.w18 = 0; D_00328A30.w14 = 0; D_00328A30.w04 = 0; D_00328A30.b1c = 0; D_00328A30.b1d = 0;
    do { D_00328A30.w28 = 0; func_0BB630(); } while (0);
    func_0BB420();
}
