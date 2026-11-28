/* USA SCUS_976.15 boot, VRAM_RenderTo__FP12RenderTargetUi at 0x01E93568.
 * Observed body: 632 bytes (jr ra plus delay slot end the 632-byte interval;
 * no padding word). Reconstructed from the retail program, using the original
 * symbols. Measured 28 November 2026: all 632 body bytes exact (cmp2 resolved
 * against retail symbol addresses, FULL_EXACT True) under the default pinned
 * route and gnu-ee-trial, -O2 -G0, default GNU assembler. Unaccepted witness:
 * no complete-program gate, promotion or C matching credit yet.
 *
 * Makes the target the current render target, builds a GS FRAME_1 register
 * write (address 0x4C; base pointer from the VRAM address >> 13, buffer width
 * in 64-pixel units, pixel format from +0x10, no write mask) and sends it in a
 * direct-mode bracket inside a new cnt-tag packet, opens a second packet, then
 * sets the drawing offset, viewport, depth range and scissor to the target size
 * and enables state bit 2. With non-zero flags it clears the stencil, sets the
 * depth test, blend state 0x44 and depth write (flag bit 2), and draws a black
 * full-target rectangle. Source forms that mattered: the VRAM address is read
 * through an unsigned int view of the target (a struct-member read lets the
 * scheduler sink the global store; 477/632), each packet uses its own cursor
 * pointer (one shared pointer: 615/632) and the four header words are written
 * in ascending order (the 3,1,2,0 order of SetAlphaTestMode: 628/632).
 * The FRAME bitfield names follow the GS register layout; RenderTarget fields
 * other than width/height keep offset names.
 */
typedef struct RenderTarget {
    unsigned int field00;
    unsigned int field04;
    unsigned short width;
    unsigned short height;
    unsigned short field0C;
    unsigned short field0E;
    unsigned int field10;
} RenderTarget;

typedef struct { unsigned int w[4]; } DLIB_GIFTAG;

typedef struct {
    char pad0[4];
    unsigned int *cur;
    unsigned int *begin;
} DLIB_DISPLIST;

typedef struct {
    char pad[0x54];
    DLIB_DISPLIST *pDlist;
} tDbDlist;

typedef struct {
    unsigned long fbp : 9;
    unsigned long pad09 : 7;
    unsigned long fbw : 6;
    unsigned long pad16 : 2;
    unsigned long psm : 6;
    unsigned long pad1E : 2;
    unsigned long fbmsk : 32;
    unsigned long addr;
} QWdata;

extern RenderTarget *g_pCurrentRenderTarget;
extern tDbDlist db_dlist;
extern DLIB_GIFTAG g_cntTag;

extern void SYSTEM_RefreshTestAndZStates__Fv(void);
extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(DLIB_DISPLIST *dl);
extern void dlib_displist_add_data_block__FP13DLIB_DISPLISTP6QWdatai(DLIB_DISPLIST *dl, QWdata *data, int count);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(DLIB_DISPLIST *dl);
extern void dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(DLIB_DISPLIST *dl, unsigned long state);
extern void VRAM_SetOffset__Fii(int, int);
extern void VRAM_SetViewport__Fiiii(int, int, int, int);
extern void DepthRange__Q34scee3Psp2GuUsUs(unsigned short lo, unsigned short hi);
extern void Scissor__Q34scee3Psp2GuUsUsUsUs(unsigned short, unsigned short, unsigned short, unsigned short);
extern void Enable__Q34scee3Psp2GuQ44scee3Psp2Gu13EFunctionName(int bit);
extern void ClearStencil__Q34scee3Psp2GuUc(unsigned char v);
extern void SYSTEM_SetDepthTestMode__FbUi(int enable, unsigned int mode);
extern void SYSTEM_SetDepthWrite__Fb(int flag);
extern void UTIL_DrawFlatShadedRect__FssssUiUi(short, short, short, short, unsigned int, unsigned int);

void VRAM_RenderTo__FP12RenderTargetUi(RenderTarget *target, unsigned int flags) {
    QWdata frame;
    DLIB_DISPLIST *dl;
    unsigned int *q;
    unsigned int *p;

    g_pCurrentRenderTarget = target;
    frame.fbp = *(unsigned int *)target >> 13;
    frame.fbw = target->width >> 6;
    frame.psm = target->field10;
    frame.fbmsk = 0;
    frame.addr = 0x4C;
    SYSTEM_RefreshTestAndZStates__Fv();

    dl = db_dlist.pDlist;
    *(DLIB_GIFTAG *)dl->begin = g_cntTag;
    q = dl->cur;
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0x13000000;
    dl->cur += 4;
    *(unsigned short *)dl->begin = 1;
    dl->begin = dl->cur;
    dl->cur += 4;
    dlib_displist_direct_begin__FP13DLIB_DISPLIST(dl);
    dlib_displist_add_data_block__FP13DLIB_DISPLISTP6QWdatai(dl, &frame, 1);
    dlib_displist_direct_end__FP13DLIB_DISPLIST(dl);

    *(DLIB_GIFTAG *)dl->begin = g_cntTag;
    p = dl->cur;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0x13000000;
    dl->cur += 4;
    *(unsigned short *)dl->begin = 1;
    dl->begin = dl->cur;
    dl->cur += 4;

    VRAM_SetOffset__Fii(0x800 - (target->width >> 1), 0x800 - (target->height >> 1));
    VRAM_SetViewport__Fiiii(0x800, 0x800, target->width, target->height);
    DepthRange__Q34scee3Psp2GuUsUs(0xFFF0, 0x10);
    Scissor__Q34scee3Psp2GuUsUsUsUs(0, 0, target->width, target->height);
    Enable__Q34scee3Psp2GuQ44scee3Psp2Gu13EFunctionName(2);
    if (flags) {
        ClearStencil__Q34scee3Psp2GuUc(0);
        SYSTEM_SetDepthTestMode__FbUi(1, 1);
        dlib_displist_set_blend_state__FP13DLIB_DISPLISTUl(dl, 0x44);
        if (flags & 4) {
            SYSTEM_SetDepthWrite__Fb(1);
        } else {
            SYSTEM_SetDepthWrite__Fb(0);
        }
        UTIL_DrawFlatShadedRect__FssssUiUi(0, 0, target->width, target->height, 0xFF000000, 0);
    }
}
