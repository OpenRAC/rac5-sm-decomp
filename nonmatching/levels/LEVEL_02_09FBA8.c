/* LEVEL_02.REL:0x09FBA8: reviewed 100-byte candidate.
 * pinned C with gnu-ee-trial links 100 bytes; first differs at +14.
 * Retry: Recover the shared block-base and per-instance stride register schedule
 * while preserving the signed count bound and defined unsigned record offset.
 * No matching credit.
 */
extern unsigned char D_002B23F8[];

void func_09FBA8(unsigned int first, unsigned int second,
                 unsigned int third, unsigned int instance)
{
    unsigned int stride = instance * 0x170CU;
    unsigned char *base = D_002B23F8;
    int *counter = (int *)(base + 0xC40 + stride);
    int count = *counter;
    if (count < 0x80) {
        unsigned int index = (unsigned int)count;
        unsigned char *entry = base + 0x240 + stride + index * 0x14U;
        *(unsigned int *)(entry + 0x10) = second;
        *(unsigned int *)entry = third;
        *(unsigned short *)(entry + 8) = count;
        *(unsigned int *)(entry + 0x0C) = first;
        *(unsigned short *)(entry + 4) = 0;
        entry[6] = 0;
        *counter = *counter + 1;
    }
}
