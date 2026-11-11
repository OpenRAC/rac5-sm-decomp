/* LEVEL_24:0x1550C8 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_067A60(unsigned int);
extern int D_001D8608;
extern int D_001D85C0;
extern Rec D_00263C80;

void func_1550C8(void)
{
    D_001D8608 = func_067A60((D_00263C80.a << 16) | 0x580064c1U);
    D_001D85C0 = func_067A60((D_00263C80.a << 16) | 0x580064c1U);
}
