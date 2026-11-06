/* LEVEL_20.REL:0x0EEB28, bounded 60-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +2.
 * The pinned compiler links 60 bytes but swaps the two global address registers at byte +2. Reversing C pointer setup also misses. Reopen with the original paired-array layout or a qualified compiler route.
 */
extern int D_0011ABC8[];
extern int D_0011ABD0[];

void func_0EEB28(void)
{
    int *first = D_0011ABC8;
    int *second = D_0011ABD0;
    unsigned int index = 0;
    do {
        *second = 0;
        ++index;
        *first = 0;
        ++first;
        ++second;
    } while (index < 2);
}
