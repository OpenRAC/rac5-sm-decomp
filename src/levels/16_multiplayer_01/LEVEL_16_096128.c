/* LEVEL_16:0x096128 -- stores a nibble into a packed byte map at the given column and row when the map is available, the coordinates are in range and the mode is not 3. */
extern int func_095930(void);
void func_096128(unsigned short x, unsigned short y, int val, int mode)
{
    unsigned char *p;
    int shift;
    unsigned char mask;
    if (func_095930() != 0 && x < 0x201 && y < 0x201 && mode != 3) {
        shift = (x & 1) ? 0 : 4;
        mask = 0xF << shift;
        p = (unsigned char *)((y << 8) + (x >> 1));
        val <<= shift;
        *p = (*p & ~mask) | val;
    }
}
