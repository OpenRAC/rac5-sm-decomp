/* USA SCUS_976.15 boot: Ascii2Sjis__FUc, 0x01E8B1A0..0x01E8B288.
 * Reconstructed from the owner's retail body and its direct boot caller.
 * No SDK implementation or conversion-table contents are imported.
 * Observed body 232 bytes, no trailing padding. Measured 16 November 2026:
 * rebuilt default GNU and gnu-ee-trial, -O2 -G0, GNU assembler and independent
 * SN links emit actual 232-byte object and linked text; every linked body
 * byte agrees. These are local unqualified comparisons, not a complete-program
 * gate, acceptance, promotion or matching credit.
 * The mangled input is unsigned char. Results are zero or a 16-bit code;
 * the reviewed caller consumes both bytes and stores a swapped halfword.
 * Only local four-byte access views are declared: named ascii_special is read
 * at indices 0..32, and the separate range view at 0..2. Initializers remain
 * private. Unsupported input bytes return zero; range sums wrap to 16 bits.
 * The authored inline helper supplies an effective punctuation-table index
 * base before subtraction. A used 16-bit result joins the two lookup
 * paths. Both choices preserve ordinary value semantics; no forced register,
 * dead copy, assembly or extra observable operation is introduced.
 * The helper emits no separate function and is not a named retail-body claim.
 * Independent bounded instruction checks cover all 256 byte inputs and their
 * table-load traces. Qualification, indirect-entry and semantic review remain
 * separate obligations; no complete shared table structure is inferred.
 */
typedef struct {
    unsigned short value;
    unsigned char opaque_02[2];
} AsciiSpecialEntry;

typedef struct {
    unsigned short base;
    unsigned short first;
} AsciiRangeEntry;

typedef char AsciiSpecialEntry_size_check[sizeof(AsciiSpecialEntry) == 4 ? 1 : -1];
typedef char AsciiRangeEntry_size_check[sizeof(AsciiRangeEntry) == 4 ? 1 : -1];

extern AsciiSpecialEntry ascii_special[];
extern AsciiRangeEntry D_01EF5C90[];

static inline int ascii_special_start(int adjustment) {
    return adjustment + 0x1F;
}

unsigned short Ascii2Sjis__FUc(unsigned char character) {
    int adjustment = 0;
    int range;
    unsigned short result;

    if ((unsigned int)(character - 0x20) < 0x10)
        adjustment = 1;
    else if ((unsigned int)(character - 0x30) < 10)
        range = 0;
    else if ((unsigned int)(character - 0x3A) < 7)
        adjustment = 0xB;
    else if ((unsigned int)(character - 0x41) < 0x1A)
        range = 1;
    else if ((unsigned int)(character - 0x5B) < 6)
        adjustment = 0x25;
    else if ((unsigned int)(character - 0x61) < 0x1A)
        range = 2;
    else if ((unsigned int)(character - 0x7B) < 4)
        adjustment = 0x3F;
    else
        return 0;

    if (adjustment != 0)
        result = ascii_special[character - ascii_special_start(adjustment)].value;
    else
        result = D_01EF5C90[range].base + character - D_01EF5C90[range].first;
    return result;
}
