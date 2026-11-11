/* LEVEL_08:0x19A3B8 -- registers a key built from the module word and runs the follow-up. */
extern int D_00250FEC;
extern unsigned int D_002E7164;
extern int func_110E80(unsigned int);
extern void func_07B0D8(void);

void func_19A3B8(void)
{
    D_00250FEC = func_110E80((D_002E7164 << 16) | 0x700030d9u);
    func_07B0D8();
}
