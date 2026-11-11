/* LEVEL_23:0x15CC50 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_067BC8(unsigned int);
extern int D_001DAE18;
extern int D_001DADD0;
extern Rec D_00269200;

void func_15CC50(void)
{
    D_001DAE18 = func_067BC8((D_00269200.a << 16) | 0x580064c1U);
    D_001DADD0 = func_067BC8((D_00269200.a << 16) | 0x580064c1U);
}
