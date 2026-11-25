/* LEVEL_16:0x142E68 -- resolves the two tagged handles built from the shared block's id word and keeps them. */
extern unsigned int D_0024E240[];
extern int D_001BD8EC;
extern int D_001BD8F0;
extern int func_0ED9E8(unsigned int id);
extern void func_144770(unsigned int id);

void func_142E68(void)
{
    D_001BD8EC = func_0ED9E8((D_0024E240[0xB0 / 4] << 16) | 0x580034C1U);
    D_001BD8F0 = ((int (*)(unsigned int))func_144770)((D_0024E240[0xB0 / 4] << 16) | 0x580030C1U);
}
