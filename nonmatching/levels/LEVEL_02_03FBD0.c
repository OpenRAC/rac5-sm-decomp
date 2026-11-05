/* LEVEL_02.REL:0x03FBD0, bounded 40-byte body.
 * Pinned C links 40 bytes; first difference at body byte +8:
 * a parameter move and local-address setup are scheduled in
 * the opposite order. The local call target still resolves.
 * Reopen: recover a natural source type/expression or qualify
 * a compiler route preserving the retail instruction order.
 */
extern char D_0024C650[];
extern void func_03F058(void *, void *, void *);

void func_03FBD0(void *a, void *b)
{
    func_03F058(D_0024C650, a, b);
}
