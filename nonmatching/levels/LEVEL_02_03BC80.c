/* LEVEL_02.REL:0x03BC80: reviewed 52-byte candidate.
 * pinned C with gnu-ee-trial links 56 bytes; first differs at +4.
 * Retry: Recover the original rotated insertion loop and 52-byte envelope, including
 * its internal zero NOP and nonzero return delay store, with a C89 source compatible
 * with the accepted unsigned-int caller ABI.
 * No matching credit.
 */
void func_03BC80(unsigned short *cursor, unsigned int value)
{
    unsigned short key = (unsigned short)value;
    while (key < cursor[-1]) {
        unsigned short *previous = cursor - 1;
        *cursor = *previous;
        cursor = previous;
    }
    *cursor = key;
}
