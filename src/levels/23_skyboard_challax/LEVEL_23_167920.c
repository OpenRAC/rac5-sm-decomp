/* LEVEL_23:0x167920 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_00269200;
extern float D_001DB130;
extern float D_001DB12C;
extern int D_001DB0F8;
extern unsigned int D_001DB0E4;

extern int func_0F3C70(unsigned int arg);
extern int func_067BC8(unsigned int arg);
extern int func_0D7B50(unsigned int arg);
extern void func_0E2630(int index);

void func_167920(void)
{
    D_001DB130 = (float)func_0F3C70((D_00269200.w224 << 16) | 0x580074C1);
    D_001DB0F8 = func_067BC8((D_00269200.w1E0 << 16) | 0x58006441);
    D_001DB12C = (float)func_0D7B50((D_00269200.w148 << 16) | 0xA00030C1);
    D_001DB0E4 = (D_001DB0E4 & 0xF800FFFF) | (D_00269200.w1E0 << 16);
    func_0E2630(2);
}
