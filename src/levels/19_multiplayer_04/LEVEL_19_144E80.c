/* LEVEL_19:0x144E80 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_05E228(unsigned int);
extern int D_001BEAC8;
extern int D_001BEA80;
extern Rec D_0024E3C0;

void func_144E80(void)
{
    D_001BEAC8 = func_05E228((D_0024E3C0.a << 16) | 0x580064c1U);
    D_001BEA80 = func_05E228((D_0024E3C0.a << 16) | 0x580064c1U);
}
