/* LEVEL_01:0x10FC20 -- copies a run of bytes from the input stream while updating a CRC. */
typedef unsigned char u8;

extern int (*D_00206D84)(u8 *lim);
extern u8 *D_00206D88;
extern unsigned D_00217140[];

#define REFILL(q) \
    if (D_00206D84 != 0) { \
        if (D_00206D88 != 0 && (q) >= D_00206D88 - 0x20) { \
            D_00206D88 = (u8 *)D_00206D84(D_00206D88); \
        } \
    }

void func_10FC20(u8 **src, u8 **dst, unsigned *crc)
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
        *crc = (*crc >> 8) ^ D_00217140[**src ^ (*crc & 0xFF)];
        (*src)++;
        q = *src;
        REFILL(q);
        (*dst)++;
    }
}
