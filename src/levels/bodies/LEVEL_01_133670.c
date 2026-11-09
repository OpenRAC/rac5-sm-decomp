/* LEVEL_01:0x133670 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_0020704C;
extern int func_132BF8(int a);
extern int func_133128(void);
extern int func_0DB220(void);

int func_133670(void)
{
    unsigned int s0;

    if (D_0020704C == 0) {
        return 0;
    }
    if (func_132BF8(1) != 0) {
        return 0;
    }
    s0 = func_133128();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0DB220();
    *(int *)(D_0020704C + 4) = 0xC;
    *(int *)(D_0020704C + 0xC) = s0;
    return 1;
}
