/* USA SCUS_976.15 boot: TEXMGR_SetColorIndexWithColorTo__FP13SceGimPictureUiUiP29tTEXMGR_ALPHA_COLOR_TOLERANCE, 0x01E7C6D0.
 * Observed body: 336 bytes, followed by a stray stack-adjust word, a nop and a
 * separate 8-byte routine that returns zero (the 352-byte interval holds all of them).
 * Measured 17 November 2026: all 336 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. It fetches the palette pixel table and the
 * palette header of a GIM picture, requires a header of kind 3, and then rewrites
 * every packed color word that matches: either by a per-channel range test derived
 * from the tolerance record (when one is given) or by an exact 24-bit key. It returns
 * whether any word was replaced.
 * The shape is the one already used by the level copies of this function in the
 * repository; the callees keep their accepted names.
 */
typedef struct {
    char pad_00[4];
    unsigned short kind_04;
    char pad_06[2];
    unsigned short n_08;
} Hdr;

extern unsigned int *sceGimPictureGetPalettePixels__FP13SceGimPictureii(void *o, int a, int b);
extern int sceGimPictureGetPalette__FP13SceGimPicture(void *o);

int TEXMGR_SetColorIndexWithColorTo__FP13SceGimPictureUiUiP29tTEXMGR_ALPHA_COLOR_TOLERANCE(void *o, unsigned int key, unsigned int val, unsigned char *col)
{
    unsigned int *ents;
    int hv;
    Hdr *h;
    unsigned int n;
    unsigned int i;
    unsigned int j;
    int found;
    unsigned char lo0;
    unsigned char lo1;
    unsigned int *p;
    unsigned char c0;
    unsigned char c1;
    unsigned int c2;

    ents = sceGimPictureGetPalettePixels__FP13SceGimPictureii(o, 0, 0);
    hv = sceGimPictureGetPalette__FP13SceGimPicture(o);
    h = (Hdr *)hv;
    if (h == 0 || h->kind_04 != 3) {
        return 0;
    }
    n = h->n_08;
    found = 0;
    if (col != 0) {
        lo0 = 255 - col[0];
        lo1 = 255 - col[1];
        for (i = 0; i < n; i++) {
            p = &ents[i];
            c0 = ((unsigned char *)p)[0];
            c1 = ((unsigned char *)p)[1];
            c2 = (*p & 0xFF0000) >> 16;
            if (c0 >= lo0 && col[2] >= c1 && c2 >= lo1) {
                *p = val;
                found = 1;
            }
        }
    } else {
        for (j = 0; j < n; j++) {
            if ((ents[j] & 0xFFFFFF) == key) {
                ents[j] = val;
                found = 1;
            }
        }
    }
    return found;
}
