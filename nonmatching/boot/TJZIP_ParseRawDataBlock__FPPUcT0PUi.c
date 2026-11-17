/* USA SCUS_976.15 boot: TJZIP_ParseRawDataBlock__FPPUcT0PUi,
 * 0x01E8D780..0x01E8D93C, observed 444-byte body; the following four zero
 * alignment bytes are separate and are not counted as compiled body bytes.
 * Adapted from this project's accepted src/levels/01_pokitaru/LEVEL_01_10FC20.c
 * on master b89458328; no external implementation source is imported.
 * Boot names and callback ABI were reviewed from the owner's retail body,
 * symbols, and both direct calls inside TJZIP_Decompress. Its named callback
 * argument takes and returns a byte pointer; all three indirect refill sites
 * pass g_pCallbackAt and replace it with the returned pointer.
 * Measured 17 November 2026 with -O2 -G0, GNU assembly and independent SN links:
 * rebuilt default GNU and gnu-ee-trial reproduce all 444 linked body bytes,
 * with real object/linked text and FUNC extents and no absolute target mask.
 * These standalone comparisons do not qualify the tools or establish a complete
 * boot gate, acceptance, promotion or new matching credit.
 * Original count decoding, refill/null tests and byte/CRC/pointer update order
 * are retained, including rereads after writes/callbacks and zero-length blocks.
 * No capacity guard, bulk copy, restrict promise or callback-purity assumption
 * is added. Storage, aliasing, callback coverage and pointer-comparison domains
 * remain semantic-review obligations before qualification or promotion.
 */
typedef unsigned char u8;
typedef char TJZIP_unsigned_width_check[sizeof(unsigned int) == 4 && sizeof(u8) == 1 ? 1 : -1];

extern u8 *(*g_pCallback)(u8 *lim);
extern u8 *g_pCallbackAt;
extern unsigned g_signatureTable[];

#define TJZIP_REFILL(q) \
    if (g_pCallback != 0) { \
        if (g_pCallbackAt != 0 && (q) >= g_pCallbackAt - 0x20) { \
            g_pCallbackAt = g_pCallback(g_pCallbackAt); \
        } \
    }

void TJZIP_ParseRawDataBlock__FPPUcT0PUi(u8 **src, u8 **dst, unsigned *crc)
{
    u8 *p;
    u8 *q;
    unsigned n;
    unsigned i;

    p = *src;
    if (*p == 0) {
        q = p + 1;
        *src = q;
        TJZIP_REFILL(q);
        n = ((*src)[1] << 8) | (*src)[0];
        q = *src + 2;
        *src = q;
        TJZIP_REFILL(q);
    } else {
        n = *p + 2;
        q = p + 1;
        *src = q;
        TJZIP_REFILL(q);
    }
    for (i = 0; i < n; i++) {
        **dst = **src;
        *crc = (*crc >> 8) ^ g_signatureTable[**src ^ (*crc & 0xFF)];
        (*src)++;
        q = *src;
        TJZIP_REFILL(q);
        (*dst)++;
    }
}
