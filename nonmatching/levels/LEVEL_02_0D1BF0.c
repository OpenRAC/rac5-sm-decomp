/* LEVEL_02.REL:0x0D1BF0, bounded 48-byte body.
 * Pinned C links 48 bytes but first differs at byte +6:
 * the table stride, count and address use other registers.
 * The retail leaves the entry address in the result register;
 * this source models that possible return. Reopen with
 * caller/type evidence or a qualified compiler route. Typed
 * record forms and five other cc1 routes did not match.
 */
extern int D_00216224;
extern char D_002164D8[];

char *func_0D1BF0(int value)
{
    int offset = D_00216224 * 0x6c;
    char *entry = D_002164D8 + offset;
    *(int *)(entry + 8) = 2;
    *(int *)(entry + 0x10) = value;
    return entry;
}
