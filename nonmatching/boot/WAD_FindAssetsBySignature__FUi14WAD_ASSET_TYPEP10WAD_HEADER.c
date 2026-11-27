/* USA SCUS_976.15 boot: WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER,
 * 0x01E8D160. Observed body: 192 bytes; the rest of the 256-byte named
 * interval is a stack adjustment after the return and the start of the next
 * routine, not claimed.
 * Measured 17 November 2026: all 192 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route, with
 * -O2 -G0 and the default GNU assembler (gnu-ee-trial: 71 of 192 bytes).
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Looks an asset up in a WAD header by
 * signature and type: the bucket index is the low 10 bits of the signature
 * xored with the type folded as (type | type << 5), the bucket chain at
 * +0xC0 is walked for an entry with the same signature whose type is the
 * requested one or 0x14, and a type 0x14 entry is a link (+0x84) to the real
 * asset, from which two fields (+0x68, +0x7C and, if still empty, +0x78) are
 * copied into the link entry before the target is returned.
 * Retail tests the walk result for null again after a match and reuses the
 * type read in the loop. Both come from the type kept in a local and from
 * testing a copy of the result rather than the loop variable itself: tested
 * directly, the compiler drops that second test and duplicates part of the
 * loop (236 bytes); without the type local, it reloads the type (196 bytes).
 */
typedef struct Asset {
    unsigned int signature;
    unsigned char pad04[0x60];
    int type;
    struct Asset *field68;
    struct Asset *next;
    unsigned char pad70[8];
    struct Asset *field78;
    struct Asset *field7C;
    unsigned char pad80[4];
    struct Asset *link;
} tAsset;

typedef struct {
    unsigned char pad[0xC0];
    tAsset *bucket[1];
} tWadHeader;

tAsset *WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(unsigned int signature, int type, tWadHeader *wad) {
    tAsset *asset;
    tAsset *found;
    tAsset *link;
    int entry_type;

    if (wad == 0) {
        return 0;
    }
    if (signature == 0) {
        return 0;
    }
    for (asset = wad->bucket[(signature & 0x3FF) ^ (type | (type << 5))]; asset != 0;
         asset = asset->next) {
        if (asset->signature == signature) {
            entry_type = asset->type;
            if (entry_type == type || entry_type == 0x14) {
                break;
            }
        }
    }
    found = asset;
    if (found == 0) {
        return 0;
    }
    if (entry_type == 0x14) {
        link = asset->link;
        if (link != 0 && asset->field7C == 0 && link->field7C != 0) {
            asset->field7C = link->field7C;
            asset->field68 = link->field68;
            if (asset->field78 == 0) {
                asset->field78 = link->field78;
            }
        }
        asset = link;
    }
    return asset;
}
