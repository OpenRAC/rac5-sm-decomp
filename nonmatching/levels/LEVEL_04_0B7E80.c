/* LEVEL_04.REL:0x0B7E80, bounded 52-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +30.
 * The pinned compiler links 52 bytes but selects a different data-address register after the call. Masked 32-bit C keeps the retail word store; five other qualified routes also miss. Reopen with evidence for the value lifetime or the global type.
 */
extern int D_0021574C;
extern int D_00215744;
extern void func_0B7E70(void);

void func_0B7E80(int first, unsigned int second)
{
    int masked = second & 0xff;
    D_0021574C = first;
    func_0B7E70();
    D_00215744 = masked;
}