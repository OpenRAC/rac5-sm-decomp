/* LEVEL_17:0x166910 -- placement copy of LEVEL_02_1C2388.c: hashes two fields of a global record with a tag and stores the results in two globals. */
typedef struct {
    char pad0[0xA8];
    int a;
    char pad1[0xB4 - 0xAC];
    int b;
} Rec;

extern int func_0EC910(unsigned int value);
extern int D_001B17E8;
extern int D_001B17E4;
extern Rec D_0023F540;

void func_166910(void)
{
    D_001B17E8 = func_0EC910((D_0023F540.a << 16) | 0xA00010C1U);
    D_001B17E4 = func_0EC910((D_0023F540.b << 16) | 0xA00010C1U);
}
