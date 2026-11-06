/* LEVEL_01.REL:0x11A4C8, bounded 188-byte candidate.
 * Isolated pinned C object: 176 bytes; first linked
 * difference at body byte +12. Not linked into the accepted
 * gate or counted.
 * Reopen: The retail duplicates p += 3 on both paths and compares signed (slt); the source gives sltu and 176 instead of 188 bytes. Reopen with a signed compare and a duplicated increment.
 */
extern int D_00206DB0[];
extern int func_029688(int, int *);

void func_0011A4C8(void)
{
    int *p;
    int *end;
    int local;
    int local2;
    int r;

    p = D_00206DB0;
    end = p + 0x30;
    do {
        if (p[1] == 1) {
            r = func_029688(p[0] - 1, &local);
            if (r != 1) {
                p[1] = 3;
                p[0] = local + 1;
            }
        } else if (p[1] == 2) {
            r = func_029688(p[0] - 1, &local2);
            if (r != 1) {
                p[1] = 3;
            }
        }
        p += 3;
    } while (p < end);
}
