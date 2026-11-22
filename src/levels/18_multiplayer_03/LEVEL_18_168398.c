/* LEVEL_18:0x168398 -- placement copy of LEVEL_17_15BD28.c: resolves the six resource handles of the screen once: two from the tagged words held in the shared block (+8 and +0xB0, high half | 0x80007041) and four from fixed hash constants, storing each handle in its own global. */
extern unsigned int D_0024E5C0[];
extern int D_002E576C;
extern int D_002E5768;
extern int D_001BF578;
extern int D_001BF57C;
extern int D_001BF580;
extern int D_001BF584;

extern int func_0E7B50(unsigned int value);
extern int func_0D17E8(unsigned int value);
extern int func_105B48(unsigned int value);

void func_168398(void)
{
    D_002E576C = func_0E7B50((D_0024E5C0[0xB0 / 4] << 16) | 0x80007041U);
    D_002E5768 = func_0D17E8((D_0024E5C0[2] << 16) | 0x80007041U);
    D_001BF578 = func_105B48(0xF78F92A4U);
    D_001BF57C = func_105B48(0x223E6EBEU);
    D_001BF580 = func_105B48(0x8FB84EB2U);
    D_001BF584 = func_105B48(0xFF1208D1U);
}
