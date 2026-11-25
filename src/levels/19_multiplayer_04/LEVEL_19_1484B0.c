/* LEVEL_19:0x1484B0 -- hashes two fields of a global record with a tag and a fixed key and stores the three results in globals. */
typedef struct { char pad0[8]; int a; char pad1[0xA4]; int b; } Rec;
extern int func_0E8B20(unsigned int);
extern int func_0D20E8(unsigned int);
extern int func_107538(unsigned int);
extern int D_002E526C;
extern int D_002E5268;
extern int D_001BEB58;
extern Rec D_0024E3C0;

void func_1484B0(void)
{
    D_002E526C = func_0E8B20((D_0024E3C0.b << 16) | 0x80007041U);
    D_002E5268 = func_0D20E8((D_0024E3C0.a << 16) | 0x80007041U);
    D_001BEB58 = func_107538(0x8FB84EB2);
}
