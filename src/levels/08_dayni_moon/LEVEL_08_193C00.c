/* LEVEL_08:0x193C00 -- placement copy of LEVEL_01_17AFD0.c: refreshes four cached settings from the shared record: two converted to floats, one stored as a handle and one merged into a packed word that is handed to the setup call. */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_002E7040;
extern float D_00250D60;
extern float D_00250D5C;
extern int D_00250D28;
extern unsigned int D_00250D14;

extern int func_10F588(unsigned int arg);
extern int func_073C68(unsigned int arg);
extern int func_0EE198(unsigned int arg);
extern void func_0FB190(int index);

void func_193C00(void)
{
    D_00250D60 = (float)func_10F588((D_002E7040.w224 << 16) | 0x580074C1);
    D_00250D28 = func_073C68((D_002E7040.w1E0 << 16) | 0x58006441);
    D_00250D5C = (float)func_0EE198((D_002E7040.w148 << 16) | 0xA00030C1);
    D_00250D14 = (D_00250D14 & 0xF800FFFF) | (D_002E7040.w1E0 << 16);
    func_0FB190(2);
}
