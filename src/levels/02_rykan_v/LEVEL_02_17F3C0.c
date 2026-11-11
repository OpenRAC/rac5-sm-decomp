/* LEVEL_02:0x17F3C0 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_0738A0(unsigned int);
extern int D_0021C838;
extern int D_0021C7F0;
extern Rec D_002AF2C0;

void func_17F3C0(void)
{
    D_0021C838 = func_0738A0((D_002AF2C0.a << 16) | 0x580064c1U);
    D_0021C7F0 = func_0738A0((D_002AF2C0.a << 16) | 0x580064c1U);
}
