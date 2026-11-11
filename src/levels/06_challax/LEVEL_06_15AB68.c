/* LEVEL_06:0x15AB68 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_06B1E0(unsigned int);
extern int D_001F62A0;
extern int D_001F6258;
extern Rec D_00284B40;

void func_15AB68(void)
{
    D_001F62A0 = func_06B1E0((D_00284B40.a << 16) | 0x580064c1U);
    D_001F6258 = func_06B1E0((D_00284B40.a << 16) | 0x580064c1U);
}
