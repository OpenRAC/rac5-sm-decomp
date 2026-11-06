/* LEVEL_16.REL:0x11C780, bounded 60-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +2.
 * The pinned compiler links 60 bytes but swaps the two global address registers at byte +2. Reversing C pointer setup also misses. Reopen with the original paired-array layout or a qualified compiler route.
 */
extern int D_001B8528[];
extern int D_001B8530[];
void func_11C780(void)
{
    int *second = D_001B8530;
    int *first = D_001B8528;
    unsigned int index = 0;
    do {
        *second = 0;
        ++index;
        *first = 0;
        ++first;
        ++second;
    } while (index < 2);
}