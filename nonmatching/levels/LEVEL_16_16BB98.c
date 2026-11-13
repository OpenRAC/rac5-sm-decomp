/* USA LEVEL_16.REL:0x16BB98, 148-byte candidate.
 * Measured pinned/gnu-ee-trial: 148 linked bytes; first differing word +0x28.
 * The internal join still differs under GNU and SN output; tail alignment alone
 * is not a remedy. Reconcile the 20 accepted caller declarations as well.
 */
extern unsigned char D_001E4090[];
extern int func_16AE80(void *, void *);
extern void func_16B4A8(void *, void *);
extern void *func_112CE8(unsigned int);
int func_16BB98(void *context)
{
    void *target = D_001E4090;
    unsigned int i;
    if (func_16AE80(context, target)) {
        func_16B4A8(context, target);
        return 1;
    }
    for (i = 1; i < 2; ++i) {
        target = func_112CE8(i);
        if (target && func_16AE80(context, target)) {
            func_16B4A8(context, target);
            return 1;
        }
    }
    return 0;
}
