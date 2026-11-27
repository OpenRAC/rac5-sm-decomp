/* LEVEL_02:0x191678 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_002AF2C0;
extern float D_0021CBA8;
extern float D_0021CBA4;
extern int D_0021CB70;
extern unsigned int D_0021CB5C;

extern int func_106F38(unsigned int arg);
extern int func_0738A0(unsigned int arg);
extern int func_0E9B58(unsigned int arg);
extern void func_0F58F8(int index);

void func_191678(void)
{
    D_0021CBA8 = (float)func_106F38((D_002AF2C0.w224 << 16) | 0x580074C1);
    D_0021CB70 = func_0738A0((D_002AF2C0.w1E0 << 16) | 0x58006441);
    D_0021CBA4 = (float)func_0E9B58((D_002AF2C0.w148 << 16) | 0xA00030C1);
    D_0021CB5C = (D_0021CB5C & 0xF800FFFF) | (D_002AF2C0.w1E0 << 16);
    func_0F58F8(2);
}
