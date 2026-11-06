/* LEVEL_01.REL:0x0BC400, bounded 184-byte candidate.
 * Isolated pinned C object: 164 bytes; first linked
 * difference at body byte +18. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern int func_01A868(int a);
extern int func_01A898(void);
extern int func_0A7330(void);
extern void func_0BC2B8(int a);
extern void func_01A828(int a, int b);

extern int D_328A3C;
extern int D_1FCA90;
extern char D_328A4C;

int func_000BC400(int a, int b)
{
    int r = 0;

    if (func_01A868(6) != 0)
        return r;
    if (func_01A898() != 0)
        return r;
    if (func_0A7330() != 0)
        return r;
    if (a == 2) {
        if (D_328A3C != 0)
            return r;
    }
    func_0BC2B8(a);
    if (D_1FCA90 != 0)
        return r;
    func_01A828(6, a);
    r = 1;
    D_328A4C = b;
    return r;
}
