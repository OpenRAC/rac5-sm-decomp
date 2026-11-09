/* LEVEL_09:0x12C608 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_001F0B4C;
extern int func_12BB90(int a);
extern int func_12C0C0(void);
extern int func_0D84D0(void);

int func_12C608(void)
{
    unsigned int s0;

    if (D_001F0B4C == 0) {
        return 0;
    }
    if (func_12BB90(1) != 0) {
        return 0;
    }
    s0 = func_12C0C0();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0D84D0();
    *(int *)(D_001F0B4C + 4) = 0xC;
    *(int *)(D_001F0B4C + 0xC) = s0;
    return 1;
}
