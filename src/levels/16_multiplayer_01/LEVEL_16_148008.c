/* LEVEL_16:0x148008 -- placement copy of LEVEL_01_16B810.c: hashes the global record's field twice with a tag and stores the two results in two globals. */
typedef struct { char pad0[0x30]; int a; } Rec;
extern int func_05EE08(unsigned int);
extern int D_001BD978;
extern int D_001BD930;
extern Rec D_0024E240;

void func_148008(void)
{
    D_001BD978 = func_05EE08((D_0024E240.a << 16) | 0x580064c1U);
    D_001BD930 = func_05EE08((D_0024E240.a << 16) | 0x580064c1U);
}
