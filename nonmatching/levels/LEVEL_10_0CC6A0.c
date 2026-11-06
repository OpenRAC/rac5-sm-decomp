/* LEVEL_10.REL:0x0CC6A0, bounded 48-byte body.
 * Pinned C links 48 bytes but first differs at byte +6:
 * the table stride, count and address use other registers.
 * The retail leaves the entry address in the result register;
 * this source models that possible return. Reopen with
 * caller/type evidence or a qualified compiler route. Typed
 * record forms and five other cc1 routes did not match.
 */
extern int D_0020A264;
extern char D_0020A518[];

char *func_0CC6A0(int value)
{
    int offset = D_0020A264 * 0x6c;
    char *entry = D_0020A518 + offset;
    *(int *)(entry + 8) = 2;
    *(int *)(entry + 0x10) = value;
    return entry;
}
