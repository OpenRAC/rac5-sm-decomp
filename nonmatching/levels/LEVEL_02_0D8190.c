/* LEVEL_02.REL:0x0D8190, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +6.
 * The pinned compiler links 56 bytes but first differs at byte +6 because two global address registers and their stores are scheduled differently. Reversing the independent C stores and five other qualified compiler routes miss. Reopen with the original initialization idiom or a narrowly qualified route.
 */
extern int D_0021959C;
extern int D_002195B0;
extern void func_0BC930(int);
extern void func_01B188(int, int);
void func_0D8190(void)
{
    D_0021959C = 0;
    D_002195B0 = 0;
    func_0BC930(0);
    func_01B188(4, 0);
}