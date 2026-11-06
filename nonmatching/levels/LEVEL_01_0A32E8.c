/* LEVEL_01.REL:0x0A32E8, bounded 192-byte candidate.
 * Isolated pinned C object: 196 bytes; first linked
 * difference at body byte +60. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern int D_001F68A0;
extern int D_002B1C08[];
extern long func_000A3780(int, int, int, int, int, int, int, int);
extern int func_000A4000(int);

long func_000A32E8(int param_1)
{
    long n;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_000A3780(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_001F68A0 >= 0x300) {
        return -1;
    }
    buf[1] = 0;
    n = func_000A3780(param_1 + 0xC0, *(int *)(param_1 + 0x68), 1,
                      (int)buf | 1, 1, 0, 0, 0);
    D_002B1C08[(int)n] = func_000A4000(param_1 + 4);
    return n;
}
