/* LEVEL_01.REL:0x10F380: Ghidra body 200 bytes.
 * Pure C with `pinned` links 108 bytes and first differs at +0.
 * Recheck separator traversal and the scan-ahead control flow. No matching credit.
 */
extern unsigned int D_00217140[];

unsigned int func_10F380(const unsigned char *path)
{
    unsigned int crc;

    if (path == 0) {
        return 0;
    }

    crc = 0xffffffffU;
    while (*path != 0) {
        unsigned int ch = *path;
        if (ch == '/') {
            ch = '\\';
        }
        crc = (crc >> 8) ^ D_00217140[(crc ^ ch) & 0xffU];
        path++;
    }
    return ~crc;
}
