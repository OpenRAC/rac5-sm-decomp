/* USA SCUS_976.15 boot: SYSTEM_UploadMatrix__F15PS2_MATRIX_SLOTP7MATRIX4, 0x01E84BC0.
 * Observed body: 308 bytes (the last word of the 320 byte interval is zero
 * alignment, and the next small routine starts after it).
 * Measured 26 November 2026: compiled 300 bytes versus 308 retail under pinned,
 * gnu-ee-trial and both divpad profiles (17 of 76 words equal); sdk991111 gives
 * 268 bytes. The independent SN link gives 151 of 304 bytes equal with the first
 * difference at byte 28 under pinned and gnu-ee-trial.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Reconstructed from the retail boot. If the matrix slot has a valid hardware
 * address in the slot table, it closes the current display list packet with a
 * small header packet, then writes a second packet: the GIF tag, a quadword
 * whose last word is the slot address with a 0x6C04 command in the high half,
 * and the four quadwords of the matrix, and advances the list by 0x60 bytes.
 * This is the inlined sequence of the accepted dlib_displist helpers (tag copy,
 * cnt/data unpack begin, quadword block copy, data unpack end).
 * Remaining difference: retail materialises a 128-bit zero in a register
 * (one extra instruction) before storing the first quadword of the second
 * packet, whereas this source stores the zero directly, so the compiled body
 * is one instruction short; the constant and dl registers are then also
 * allocated differently. In the pinned compiler a TImode zero is always folded
 * into the store, whatever the source form tried: a local or typed zero, a
 * struct or union copy, a static const zero, an inline helper taking the
 * quadword, a zero reassigned under a condition the compiler folds away, and a
 * loop over the five quadwords (not unrolled). The zero only stays in a
 * register when it is a real merge of two values (a conditional assignment),
 * which adds a branch retail does not have. The sdk991111 compiler does keep
 * the zero in a register for the plain store, but it also caches the display
 * list pointer and so differs elsewhere. Reopen when a source shape that makes
 * the pinned compiler keep a TImode zero in a register without a branch is
 * found, or when the compiler differences are resolved.
 */
typedef unsigned int QW __attribute__((mode(TI)));
typedef struct { float m[16]; } MATRIX4;
typedef struct { unsigned int w[4]; } DLIB_GIFTAG;

typedef struct {
    char pad0[4];
    unsigned int *cur;
    unsigned int *begin;
} DLIB_DISPLIST;

typedef struct { char pad[0x54]; DLIB_DISPLIST *pDlist; } tDbDlist;

extern tDbDlist db_dlist;       /* 0x01F78B70 */
extern DLIB_GIFTAG g_cntTag;    /* 0x01FD3360 */
extern int MatrixAddresses[];   /* 0x01EF57C8 */

void SYSTEM_UploadMatrix__F15PS2_MATRIX_SLOTP7MATRIX4(int slot, MATRIX4 *m) {
    int addr = MatrixAddresses[slot];
    DLIB_DISPLIST *dl;
    tDbDlist *db = &db_dlist;
    unsigned int *q;
    QW *src;

    if (addr >= 0) {
        dl = db->pDlist;
        *(DLIB_GIFTAG *)dl->begin = g_cntTag;
        q = dl->cur;
        q[3] = 0x13000000;
        q[1] = 0;
        q[2] = 0;
        q[0] = 0;
        dl->cur += 4;
        *(unsigned short *)dl->begin = 1;
        dl->begin = dl->cur;
        dl->cur += 4;

        dl = db->pDlist;
        *(DLIB_GIFTAG *)dl->begin = g_cntTag;
        *(QW *)dl->cur = 0;
        dl->cur[3] = addr | 0x6C040000;
        src = (QW *)m;
        ((QW *)dl->cur)[1] = src[0];
        ((QW *)dl->cur)[2] = src[1];
        ((QW *)dl->cur)[3] = src[2];
        ((QW *)dl->cur)[4] = src[3];
        *(unsigned short *)dl->begin = 5;
        dl->begin = dl->cur + 0x14;
        dl->cur += 0x18;
    }
}
