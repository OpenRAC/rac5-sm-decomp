/* LEVEL_07:0x170650 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_06F2A0(unsigned int);
extern int D_0021BC28;
extern int D_0021BBE0;
extern Rec D_002AD6C0;

void func_170650(void)
{
    D_0021BC28 = func_06F2A0((D_002AD6C0.a << 16) | 0x580064c1U);
    D_0021BBE0 = func_06F2A0((D_002AD6C0.a << 16) | 0x580064c1U);
}
