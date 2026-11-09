/* LEVEL_20:0x0E31C0 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_0011721C;
extern int func_0E2860(int a);
extern int func_0E2BE8(void);
extern int func_0B4D90(void);

int func_0E31C0(void)
{
    unsigned int s0;

    if (D_0011721C == 0) {
        return 0;
    }
    if (func_0E2860(1) != 0) {
        return 0;
    }
    s0 = func_0E2BE8();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0B4D90();
    *(int *)(D_0011721C + 4) = 0xC;
    *(int *)(D_0011721C + 0xC) = s0;
    return 1;
}
