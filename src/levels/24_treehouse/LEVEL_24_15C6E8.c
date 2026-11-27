/* LEVEL_24:0x15C6E8 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_00263C80;
extern float D_001D88F8;
extern float D_001D88F4;
extern int D_001D88C0;
extern unsigned int D_001D88AC;

extern int func_0F8998(unsigned int arg);
extern int func_067A60(unsigned int arg);
extern int func_0DA688(unsigned int arg);
extern void func_0E7358(int index);

void func_15C6E8(void)
{
    D_001D88F8 = (float)func_0F8998((D_00263C80.w224 << 16) | 0x580074C1);
    D_001D88C0 = func_067A60((D_00263C80.w1E0 << 16) | 0x58006441);
    D_001D88F4 = (float)func_0DA688((D_00263C80.w148 << 16) | 0xA00030C1);
    D_001D88AC = (D_001D88AC & 0xF800FFFF) | (D_00263C80.w1E0 << 16);
    func_0E7358(2);
}
