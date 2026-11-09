/* LEVEL_03:0x052058 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_108650(unsigned int);
extern int D_0020CE4C;
extern int D_0020CE50;
extern Rec D_002B2C40;

void func_052058(void)
{
    D_0020CE4C = func_108650((D_002B2C40.b << 16) | 0xa00010c1U);
    D_0020CE50 = func_108650((D_002B2C40.a << 16) | 0xa00010c1U);
}
