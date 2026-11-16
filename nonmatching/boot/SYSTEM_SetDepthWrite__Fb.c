/* USA SCUS_976.15 boot: SYSTEM_SetDepthWrite__Fb, 0x01E85820..0x01E85910.
 * Adapted from this repository's accepted FRONTEND source; boot addresses,
 * field accesses and named calls were checked against the retail body.
 * Observed body: 240 bytes, with no trailing alignment word in its interval.
 * Measured 14 November 2026: all 240 bytes are exact after independent SN
 * linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, both with -O2 -G0 and the default GNU assembler.
 * SDK991111 produces 224 bytes: 88 equal positions in that compared prefix,
 * first difference at byte 0. No profile change is proposed.
 * The flag follows the existing C convention for the mangled boolean input.
 * Its low byte is saved at db_dlist + 0x69; the original low-byte XOR behavior
 * is preserved when constructing the upper half of the 64-bit render word.
 * The source appends a tag/header through db_dlist + 0x54, then uses the three
 * named accepted display-list helpers. This is an unaccepted local witness:
 * complete-program integration, type/boundary review and tool qualification
 * remain separate. No promotion or matching credit is claimed here.
 */
struct Pk16 {
    char b[16];
};

struct Ctx {
    int pad_00;
    unsigned int *p_04;
    struct Pk16 *p_08;
};

struct DbDlist {
    char pad_00[0x54];
    struct Ctx *p_54;
};

struct Target {
    int f0;
    unsigned int f4;
};

extern struct DbDlist db_dlist;
extern struct Pk16 g_cntTag;
extern struct Target *g_pCurrentRenderTarget;
extern unsigned char D_01F78BD9;
typedef struct { char pad0[4]; unsigned long *cur; } DLIB_DISPLIST;
extern void dlib_displist_direct_begin__FP13DLIB_DISPLIST(int *);
extern void dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl(DLIB_DISPLIST *, unsigned long, unsigned long);
extern void dlib_displist_direct_end__FP13DLIB_DISPLIST(int *);

void SYSTEM_SetDepthWrite__Fb(int flag)
{
    struct Ctx *c;
    struct Pk16 *src;
    unsigned int *w;
    unsigned int hdr;
    unsigned short one;

    c = db_dlist.p_54;
    D_01F78BD9 = flag;
    src = &g_cntTag;
    hdr = 0x13000000;
    one = 1;
    *c->p_08 = *src;
    w = c->p_04;
    w[0] = 0;
    w[1] = 0;
    w[2] = 0;
    w[3] = hdr;
    c->p_04 = (unsigned int *)((char *)c->p_04 + 0x10);
    *(unsigned short *)c->p_08 = one;
    c->p_08 = (struct Pk16 *)c->p_04;
    c->p_04 = (unsigned int *)((char *)c->p_04 + 0x10);
    dlib_displist_direct_begin__FP13DLIB_DISPLIST((int *)c);
    dlib_displist_add_data_ul64__FP13DLIB_DISPLISTUlUl((DLIB_DISPLIST *)c, (unsigned long)((g_pCurrentRenderTarget->f4 >> 13) | 0x1000000) | ((unsigned long)(unsigned char)(flag ^ 1) << 32), 0x4E);
    dlib_displist_direct_end__FP13DLIB_DISPLIST((int *)c);
}
