/* LEVEL_02.REL:0x0CA908, bounded 160-byte candidate.
 * Isolated pinned C object: 160 bytes; first linked
 * difference at body byte +37. Not linked into the accepted
 * gate or counted.
 * Reopen: The size is exact; the result lands in v1 instead of a1 and the beqz polarity is inverted. Reopen with a form that produces a1 for the result and the retail branch layout.
 */
extern int D_003407C0;
extern int func_0C0D18(void *);
extern int func_08E950(int);
extern void func_0BC930(int);
extern int func_0C3430(void);
extern void func_01B188(int, int);
extern void func_0BFFB8(void *);

void func_0CA908(void)
{
    int r;

    func_0C0D18(&D_003407C0);
    r = func_08E950(0x6B10);
    if (r & 8) {
        func_0BC930(7);
        func_0BC930(0);
        goto call;
    }
    if ((r & 0x1000) == 0) {
        func_0BFFB8(&D_003407C0);
        return;
    }
    func_0BC930(7);
    func_0BC930(0);
    if (func_0C3430() != 0)
        return;
call:
    func_01B188(4, 0);
}
