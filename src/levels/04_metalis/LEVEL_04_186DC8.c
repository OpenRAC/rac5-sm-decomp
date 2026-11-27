/* LEVEL_04:0x186DC8 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_002B25C0;
extern float D_002212A8;
extern float D_002212A4;
extern int D_00221270;
extern unsigned int D_0022125C;

extern int func_10B078(unsigned int arg);
extern int func_070000(unsigned int arg);
extern int func_0E8A88(unsigned int arg);
extern void func_0F6C80(int index);

void func_186DC8(void)
{
    D_002212A8 = (float)func_10B078((D_002B25C0.w224 << 16) | 0x580074C1);
    D_00221270 = func_070000((D_002B25C0.w1E0 << 16) | 0x58006441);
    D_002212A4 = (float)func_0E8A88((D_002B25C0.w148 << 16) | 0xA00030C1);
    D_0022125C = (D_0022125C & 0xF800FFFF) | (D_002B25C0.w1E0 << 16);
    func_0F6C80(2);
}
