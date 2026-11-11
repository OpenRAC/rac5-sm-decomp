/* LEVEL_08:0x144BA8 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_0024FF0C;
extern int func_144130(int a);
extern int func_144660(void);
extern int func_0E61F0(void);

int func_144BA8(void)
{
    unsigned int s0;

    if (D_0024FF0C == 0) {
        return 0;
    }
    if (func_144130(1) != 0) {
        return 0;
    }
    s0 = func_144660();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0E61F0();
    *(int *)(D_0024FF0C + 4) = 0xC;
    *(int *)(D_0024FF0C + 0xC) = s0;
    return 1;
}
