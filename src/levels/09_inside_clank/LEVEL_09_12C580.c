/* LEVEL_09:0x12C580 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_001F0B4C;
extern int func_12BB90(int a);
extern int func_12C0C0(void);
extern int func_0D84D0(void);

int func_12C580(void)
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
    *(int *)(D_001F0B4C + 4) = 0xE;
    *(int *)(D_001F0B4C + 0xC) = s0;
    return 1;
}
