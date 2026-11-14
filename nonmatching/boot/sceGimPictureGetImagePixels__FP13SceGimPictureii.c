/* sceGimPictureGetImagePixels__FP13SceGimPictureii 0x01E81620 (14 November
 * 2026).
 * Measured pinned: 22 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned char pad[0x18];
    int pixel_offset;
    unsigned char pad2[0xE];
    unsigned short width;
    unsigned char pad3[2];
    unsigned short height;
} tGimChunk;

typedef struct {
    unsigned char pad[0xC];
    tGimChunk *chunk;
} tGimPicture;

int sceGimPictureGetImagePixels__FP13SceGimPictureii(tGimPicture *picture, int x, int y) {
    tGimChunk *chunk;
    int row;

    if (picture == 0) {
        return 0;
    }
    chunk = picture->chunk;
    if (chunk == 0) {
        return 0;
    }
    if (x < 0 || x >= chunk->width) {
        return 0;
    }
    row = y % chunk->height;
    if (row < 0) {
        row += chunk->height;
    }
    return ((int *)((char *)chunk + chunk->pixel_offset))[chunk->width * row + x];
}
