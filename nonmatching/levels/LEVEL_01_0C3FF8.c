/* LEVEL_01.REL:0x0C3FF8, bounded 160-byte candidate.
 * Isolated pinned C object: 160 bytes; first linked
 * difference at body byte +37. Not linked into the accepted
 * gate or counted.
 * Reopen: Only the register holding the func_088020 result differs ($v1 instead of $a1). Reopen with a form that assigns the result to $a1.
 */
extern char D_003292C0[];
extern void func_0BA408(char *);
extern unsigned int func_088020(int);
extern void func_0B6020(int);
extern long func_0BCB20(void);
extern void func_01A828(int, int);
extern void func_0B96A8(char *);

void func_000C3FF8(void)
{
    unsigned int v;
    long r;

    func_0BA408(D_003292C0);
    v = func_088020(0x6b10);
    if (v & 8) {
        func_0B6020(7);
        func_0B6020(0);
    } else if ((v & 0x1000) == 0) {
        func_0B96A8(D_003292C0);
        return;
    } else {
        func_0B6020(7);
        func_0B6020(0);
        r = func_0BCB20();
        if (r != 0) {
            return;
        }
    }
    func_01A828(4, 0);
}
