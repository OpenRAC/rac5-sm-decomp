/* LEVEL_10:0x131468 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_0020FCAC;
extern int func_130A58(int a);
extern int func_130F88(void);
extern int func_0DC660(void);

int func_131468(void)
{
    unsigned int s0;

    if (D_0020FCAC == 0) {
        return 0;
    }
    if (func_130A58(1) != 0) {
        return 0;
    }
    s0 = func_130F88();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0DC660();
    *(int *)(D_0020FCAC + 4) = 0xE;
    *(int *)(D_0020FCAC + 0xC) = s0;
    return 1;
}
