/* LEVEL_19.REL:0x0BA238, bounded 48-byte body.
 * Pinned C links 48 bytes but first differs at byte +6:
 * the table stride, count and address use other registers.
 * The retail leaves the entry address in the result register;
 * this source models that possible return. Reopen with
 * caller/type evidence or a qualified compiler route. Typed
 * record forms and five other cc1 routes did not match.
 */
extern int D_001B028C;
extern char D_001B0540[];

char *func_0BA238(int value)
{
    int offset = D_001B028C * 0x6c;
    char *entry = D_001B0540 + offset;
    *(int *)(entry + 8) = 2;
    *(int *)(entry + 0x10) = value;
    return entry;
}
