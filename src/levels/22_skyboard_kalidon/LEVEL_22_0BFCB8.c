/* LEVEL_22:0x0BFCB8 -- placement copy of LEVEL_01_0D1778.c: picks one of three record fields by a mode word. */
struct Block_0032CB18 { char pad[0x14]; int mode; };
extern struct Block_0032CB18 D_002826D8;
extern int func_0C7760(char *);
int func_0BFCB8(void)
{
    int record = func_0C7760((char *)&D_002826D8);
    int mode = D_002826D8.mode;
    if (mode == 1) goto l1;
    if (mode == 0) goto l0;
    if (mode == 2) goto l2;
    return 0;
l1: return *(int *)(record + 0x2c);
l0: return *(int *)(record + 0x28);
l2: return *(int *)(record + 0x30);
}
