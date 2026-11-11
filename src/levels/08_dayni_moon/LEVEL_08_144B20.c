/* LEVEL_08:0x144B20 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_0024FF0C;
extern int func_144130(int a);
extern int func_144660(void);
extern int func_0E61F0(void);

int func_144B20(void)
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
    *(int *)(D_0024FF0C + 4) = 0xE;
    *(int *)(D_0024FF0C + 0xC) = s0;
    return 1;
}
