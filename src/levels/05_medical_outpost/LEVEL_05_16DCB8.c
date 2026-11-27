/* LEVEL_05:0x16DCB8 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_00283C80;
extern float D_001F6B10;
extern float D_001F6B0C;
extern int D_001F6AD8;
extern unsigned int D_001F6AC4;

extern int func_0FE468(unsigned int arg);
extern int func_06C088(unsigned int arg);
extern int func_0E0DA8(unsigned int arg);
extern void func_0EB888(int index);

void func_16DCB8(void)
{
    D_001F6B10 = (float)func_0FE468((D_00283C80.w224 << 16) | 0x580074C1);
    D_001F6AD8 = func_06C088((D_00283C80.w1E0 << 16) | 0x58006441);
    D_001F6B0C = (float)func_0E0DA8((D_00283C80.w148 << 16) | 0xA00030C1);
    D_001F6AC4 = (D_001F6AC4 & 0xF800FFFF) | (D_00283C80.w1E0 << 16);
    func_0EB888(2);
}
