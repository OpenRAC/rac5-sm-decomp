/* LEVEL_03:0x176628 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_002B2C40;
extern float D_002200D0;
extern float D_002200CC;
extern int D_00220098;
extern unsigned int D_00220084;

extern int func_0FF620(unsigned int arg);
extern int func_06CDA8(unsigned int arg);
extern int func_0E2FB0(unsigned int arg);
extern void func_0EDFE0(int index);

void func_176628(void)
{
    D_002200D0 = (float)func_0FF620((D_002B2C40.w224 << 16) | 0x580074C1);
    D_00220098 = func_06CDA8((D_002B2C40.w1E0 << 16) | 0x58006441);
    D_002200CC = (float)func_0E2FB0((D_002B2C40.w148 << 16) | 0xA00030C1);
    D_00220084 = (D_00220084 & 0xF800FFFF) | (D_002B2C40.w1E0 << 16);
    func_0EDFE0(2);
}
