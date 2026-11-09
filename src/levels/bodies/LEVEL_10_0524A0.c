/* LEVEL_10:0x0524A0 -- placement copy of LEVEL_01_053BE8.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct { char pad0[0x2C]; int a; char pad1[0x3C]; int b; } Rec;
extern int func_10AAC0(unsigned int);
extern int D_001FD7CC;
extern int D_001FD7D0;
extern Rec D_002A11C0;

void func_0524A0(void)
{
    D_001FD7CC = func_10AAC0((D_002A11C0.b << 16) | 0xa00010c1U);
    D_001FD7D0 = func_10AAC0((D_002A11C0.a << 16) | 0xa00010c1U);
}
