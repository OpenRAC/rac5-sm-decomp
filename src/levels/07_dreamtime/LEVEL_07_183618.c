/* LEVEL_07:0x183618 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_002AD6C0;
extern float D_0021C028;
extern float D_0021C024;
extern int D_0021BFF0;
extern unsigned int D_0021BFDC;

extern int func_101B88(unsigned int arg);
extern int func_06F2A0(unsigned int arg);
extern int func_0E4860(unsigned int arg);
extern void func_0F0548(int index);

void func_183618(void)
{
    D_0021C028 = (float)func_101B88((D_002AD6C0.w224 << 16) | 0x580074C1);
    D_0021BFF0 = func_06F2A0((D_002AD6C0.w1E0 << 16) | 0x58006441);
    D_0021C024 = (float)func_0E4860((D_002AD6C0.w148 << 16) | 0xA00030C1);
    D_0021BFDC = (D_0021BFDC & 0xF800FFFF) | (D_002AD6C0.w1E0 << 16);
    func_0F0548(2);
}
