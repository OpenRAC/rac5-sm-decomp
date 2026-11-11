/* LEVEL_05:0x15E8D0 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_06C088(unsigned int);
extern int D_001F6780;
extern int D_001F6738;
extern Rec D_00283C80;

void func_15E8D0(void)
{
    D_001F6780 = func_06C088((D_00283C80.a << 16) | 0x580064c1U);
    D_001F6738 = func_06C088((D_00283C80.a << 16) | 0x580064c1U);
}
