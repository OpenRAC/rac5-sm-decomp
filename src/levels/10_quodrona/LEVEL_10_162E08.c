/* LEVEL_10:0x162E08 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_06D638(unsigned int);
extern int D_00210320;
extern int D_002102D8;
extern Rec D_002A11C0;

void func_162E08(void)
{
    D_00210320 = func_06D638((D_002A11C0.a << 16) | 0x580064c1U);
    D_002102D8 = func_06D638((D_002A11C0.a << 16) | 0x580064c1U);
}
