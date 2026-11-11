/* LEVEL_23:0x04CF10 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_0FCCA0(unsigned int);
extern int D_001C7BCC;
extern int D_001C7BD0;
extern Rec D_00269200;

void func_04CF10(void)
{
    D_001C7BCC = func_0FCCA0((D_00269200.b << 16) | 0xa00010c1U);
    D_001C7BD0 = func_0FCCA0((D_00269200.a << 16) | 0xa00010c1U);
}
