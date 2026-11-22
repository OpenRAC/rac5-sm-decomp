/* LEVEL_19:0x1642A8 -- placement copy of LEVEL_17_15BD28.c: resolves the six resource handles of the screen once: two from the tagged words held in the shared block (+8 and +0xB0, high half | 0x80007041) and four from fixed hash constants, storing each handle in its own global. */
extern unsigned int D_0024E3C0[];
extern int D_002E5A54;
extern int D_002E5A50;
extern int D_001BF218;
extern int D_001BF21C;
extern int D_001BF220;
extern int D_001BF224;

extern int func_0E8B20(unsigned int value);
extern int func_0D20E8(unsigned int value);
extern int func_107538(unsigned int value);

void func_1642A8(void)
{
    D_002E5A54 = func_0E8B20((D_0024E3C0[0xB0 / 4] << 16) | 0x80007041U);
    D_002E5A50 = func_0D20E8((D_0024E3C0[2] << 16) | 0x80007041U);
    D_001BF218 = func_107538(0xF78F92A4U);
    D_001BF21C = func_107538(0x223E6EBEU);
    D_001BF220 = func_107538(0x8FB84EB2U);
    D_001BF224 = func_107538(0xFF1208D1U);
}
