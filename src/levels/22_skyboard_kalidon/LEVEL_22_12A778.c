/* LEVEL_22:0x12A778 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_001ED980;
extern float D_00166708;
extern float D_00166704;
extern int D_001666D0;
extern unsigned int D_001666BC;

extern int func_0E4378(unsigned int arg);
extern int func_063738(unsigned int arg);
extern int func_0CED38(unsigned int arg);
extern void func_0D5658(int index);

void func_12A778(void)
{
    D_00166708 = (float)func_0E4378((D_001ED980.w224 << 16) | 0x580074C1);
    D_001666D0 = func_063738((D_001ED980.w1E0 << 16) | 0x58006441);
    D_00166704 = (float)func_0CED38((D_001ED980.w148 << 16) | 0xA00030C1);
    D_001666BC = (D_001666BC & 0xF800FFFF) | (D_001ED980.w1E0 << 16);
    func_0D5658(2);
}
