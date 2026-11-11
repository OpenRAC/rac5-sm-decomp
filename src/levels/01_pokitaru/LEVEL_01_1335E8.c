/* LEVEL_01:0x1335E8 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_0020704C;
extern int func_132BF8(int a);
extern int func_133128(void);
extern int func_0DB220(void);

int func_1335E8(void)
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
    *(int *)(D_0020704C + 4) = 0xE;
    *(int *)(D_0020704C + 0xC) = s0;
    return 1;
}
