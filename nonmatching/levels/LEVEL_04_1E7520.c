/* USA LEVEL_04.REL:0x1E7520, 116-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 116 linked bytes; first differing word +0x4.
 * Unaccepted; no matching credit. Reconcile the logging callee and all accepted callers: small integer tags are currently declared as pointers in its accepted definition.
 */
extern char D_244BD8[];
extern unsigned int D_22286C;
extern void func_0B9328(char *message, int first, unsigned int second);
void func_1E7520(char *object, int mode)
{
    func_0B9328(D_244BD8, -85, 0xFFFFFFFFU);
    if (!(unsigned char)object[0x29])
        --D_22286C;
    object[0x29] = mode;
    if (!mode)
        ++D_22286C;
}
