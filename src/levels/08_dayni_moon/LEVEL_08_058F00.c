/* LEVEL_08:0x058F00 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_11AA40(unsigned int);
extern int D_0023D68C;
extern int D_0023D690;
extern Rec D_002E7040;

void func_058F00(void)
{
    D_0023D68C = func_11AA40((D_002E7040.b << 16) | 0xa00010c1U);
    D_0023D690 = func_11AA40((D_002E7040.a << 16) | 0xa00010c1U);
}
