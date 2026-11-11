/* LEVEL_08:0x1807E0 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_073C68(unsigned int);
extern int D_002509D8;
extern int D_00250990;
extern Rec D_002E7040;

void func_1807E0(void)
{
    D_002509D8 = func_073C68((D_002E7040.a << 16) | 0x580064c1U);
    D_00250990 = func_073C68((D_002E7040.a << 16) | 0x580064c1U);
}
