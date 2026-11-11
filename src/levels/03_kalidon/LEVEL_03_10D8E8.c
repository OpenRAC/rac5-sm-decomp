/* LEVEL_03:0x10D8E8 -- placement copy of LEVEL_01_10FC20.c: copies a run of bytes from the input stream while updating a CRC. */
typedef unsigned char u8;

extern int (*D_0021F404)(u8 *lim);
extern u8 *D_0021F408;
extern unsigned D_00230040[];

#define REFILL(q) \
    if (D_0021F404 != 0) { \
        if (D_0021F408 != 0 && (q) >= D_0021F408 - 0x20) { \
            D_0021F408 = (u8 *)D_0021F404(D_0021F408); \
        } \
    }

void func_10D8E8(u8 **src, u8 **dst, unsigned *crc)
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
        *crc = (*crc >> 8) ^ D_00230040[**src ^ (*crc & 0xFF)];
        (*src)++;
        q = *src;
        REFILL(q);
        (*dst)++;
    }
}
