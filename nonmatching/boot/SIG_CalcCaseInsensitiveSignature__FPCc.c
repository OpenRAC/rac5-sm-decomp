/* USA SCUS_976.15 boot: SIG_CalcCaseInsensitiveSignature__FPCc,
 * 0x01E8D2E8..0x01E8D3C0, observed 216-byte body. The following 16-byte
 * tail contains nonzero words and is excluded, not claimed as padding.
 * Reconstructed from the owner's retail body and four direct callers.
 * The CRC update and table declaration follow the accepted boot sibling
 * SIG_CalcSignature__FPCci; no external implementation source is imported.
 * Measured 28 November 2026 with -O2 -G0, default GNU assembler and an
 * independent link at the retail address: rebuilt default GNU emits 216
 * bytes, 165 equal positions, first difference +0x32; gnu-ee-trial emits 224
 * bytes, 97 equal positions. Not exact; no complete-program gate,
 * qualification, acceptance, promotion or matching credit. The 16 November
 * form (an inline normalizer called with text++) gave 121 positions, first
 * difference +0x6.
 * Null and empty strings return zero. ASCII lowercase is converted to uppercase
 * and slash to backslash; other unsigned byte values are preserved for CRC32.
 * The separator test reads the byte of the loop condition, as retail does; a
 * lookahead cursor then scans the following separators and its result is not
 * used, as in retail. The main cursor still advances by one byte, so repeated
 * separators are not collapsed. Everything outside the scan block matches:
 * prologue, constants, case fold, slash fix, table lookup and loop tail.
 * Remaining difference: retail copies the text pointer into a register of its
 * own at the start of the scan block and steps that copy, and keeps the
 * zero-extended separator byte in another register; this source folds the
 * scan start into the main cursor's text + 1, so one instruction is missing
 * and the scan registers and both branch offsets differ. Also measured
 * without improvement: a pre-increment scan (157), the normalizer as an
 * inline helper again (80 to 134), while or for scans (99), text++ before
 * the scan (72 to 103), index-based scans or main loop (38 to 98), a cached
 * loop byte of any width (126 to 153), an inline separator predicate (31 to
 * 41). No volatile, register, instruction or dead-operation device is used.
 * Reopen with evidence of how the lookahead was written (a macro or helper
 * with its own cursor parameter, from a caller or a sibling body), or with a
 * measured difference in how the pinned compiler ties increment registers.
 */
extern unsigned int g_signatureTable[];

unsigned int SIG_CalcCaseInsensitiveSignature__FPCc(const unsigned char *text) {
    unsigned int crc;
    if (text == 0)
        return 0;
    crc = 0xFFFFFFFFU;
    while (*text) {
        unsigned char character;
        if (*text == '/' || *text == '\\') {
            const unsigned char *p = text + 1;
            unsigned char c;
            do {
                c = *p++;
            } while (c == '/' || c == '\\');
        }
        character = *text;
        if (character >= 'a' && character <= 'z')
            character -= 'a' - 'A';
        if (character == '/')
            character = '\\';
        crc = (crc >> 8) ^ g_signatureTable[character ^ (crc & 0xFF)];
        text++;
    }
    return ~crc;
}
