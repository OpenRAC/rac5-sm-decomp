/* LEVEL_09:0x0B8888 -- placement copy of LEVEL_01_0BB5D8.c: resets a shared state block, then runs two follow-up routines. */
typedef struct { int p0; int w04; int w08; int w0c; int w10; int w14; int w18; unsigned char b1c; unsigned char b1d; char p1[0xA]; int w28; char p2[0x2C]; int w58; } B;
extern B D_003101B0; extern int func_0B95E8(int); extern void func_0B88E0(void); extern void func_0B86D0(void);
void func_0B8888(void)
{
    func_0B95E8(3);
    D_003101B0.w58 = 0; D_003101B0.w08 = 0; D_003101B0.w0c = 0; D_003101B0.w10 = 0; D_003101B0.w18 = 0; D_003101B0.w14 = 0; D_003101B0.w04 = 0; D_003101B0.b1c = 0; D_003101B0.b1d = 0;
    do { D_003101B0.w28 = 0; func_0B88E0(); } while (0);
    func_0B86D0();
}
