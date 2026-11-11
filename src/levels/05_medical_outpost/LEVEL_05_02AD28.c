/* LEVEL_05:0x02AD28 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_0021D620;
extern int D_0021D624;
extern int D_0021D628;
extern int D_0021D62C;
extern int D_0021D630;
extern int D_0021D634;
extern char D_001E38B4;
extern int func_0A0FC0(void);

void func_02AD28(void)
{
    D_0021D620 = 0;
    D_0021D624 = 0;
    D_0021D62C = 0;
    D_0021D630 = 0;
    D_0021D628 = func_0A0FC0();
    D_0021D634 = 0;
    D_001E38B4 = 0;
}
