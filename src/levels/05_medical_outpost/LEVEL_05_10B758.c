/* LEVEL_05.REL:0x10B758 -- computes a table-driven CRC32. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 D_00206040[];

u32 func_10B758(const u8 *data, int size)
{
    const u8 *end = data + size;
    const u8 *cursor;
    u32 crc;

    if (data == 0)
        return 0;

    cursor = data;
    crc = 0xFFFFFFFFu;
    for (; cursor < end; cursor++)
        crc = (crc >> 8) ^ D_00206040[*cursor ^ (crc & 0xFF)];
    return ~crc;
}
