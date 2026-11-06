/* LEVEL_17.REL:0x11C0F8, bounded 60-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +2.
 * The pinned compiler links 60 bytes but swaps the two global address registers at byte +2. Reversing C pointer setup also misses. Reopen with the original paired-array layout or a qualified compiler route.
 */
extern int D_001ABB20[];
extern int D_001ABB28[];

void func_11C0F8(void)
{
    int *first = D_001ABB20;
    int *second = D_001ABB28;
    unsigned int index = 0;
    do {
        *second = 0;
        ++index;
        *first = 0;
        ++first;
        ++second;
    } while (index < 2);
}
