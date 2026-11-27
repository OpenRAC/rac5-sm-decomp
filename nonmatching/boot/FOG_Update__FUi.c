/* USA SCUS_976.15 boot: FOG_Update__FUi, 0x01E7D4E8.
 * Observed body: 492 bytes, followed by a padding word inside the 496-byte
 * interval. Measured 26 November 2026: all 492 body bytes are exact after
 * independent SN linking at the retail address under the level profile
 * gnu-ee-trial-divpad (the compiler variant that pads float division with
 * nops, as the retail does), with -O2 -G0 and the default GNU assembler. The
 * pinned and gnu-ee-trial routes lack those nops and are not exact (279/492
 * equal). The default tools are rebuilt, not hash-qualified. This is an
 * unaccepted witness: complete-program integration, boundaries, types and
 * qualification require separate review. No promotion or matching credit is
 * claimed here. Reconstructed from the retail boot. It pushes one fog entry to
 * the display list: when the entry is enabled it writes its packed colour
 * through a direct-mode block and derives two projection constants from the
 * near and far distances scaled by a global factor; when disabled it derives
 * constants that cancel the fog. Both constants go out as one quadword each
 * (codes 1 and 2). The two 16-byte quadwords are zero-filled first. Source
 * shape that mattered: the two quadwords are one array (the address of the
 * second is kept in a register), the red/green/blue bytes are read into
 * separate 64-bit locals before the display-list calls, each branch makes its
 * own two quadword calls (the compiler does not merge them), and the near/far
 * products are written out in every use instead of through locals.
 */
typedef unsigned int QW __attribute__((mode(TI)));
typedef struct { QW qw; } QWdata;
typedef struct { char pad0[4]; unsigned char *cur; } DLIB_DISPLIST;
typedef struct {
    unsigned char enabled;
    char pad01[3];
    float f04;
    float f08;
    unsigned char r, g, b, a;
    float f10;
} tFOG;
extern tFOG g_Fog[];
extern DLIB_DISPLIST *g_displist;
extern float D_01EF1098;
extern void *memset(void *, int, unsigned int);
extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(DLIB_DISPLIST *);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(DLIB_DISPLIST *);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(DLIB_DISPLIST *, unsigned long, unsigned long);
extern void dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(DLIB_DISPLIST *, int, QWdata *, int);

void FOG_Update__FUi(unsigned int index) {
    QWdata q[2];
    tFOG *fog = &g_Fog[index];
    DLIB_DISPLIST *dl;
    memset(&q[0], 0, 16);
    memset(&q[1], 0, 16);
    dl = g_displist;
    if (fog->enabled) {
        unsigned long r = fog->r, g = fog->g, b = fog->b;
        dlib_displist_direct_begin__FP13DLIB_DISPLIST(dl);
        dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(dl, r | (g << 8) | (b << 16), 0x3D);
        dlib_displist_direct_end__FP13DLIB_DISPLIST(dl);
        ((float *)&q[0])[3] = ((fog->f08 * D_01EF1098 + fog->f04 * D_01EF1098) * -159.0f / (fog->f08 * D_01EF1098 - fog->f04 * D_01EF1098) + 351.0f) * 0.5f;
        ((float *)&q[1])[3] = fog->f08 * D_01EF1098 * (fog->f04 * D_01EF1098) * 159.0f / (fog->f08 * D_01EF1098 - fog->f04 * D_01EF1098);
        dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(dl, 1, &q[0], 1);
        dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(dl, 2, &q[1], 1);
    } else {
        ((float *)&q[0])[3] = ((fog->f08 + fog->f04) * 0.0f / (fog->f08 - fog->f04) + 510.0f) * 0.5f;
        ((float *)&q[1])[3] = fog->f08 * fog->f04 * 0.0f / (fog->f08 - fog->f04);
        dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(dl, 1, &q[0], 1);
        dlib_displist_qw__FP13DLIB_DISPLISTiP6QWdatai(dl, 2, &q[1], 1);
    }
}
