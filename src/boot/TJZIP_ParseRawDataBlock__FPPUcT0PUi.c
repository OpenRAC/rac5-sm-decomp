/* 0x01E8D780 -- Copy raw stream bytes while updating a CRC. Ported from OpenRAC/rac-sac-decomp src/levels/shared/TJZIP_ParseRawDataBlock__FPPUcT0PUi.c (TJZIP_ParseRawDataBlock__FPPUcT0PUi). */

typedef unsigned char u8;

extern int (*g_pCallback)(u8 *lim);
extern u8 *g_pCallbackAt;
extern unsigned g_signatureTable[];

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
        if (g_pCallback != 0) {
            if (g_pCallbackAt != 0 && q >= g_pCallbackAt - 0x20) {
                g_pCallbackAt = (u8 *)g_pCallback(g_pCallbackAt);
            }
        }
        n = ((*src)[1] << 8) | (*src)[0];
        q = *src + 2;
        *src = q;
        if (g_pCallback != 0) {
            if (g_pCallbackAt != 0 && q >= g_pCallbackAt - 0x20) {
                g_pCallbackAt = (u8 *)g_pCallback(g_pCallbackAt);
            }
        }
    } else {
        n = *p + 2;
        q = p + 1;
        *src = q;
        if (g_pCallback != 0) {
            if (g_pCallbackAt != 0 && q >= g_pCallbackAt - 0x20) {
                g_pCallbackAt = (u8 *)g_pCallback(g_pCallbackAt);
            }
        }
    }
    for (i = 0; i < n; i++) {
        **dst = **src;
        *crc = (*crc >> 8) ^ g_signatureTable[**src ^ (*crc & 0xFF)];
        (*src)++;
        q = *src;
        if (g_pCallback != 0) {
            if (g_pCallbackAt != 0 && q >= g_pCallbackAt - 0x20) {
                g_pCallbackAt = (u8 *)g_pCallback(g_pCallbackAt);
            }
        }
        (*dst)++;
    }
}
