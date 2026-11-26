/* LEVEL_15:0x09BC20 -- placement copy of LEVEL_01_0BB5D8.c: resets a shared state block, then runs two follow-up routines. */
typedef struct { int p0; int w04; int w08; int w0c; int w10; int w14; int w18; unsigned char b1c; unsigned char b1d; char p1[0xA]; int w28; char p2[0x2C]; int w58; } B;
extern B D_00240270; extern int func_09C980(int); extern void func_09BC78(void); extern void func_09BA68(void);
void func_09BC20(void)
{
    func_09C980(3);
    D_00240270.w58 = 0; D_00240270.w08 = 0; D_00240270.w0c = 0; D_00240270.w10 = 0; D_00240270.w18 = 0; D_00240270.w14 = 0; D_00240270.w04 = 0; D_00240270.b1c = 0; D_00240270.b1d = 0;
    do { D_00240270.w28 = 0; func_09BC78(); } while (0);
    func_09BA68();
}
