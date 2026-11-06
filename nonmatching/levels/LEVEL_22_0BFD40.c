/* LEVEL_22.REL:0x0BFD40, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_0016395C;
extern int D_00163970;
extern void func_0A4570(int);
extern void func_016E40(int, int);
void func_0BFD40(void)
{
    D_0016395C = 0;
    D_00163970 = 0;
    func_0A4570(0);
    func_016E40(4, 0);
}