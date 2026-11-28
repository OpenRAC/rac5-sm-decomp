/* LEVEL_06:0x1665B0 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_00284B40;
extern float D_001F65B0;
extern float D_001F65AC;
extern int D_001F6578;
extern unsigned int D_001F6564;

extern int func_0F9E48(unsigned int arg);
extern int func_06B1E0(unsigned int arg);
extern int func_0DDAC8(unsigned int arg);
extern void func_0E8808(int index);

void func_1665B0(void)
{
    D_001F65B0 = (float)func_0F9E48((D_00284B40.w224 << 16) | 0x580074C1);
    D_001F6578 = func_06B1E0((D_00284B40.w1E0 << 16) | 0x58006441);
    D_001F65AC = (float)func_0DDAC8((D_00284B40.w148 << 16) | 0xA00030C1);
    D_001F6564 = (D_001F6564 & 0xF800FFFF) | (D_00284B40.w1E0 << 16);
    func_0E8808(2);
}
