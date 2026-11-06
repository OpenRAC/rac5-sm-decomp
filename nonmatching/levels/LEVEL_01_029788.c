/* LEVEL_01.REL:0x029788, bounded 180-byte candidate.
 * Isolated pinned C object: 188 bytes; first linked
 * difference at body byte +0. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern int D_001F4334;
extern int D_00230F98[];
extern void func_029B70(char *, int, void *);
extern long func_029648(int);
extern long ps2fioOpen(char *, void *, int);

long func_00029788(void *param_1, void *param_2, long param_3)
{
    char buf[256];
    long r;
    long r2;

    func_029B70(buf, 0x100, param_1);
    func_029648(1);
    do {
        r = ps2fioOpen(buf, param_2, (unsigned short)param_3);
        if (r >= 0) {
            if (D_001F4334 < 0x80) {
                D_00230F98[D_001F4334] = (int)r;
                D_001F4334 = D_001F4334 + 1;
            }
            return r;
        }
        r2 = func_029648(1);
    } while (r2 != 0);
    return r;
}
