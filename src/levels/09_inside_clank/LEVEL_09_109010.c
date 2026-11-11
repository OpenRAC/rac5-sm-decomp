/* LEVEL_09:0x109010 -- placement copy of LEVEL_01_10FC20.c: copies a run of bytes from the input stream while updating a CRC. */
typedef unsigned char u8;

extern int (*D_001F0884)(u8 *lim);
extern u8 *D_001F0888;
extern unsigned D_00200D40[];

#define REFILL(q) \
    if (D_001F0884 != 0) { \
        if (D_001F0888 != 0 && (q) >= D_001F0888 - 0x20) { \
            D_001F0888 = (u8 *)D_001F0884(D_001F0888); \
        } \
    }

void func_109010(u8 **src, u8 **dst, unsigned *crc)
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
        *crc = (*crc >> 8) ^ D_00200D40[**src ^ (*crc & 0xFF)];
        (*src)++;
        q = *src;
        REFILL(q);
        (*dst)++;
    }
}
