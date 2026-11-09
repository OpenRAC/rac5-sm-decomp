/* LEVEL_24:0x129170 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_001D7CCC;
extern int func_1286F8(int a);
extern int func_128C28(void);
extern int func_0D4B88(void);

int func_129170(void)
{
    unsigned int s0;

    if (D_001D7CCC == 0) {
        return 0;
    }
    if (func_1286F8(1) != 0) {
        return 0;
    }
    s0 = func_128C28();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0D4B88();
    *(int *)(D_001D7CCC + 4) = 0xC;
    *(int *)(D_001D7CCC + 0xC) = s0;
    return 1;
}
