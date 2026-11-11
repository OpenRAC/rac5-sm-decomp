/* LEVEL_06.REL:0x1058E8 -- computes a table-driven CRC32. */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 D_00205FC0[];

u32 SIG_CalcSignature__FPCci(const u8 *data, int size)
{
    const u8 *end = data + size;
    const u8 *cursor;
    u32 crc;

    if (data == 0)
        return 0;

    cursor = data;
    crc = 0xFFFFFFFFu;
    for (; cursor < end; cursor++)
        crc = (crc >> 8) ^ D_00205FC0[*cursor ^ (crc & 0xFF)];
    return ~crc;
}
