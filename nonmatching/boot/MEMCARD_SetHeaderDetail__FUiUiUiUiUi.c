/* USA SCUS_976.15 boot: MEMCARD_SetHeaderDetail__FUiUiUiUiUi, 0x01E628D0.
 * Observed body: 52 bytes, followed by one zero alignment word.
 * Measured 14 November 2026: all 52 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route,
 * gnu-ee-trial and sdk991111, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. The slot headers are 20-byte records
 * starting at memcard_region + 0x68; this file declares only the part of
 * the region it needs. Offsets 0, 4, 8 and 12 are the four payloads written
 * here; the date bytes at 16..18 and the flags byte at 19 follow the accepted
 * creation-date setter and hardcore-bit getter. Field names are descriptive
 * placeholders. Each assignment indexes the header array again: one pointer
 * kept across the four stores compiles to 40 bytes instead.
 */
typedef struct {
    unsigned int word0;
    unsigned char byte4;
    unsigned int word8;
    unsigned int wordC;
    unsigned char date[3];
    unsigned char flags;
} tMEMCARD_SLOT_HEADER;

typedef struct {
    unsigned char unknown[0x68];
    tMEMCARD_SLOT_HEADER headers[1];
} tMEMCARD_REGION;

extern tMEMCARD_REGION memcard_region;

void MEMCARD_SetHeaderDetail__FUiUiUiUiUi(unsigned int slot, unsigned int a,
                                          unsigned int b, unsigned int c,
                                          unsigned int d) {
    memcard_region.headers[slot].word0 = a;
    memcard_region.headers[slot].byte4 = b;
    memcard_region.headers[slot].word8 = c;
    memcard_region.headers[slot].wordC = d;
}