/* LEVEL_02.REL:0x0AC9D8: reviewed 48-byte candidate.
 * pinned C with gnu-ee-trial links 56 bytes; first differs at +4.
 * Retry: Recover low-32-bit extraction and final store scheduling while retaining the
 * accepted long-long caller ABI, or requalify all 19 accepted callers for a 32-bit
 * contract.
 * No matching credit.
 */
void func_0AC9D8(void *result, long long value,
                 unsigned char first, unsigned char second)
{
    char *bytes = (char *)result;
    unsigned int low = (unsigned int)value;
    unsigned int high = low >> 24;

    bytes[5] = first;
    *(unsigned int *)(bytes + 0x10) = second;
    *(unsigned int *)(bytes + 0x0C) = low & 0xFFFFFF;
    *(unsigned int *)bytes = high;
    *(unsigned int *)(bytes + 8) = high;
    bytes[4] = 0;
}
