/* LEVEL_01:0x053BE8 -- hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_109DB8(unsigned int);
extern int D_001F47CC;
extern int D_001F47D0;
extern Rec D_00297DC0;

void func_053BE8(void)
{
    D_001F47CC = func_109DB8((D_00297DC0.b << 16) | 0xa00010c1U);
    D_001F47D0 = func_109DB8((D_00297DC0.a << 16) | 0xa00010c1U);
}
