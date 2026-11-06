/* LEVEL_21.REL:0x0B1E40, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_0015925C;
extern int D_00159270;
extern void func_096530(int);
extern void func_016A10(int, int);
void func_0B1E40(void)
{
    D_0015925C = 0;
    D_00159270 = 0;
    func_096530(0);
    func_016A10(4, 0);
}