/* USA SCUS_976.15 boot:
 * SND_Fixup__FUiPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER,
 * 0x01E91E10. Observed body: 152 bytes in a 168-byte named interval; the
 * last 16 bytes are a separate four-instruction store routine with its own
 * return and are not part of this source.
 * Measured 16 November 2026: all 152 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Asks the supplied lookup for the sound
 * asset with this identifier (asset type 4, default location). When it exists
 * and its version field is 2.0, clears a word of its sound block and, unless
 * the file is already marked fixed up, stores the identifier and the mark and
 * sets bit 1 of the block flags. Returns the sound block, or 0.
 * The result starts at 0 before the lookup call and is the block, not the
 * file header. The identifier store is written before the mark: the two
 * adjacent stores come out in the opposite order, as in retail.
 */
typedef struct {
    unsigned int id;
    char _04[0x0C];
    unsigned int flags;
    char _14[0x10];
    int cleared;
} WAD_FILE_SOUND_BLOCK;

typedef struct WAD_FILE_HEADER {
    char _00[0x78];
    int state;
    char _7C[0x44];
    float version;
    WAD_FILE_SOUND_BLOCK block;
} WAD_FILE_HEADER;

typedef struct {
    unsigned int _words[4];
} WadLocationID;

typedef WAD_FILE_HEADER *(*WAD_FIND_FUNC)(WadLocationID *, unsigned int, int, int);

WAD_FILE_SOUND_BLOCK *SND_Fixup__FUiPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    unsigned int id, WAD_FIND_FUNC find) {
    WadLocationID location;
    WAD_FILE_HEADER *header;
    WAD_FILE_SOUND_BLOCK *block;

    block = 0;
    header = find(&location, id, 4, 0);
    if (header != 0 && header->version == 2.0f) {
        block = &header->block;
        block->cleared = 0;
        if (header->state != 1) {
            header->block.id = id;
            header->state = 1;
            block->flags |= 2;
        }
    }
    return block;
}
