/* LEVEL_10:0x178BE0 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_002A11C0;
extern float D_00210670;
extern float D_0021066C;
extern int D_00210638;
extern unsigned int D_00210624;

extern int func_1006C8(unsigned int arg);
extern int func_06D638(unsigned int arg);
extern int func_0E4608(unsigned int arg);
extern void func_0EF088(int index);

void func_178BE0(void)
{
    D_00210670 = (float)func_1006C8((D_002A11C0.w224 << 16) | 0x580074C1);
    D_00210638 = func_06D638((D_002A11C0.w1E0 << 16) | 0x58006441);
    D_0021066C = (float)func_0E4608((D_002A11C0.w148 << 16) | 0xA00030C1);
    D_00210624 = (D_00210624 & 0xF800FFFF) | (D_002A11C0.w1E0 << 16);
    func_0EF088(2);
}
