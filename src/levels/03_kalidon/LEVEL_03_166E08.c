/* LEVEL_03:0x166E08 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_06CDA8(unsigned int);
extern int D_0021FD78;
extern int D_0021FD30;
extern Rec D_002B2C40;

void func_166E08(void)
{
    D_0021FD78 = func_06CDA8((D_002B2C40.a << 16) | 0x580064c1U);
    D_0021FD30 = func_06CDA8((D_002B2C40.a << 16) | 0x580064c1U);
}
