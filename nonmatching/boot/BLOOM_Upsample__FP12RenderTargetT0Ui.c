/* USA SCUS_976.15 boot: BLOOM_Upsample__FP12RenderTargetT0Ui, 0x01E7D960.
 * Observed body: 444 bytes, followed by a padding word inside the 448-byte
 * interval. Measured 26 November 2026: not exact. Under gnu-ee-trial at -O2
 * -G0 -mno-check-zero-division (the per-file flag the repository uses for 535
 * boot sources; without it a divide-by-zero check adds 8 bytes) the body has
 * the retail size and all instructions; two instructions sit one slot away
 * from the retail position (the zero argument of the first call is set one
 * instruction earlier, and the decrement of the column counter is hoisted
 * above the first call instead of sitting after the second). The pinned route
 * differs in the same two places plus the prologue order. The audit result
 * with equal bytes and first differing byte is in the report. Not exact; no
 * complete-program gate, promotion or C matching credit. Reconstructed from
 * the retail boot. It renders the first target into the second: it sets the
 * blend state from the third argument, opens a new packet in the display list
 * (the cnt tag copy and unpack header that the accepted
 * SYSTEM_SetBloomWrite__Fb also inlines), selects the second target as the
 * source and then draws one textured rectangle per 64-pixel column, from the
 * last column down to the first, stepping the horizontal offset by the integer
 * width ratio of the two targets times 64. Source shape that mattered: the
 * width of the first target is kept in the loop counter itself (shifted in
 * place after the division), the horizontal offset is written as counter times
 * (ratio << 6) in the call, and the loop is while (--n >= 0). To reopen: find
 * the source form that keeps the counter decrement after the second call and
 * the zero argument after the prologue stores.
 * 28 November 2026 (gnu-ee-trial, -mno-check-zero-division): still 312 of 444
 * equal bytes, first difference +44; the default route gives 302, and the
 * divpad route is identical (no float division). Without scheduling the loop
 * counter decrement sits right after the second call, as in retail; the first
 * scheduling pass hoists it ahead of the first call. About twenty loop forms
 * (pre/post decrement, separate counters, signed or unsigned, while/for/do)
 * leave that hoist in place or worsen the body. Reopen with a first-pass
 * schedule that keeps a call-crossing counter update below the calls, or with
 * a source form that gives the decrement a real dependence on the second call.
 */
typedef struct RenderTarget {
    int unk0;
    int unk4;
    unsigned short width;
    unsigned short height;
} RenderTarget;
typedef struct { int pad0; unsigned int *cur; unsigned int *tag; } DLIB;

extern DLIB *g_displist;
extern char g_cntTag[];
extern float halfOffset;
extern unsigned short upsampleXOff;
extern void *memcpy(void *, const void *, unsigned int);
extern void VRAM_RenderFrom__FP12RenderTargetb(RenderTarget *, int);
extern void VRAM_RenderTo__FP12RenderTargetUi(RenderTarget *, unsigned int);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(void *, unsigned long);
extern void UTIL_DrawTexturedRect__FssssffffUiUi(short, short, short, short, float, float, float, float, unsigned int, unsigned int);

void BLOOM_Upsample__FP12RenderTargetT0Ui(RenderTarget *dst, RenderTarget *src, unsigned int blend) {
    DLIB *dl = g_displist;
    unsigned int d = dst->width;
    unsigned short q = src->width / d;

    unsigned int *p;
    d >>= 6;
    VRAM_RenderFrom__FP12RenderTargetb(dst, 0);
    dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(dl, ((unsigned long)blend << 32) | 0x68);
    memcpy(dl->tag, g_cntTag, 16);
    p = dl->cur;
    p[3] = 0x13000000;
    p[1] = 0;
    p[2] = 0;
    p[0] = 0;
    dl->cur = dl->cur + 4;
    *(short *)dl->tag = 1;
    dl->tag = dl->cur;
    dl->cur = dl->cur + 4;
    VRAM_RenderTo__FP12RenderTargetUi(src, 0);
    while ((int)--d >= 0) {
        UTIL_DrawTexturedRect__FssssffffUiUi((short)(upsampleXOff + (int)d * (q << 6)), 0, (short)(q << 6), src->height,
            halfOffset + (int)d * 64, halfOffset, halfOffset + 64.0f + (int)d * 64, halfOffset + dst->height, 0xFFFFFFFF, 0x00FFFFFF);
    }
}
