/* LEVEL_01.REL:0x0C3AA8, bounded 180-byte candidate.
 * Isolated pinned C object: 176 bytes; first linked
 * difference at body byte +6. Not linked into the accepted
 * gate or counted.
 * Reopen: The flag test and the conditional calls differ. Reopen by adjusting the branch polarity and the call order.
 */
extern int func_088020(int a);
extern void func_0B6020(int a);
extern int func_0BCB20(void);
extern void func_01A828(int a, int b);
extern void func_0B96A8(int a);
extern int func_0BA408(int a);
extern void func_134070(int a);

void func_000C3AA8(void)
{
    unsigned int flags;
    int p;

    flags = func_088020(0x6B10);
    if ((flags & 8) == 0) {
        if ((flags & 0x1000) == 0) {
            func_0B96A8(0x3291B0);
            goto lab;
        }
        func_0B6020(7);
        func_0B6020(0);
        p = func_0BCB20();
        if (p != 0) goto lab;
    } else {
        func_0B6020(7);
        func_0B6020(0);
    }
    func_01A828(4, 0);
lab:
    p = func_0BA408(0x3291B0);
    if (p != 0 && *(int *)(p + 0xD4) != 0) {
        func_134070(0);
    }
}
