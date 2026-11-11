/* LEVEL_18:0x143AD8 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_05D918(unsigned int);
extern int D_001BEDD8;
extern int D_001BED90;
extern Rec D_0024E5C0;

void func_143AD8(void)
{
    D_001BEDD8 = func_05D918((D_0024E5C0.a << 16) | 0x580064c1U);
    D_001BED90 = func_05D918((D_0024E5C0.a << 16) | 0x580064c1U);
}
