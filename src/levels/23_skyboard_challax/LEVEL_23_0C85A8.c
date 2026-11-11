/* LEVEL_23:0x0C85A8 -- placement copy of LEVEL_01_0D1778.c: picks one of three record fields by a mode word. */
struct Block_0032CB18 { char pad[0x14]; int mode; };
extern struct Block_0032CB18 D_002FDF58;
extern int func_0D0050(char *);
int func_0C85A8(void)
{
    int record = func_0D0050((char *)&D_002FDF58);
    int mode = D_002FDF58.mode;
    if (mode == 1) goto l1;
    if (mode == 0) goto l0;
    if (mode == 2) goto l2;
    return 0;
l1: return *(int *)(record + 0x2c);
l0: return *(int *)(record + 0x28);
l2: return *(int *)(record + 0x30);
}
