/* LEVEL_24:0x04CD28 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_1019C8(unsigned int);
extern int D_001C544C;
extern int D_001C5450;
extern Rec D_00263C80;

void func_04CD28(void)
{
    D_001C544C = func_1019C8((D_00263C80.b << 16) | 0xa00010c1U);
    D_001C5450 = func_1019C8((D_00263C80.a << 16) | 0xa00010c1U);
}
