/* FRONTEND:0x021000 -- one-time init gate; sets a state value once a status bit is seen. */
extern char *D_00032814;
extern int func_0205B8(int a);
extern int func_020AE8(void);
extern int func_003E10(void);

int func_021000(void)
{
    unsigned int s0;

    if (D_00032814 == 0) {
        return 0;
    }
    if (func_0205B8(1) != 0) {
        return 0;
    }
    s0 = func_020AE8();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_003E10();
    *(int *)(D_00032814 + 4) = 0xC;
    *(int *)(D_00032814 + 0xC) = s0;
    return 1;
}
