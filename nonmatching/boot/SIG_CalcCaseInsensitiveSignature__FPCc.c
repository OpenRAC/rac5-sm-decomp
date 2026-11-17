/* USA SCUS_976.15 boot: SIG_CalcCaseInsensitiveSignature__FPCc,
 * 0x01E8D2E8..0x01E8D3C0, observed 216-byte body. The following 16-byte
 * tail contains nonzero words and is excluded, not claimed as padding.
 * Reconstructed from the owner's retail body and four direct callers.
 * The CRC update and table declaration follow the accepted boot sibling
 * SIG_CalcSignature__FPCci; no external implementation source is imported.
 * Measured 16 November 2026 with -O2 -G0, GNU assembly and independent SN links:
 * rebuilt default GNU emits 216 bytes, 121 equal positions, first difference
 * +0x6; gnu-ee-trial emits 224 bytes, 81 equal positions in the compared
 * 216-byte prefix, first difference +0x6. Not exact; no complete-program
 * gate, qualification, acceptance, promotion or matching credit.
 * Null and empty strings return zero. ASCII lowercase is converted to uppercase
 * and slash to backslash; other unsigned byte values are preserved for CRC32.
 * Separator lookahead scans a local cursor, but the main cursor still advances
 * by one byte. Repeated separators are not collapsed. The lookahead remains,
 * but generated load scheduling still differs from the retail body.
 * The inline normalizer is authored structure, not a separately named retail
 * body; the compiler emits only the target function. No volatile, register,
 * instruction or dead-operation device is used to force a result.
 * Reopen with evidence for the cached-byte/raw-byte and cursor lifetimes,
 * plus the unsigned case-folding lowering and nested-loop branch shape.
 * Wide-byte, cursor-advance and inline separator-classification forms did not
 * improve this attempt; the named interval alone is not a body-size proof.
 */
extern unsigned int g_signatureTable[];

static inline unsigned char signature_normalize_path_byte(const unsigned char *text) {
    unsigned char character = *text;
    if (character == '/' || character == '\\') {
        while (*++text == '/' || *text == '\\') {
        }
    }
    if (character >= 'a' && character <= 'z')
        character -= 'a' - 'A';
    if (character == '/')
        character = '\\';
    return character;
}

unsigned int SIG_CalcCaseInsensitiveSignature__FPCc(const unsigned char *text) {
    unsigned int crc;
    if (text == 0)
        return 0;
    crc = 0xFFFFFFFFU;
    while (*text) {
        unsigned char character = signature_normalize_path_byte(text++);
        crc = (crc >> 8) ^ g_signatureTable[character ^ (crc & 0xFF)];
    }
    return ~crc;
}
