/* USA SCUS_976.15 boot: SND_FindVag__FPCc, 0x01E92190.
 * Observed body: 228 bytes, followed by one zero alignment word.
 * Measured 16 November 2026: all 228 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Binary search of the streamed-voice
 * table (12-byte entries keyed by a case-insensitive name signature); returns
 * the entry index, or -1 when the table is absent or the name is not in it.
 * The table test wraps the whole search and the absent-table result is a
 * second `return -1` at the end; an empty table is not tested separately and
 * falls through the loop condition. Each bound moves to the other bound when
 * it already equals the probe (`low == middle ? high : middle`).
 */
typedef struct {
    unsigned int signature;
    unsigned int offset;
    unsigned int size;
} VAG_WAD_ENTRY;

extern VAG_WAD_ENTRY *g_VagWadEntries;
extern int g_VagWadEntryCount;
extern unsigned int SIG_CalcCaseInsensitiveSignature__FPCc(const char *name);

int SND_FindVag__FPCc(const char *name) {
    unsigned int signature;
    int low;
    int high;
    int middle;

    if (g_VagWadEntries != 0) {
        signature = SIG_CalcCaseInsensitiveSignature__FPCc(name);
        low = 0;
        high = g_VagWadEntryCount;
        middle = high >> 1;
        while (low != high && g_VagWadEntries[middle].signature != signature) {
            if (g_VagWadEntries[middle].signature < signature) {
                low = (low == middle) ? high : middle;
            } else {
                high = (high == middle) ? low : middle;
            }
            middle = (low + high) >> 1;
        }
        return g_VagWadEntries[middle].signature == signature ? middle : -1;
    }
    return -1;
}
