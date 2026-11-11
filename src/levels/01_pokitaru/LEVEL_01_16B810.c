/* LEVEL_01:0x16B810 -- hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_06E420(unsigned int);
extern int D_002076E8;
extern int D_002076A0;
extern Rec D_00297DC0;

void func_16B810(void)
{
    D_002076E8 = func_06E420((D_00297DC0.a << 16) | 0x580064c1U);
    D_002076A0 = func_06E420((D_00297DC0.a << 16) | 0x580064c1U);
}
