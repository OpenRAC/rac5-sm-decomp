/* LEVEL_05:0x10C060 -- placement copy of LEVEL_01_10FC20.c: copies a run of bytes from the input stream while updating a CRC. */
typedef unsigned char u8;

extern int (*D_001F5E04)(u8 *lim);
extern u8 *D_001F5E08;
extern unsigned D_00206040[];

#define REFILL(q) \
    if (D_001F5E04 != 0) { \
        if (D_001F5E08 != 0 && (q) >= D_001F5E08 - 0x20) { \
            D_001F5E08 = (u8 *)D_001F5E04(D_001F5E08); \
        } \
    }

void func_10C060(u8 **src, u8 **dst, unsigned *crc)
{
    u8 *p;
    u8 *q;
    unsigned n;
    unsigned i;

    p = *src;
    if (*p == 0) {
        q = p + 1;
        *src = q;
        REFILL(q);
        n = ((*src)[1] << 8) | (*src)[0];
        q = *src + 2;
        *src = q;
        REFILL(q);
    } else {
        n = *p + 2;
        q = p + 1;
        *src = q;
        REFILL(q);
    }
    for (i = 0; i < n; i++) {
        **dst = **src;
        *crc = (*crc >> 8) ^ D_00206040[**src ^ (*crc & 0xFF)];
        (*src)++;
        q = *src;
        REFILL(q);
        (*dst)++;
    }
}
