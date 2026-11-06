/* LEVEL_01.REL:0x0CE260, bounded 180-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +21. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern int D_0032C7D8[];
extern unsigned int func_00088020(int);
extern void func_000B6020(int);
extern int func_000BCB20(void);
extern void func_000B96A8(int *);
extern void func_0001A828(int, int);
extern int *func_000BA408(int *);
extern void func_00134070(int);

void func_000CE260(void)
{
    unsigned int flags = func_00088020(0x6B10);
    int *p;

    if (flags & 8) {
        func_000B6020(7);
        func_000B6020(0);
    } else if (flags & 0x1000) {
        func_000B6020(7);
        func_000B6020(0);
        if (func_000BCB20() != 0) {
            goto done;
        }
    } else {
        func_000B96A8(D_0032C7D8);
        goto done;
    }
    func_0001A828(4, 0);
done:
    p = func_000BA408(D_0032C7D8);
    if (p != 0 && *(int *)((char *)p + 0xDC) != 0) {
        func_00134070(0);
    }
}
