/* LEVEL_08.REL:0x0D6208, bounded 48-byte body.
 * Pinned C links 48 bytes but first differs at byte +6:
 * the table stride, count and address use other registers.
 * The retail leaves the entry address in the result register;
 * this source models that possible return. Reopen with
 * caller/type evidence or a qualified compiler route. Typed
 * record forms and five other cc1 routes did not match.
 */
extern int D_0024A124;
extern char D_0024A3D8[];

char *func_0D6208(int value)
{
    int offset = D_0024A124 * 0x6c;
    char *entry = D_0024A3D8 + offset;
    *(int *)(entry + 8) = 2;
    *(int *)(entry + 0x10) = value;
    return entry;
}
