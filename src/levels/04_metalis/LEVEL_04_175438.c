/* LEVEL_04:0x175438 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_070000(unsigned int);
extern int D_00220EF0;
extern int D_00220EA8;
extern Rec D_002B25C0;

void func_175438(void)
{
    D_00220EF0 = func_070000((D_002B25C0.a << 16) | 0x580064c1U);
    D_00220EA8 = func_070000((D_002B25C0.a << 16) | 0x580064c1U);
}
