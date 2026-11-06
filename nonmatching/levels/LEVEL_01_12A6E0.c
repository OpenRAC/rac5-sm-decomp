/* LEVEL_01.REL:0x12A6E0, bounded 184-byte candidate.
 * Isolated pinned C object: 200 bytes; first linked
 * difference at body byte +16. Not linked into the accepted
 * gate or counted.
 * Reopen: Three-path state machine; the labels and block order differ. Reopen by reworking the branch targets and block layout.
 */
extern int D_00206D9C;

extern int func_12B8A0(int a);
extern void func_12A798(void);
extern int func_1109A8(void);
extern void func_110D18(int a);

int func_0012A6E0(int param_1)
{
    int obj = param_1;

    if (param_1 == 0) {
        if (D_00206D9C != 0) goto found;
    } else {
        if (*(int *)(obj + 0x78) != 0) {
            return *(int *)(obj + 0x78) == 1;
        }
        D_00206D9C = func_12B8A0(param_1);
        if (D_00206D9C != 0) {
            if (*(int *)(D_00206D9C + 0x18) == 0) {
                func_12A798();
            }
            goto check2;
        }
    }
    D_00206D9C = func_1109A8();
    if (D_00206D9C == 0) {
        *(int *)(obj + 0x78) = 2;
        return 0;
    }
check2:
found:
    func_110D18(D_00206D9C);
    if (param_1 != 0) {
        *(int *)(obj + 0x78) = 1;
    }
    return 1;
}
