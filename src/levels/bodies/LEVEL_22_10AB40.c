/* LEVEL_22:0x10AB40 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_0016602C;
extern int func_10A0C8(int a);
extern int func_10A5F8(void);
extern int func_0C9760(void);

int func_10AB40(void)
{
    unsigned int s0;

    if (D_0016602C == 0) {
        return 0;
    }
    if (func_10A0C8(1) != 0) {
        return 0;
    }
    s0 = func_10A5F8();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0C9760();
    *(int *)(D_0016602C + 4) = 0xC;
    *(int *)(D_0016602C + 0xC) = s0;
    return 1;
}
