/* SIG_CalcSignature__FPCci -- table-driven CRC32 of a byte range; 0 for a null pointer. */
extern unsigned int g_signatureTable[];

unsigned int SIG_CalcSignature__FPCci(const unsigned char *data, int n) {
    const unsigned char *p;
    const unsigned char *end;
    unsigned int crc;

    if (data == 0) {
        return 0;
    }
    end = data + n;
    p = data;
    crc = 0xFFFFFFFFU;
    while (p < end) {
        crc = (crc >> 8) ^ g_signatureTable[*p ^ (crc & 0xFF)];
        p++;
    }
    return ~crc;
}
