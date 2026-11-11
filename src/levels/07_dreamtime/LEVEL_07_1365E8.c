/* LEVEL_07:0x1365E8 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_0021B34C;
extern int func_135BF8(int a);
extern int func_136128(void);
extern int func_0DD280(void);

int func_1365E8(void)
{
    unsigned int s0;

    if (D_0021B34C == 0) {
        return 0;
    }
    if (func_135BF8(1) != 0) {
        return 0;
    }
    s0 = func_136128();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0DD280();
    *(int *)(D_0021B34C + 4) = 0xE;
    *(int *)(D_0021B34C + 0xC) = s0;
    return 1;
}
