/* LEVEL_17.REL:0x0B9EA0, bounded 48-byte body.
 * Pinned C links 48 bytes but first differs at byte +6:
 * the table stride, count and address use other registers.
 * The retail leaves the entry address in the result register;
 * this source models that possible return. Reopen with
 * caller/type evidence or a qualified compiler route. Typed
 * record forms and five other cc1 routes did not match.
 */
extern int D_001A270C;
extern char D_001A29C0[];

char *func_0B9EA0(int value)
{
    int offset = D_001A270C * 0x6c;
    char *entry = D_001A29C0 + offset;
    *(int *)(entry + 8) = 2;
    *(int *)(entry + 0x10) = value;
    return entry;
}
