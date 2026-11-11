/* LEVEL_01:0x0D1778 -- picks one of three record fields by a mode word. */
struct Block_0032CB18 { char pad[0x14]; int mode; };
extern struct Block_0032CB18 D_0032CB18;
extern int func_0D9220(char *);
int func_0D1778(void)
{
    int record = func_0D9220((char *)&D_0032CB18);
    int mode = D_0032CB18.mode;
    if (mode == 1) goto l1;
    if (mode == 0) goto l0;
    if (mode == 2) goto l2;
    return 0;
l1: return *(int *)(record + 0x2c);
l0: return *(int *)(record + 0x28);
l2: return *(int *)(record + 0x30);
}
