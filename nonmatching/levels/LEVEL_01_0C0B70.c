/* LEVEL_01.REL:0x0C0B70, bounded 180-byte candidate.
 * Isolated pinned C object: 184 bytes; first linked
 * difference at body byte +17. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern long func_0D6A58(void);
extern long func_135DF8(void);
extern void func_135DF0(long value);
extern void func_135DE8(long value);
extern void func_0D6D30(int value);
extern void func_01A828(int a, int b);
extern void func_0D6F88(int value);

extern unsigned char D_001FEAE4;

void func_000C0B70(void)
{
    long lVar1;

    lVar1 = func_0D6A58();
    if (lVar1 == 1) {
        if (D_001FEAE4 == 0) {
            lVar1 = func_135DF8();
            if (lVar1 != 0) {
                func_135DE8(lVar1);
            }
        } else {
            lVar1 = func_135DF8();
            if (lVar1 != 0) {
                func_135DF0(lVar1);
            }
        }
        func_0D6D30(0);
        func_01A828(4, 0);
    } else if (lVar1 == 0) {
        func_0D6F88(2);
    } else if (lVar1 == 2) {
        func_0D6D30(0);
    } else {
        func_0D6F88(2);
    }
}
