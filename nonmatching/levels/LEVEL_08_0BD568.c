/* LEVEL_08.REL:0x0BD568, bounded 52-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +30.
 * The pinned compiler links 52 bytes but selects a different data-address register after the call. Masked 32-bit C keeps the retail word store; five other qualified routes also miss. Reopen with evidence for the value lifetime or the global type.
 */
extern int D_0024514C;
extern int D_00245144;
extern void func_0BD558(void);

void func_0BD568(int first, unsigned int second)
{
    int masked = second & 0xff;
    D_0024514C = first;
    func_0BD558();
    D_00245144 = masked;
}