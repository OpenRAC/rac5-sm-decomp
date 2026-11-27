/* LEVEL_09:0x16A1E8 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_0027F540;
extern float D_001F1508;
extern float D_001F1504;
extern int D_001F14D0;
extern unsigned int D_001F14BC;

extern int func_0FCC68(unsigned int arg);
extern int func_06B020(unsigned int arg);
extern int func_0DFD20(unsigned int arg);
extern void func_0EB628(int index);

void func_16A1E8(void)
{
    D_001F1508 = (float)func_0FCC68((D_0027F540.w224 << 16) | 0x580074C1);
    D_001F14D0 = func_06B020((D_0027F540.w1E0 << 16) | 0x58006441);
    D_001F1504 = (float)func_0DFD20((D_0027F540.w148 << 16) | 0xA00030C1);
    D_001F14BC = (D_001F14BC & 0xF800FFFF) | (D_0027F540.w1E0 << 16);
    func_0EB628(2);
}
