/* USA SCUS_976.15 boot: UTIL_GS_WRITE_FIFO__FP11DLIB_GIFTAG, 0x01E84050.
 * Observed body: 216 bytes, it fills its interval.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Measured 17 November 2026 after independent SN linking: pinned route 201 of 216
 * bytes equal (first difference at byte 126), gnu-ee-trial 147 of 216 (first
 * difference at byte 100); pre-screen on pinned and gnu-ee-trial-divpad: 48 of 54
 * words, sdk991111 far worse.
 * Reconstructed from the retail boot. It walks a chain of GIF packets starting at
 * the tag: the quadword count of a packet is NLOOP*NREG+1 for the packed format
 * (FLG == 0, using a 64-bit multiply call) and NLOOP+1 otherwise, every quadword
 * is copied to the GIF FIFO at 0x10006000, and the walk stops after the packet
 * whose EOP bit is set.
 * Remaining difference: the quadword copy loop is scheduled differently. Retail
 * keeps the store in the loop body and fills the delay slot of a branch-likely
 * with the next load; the compiler here moves the store into the delay slot of
 * an ordinary branch and adds two nops. Everything else, including register
 * assignment, matches. Reopen when a source shape that makes the compiler pick
 * the branch-likely fill for this 128-bit copy loop is found.
 */
typedef unsigned long long u64;
typedef unsigned int QW __attribute__((mode(TI)));
typedef struct { unsigned int w[4]; } DLIB_GIFTAG;

void UTIL_GS_WRITE_FIFO__FP11DLIB_GIFTAG(DLIB_GIFTAG *tag) {
    int done = 0;
    int n;
    int i;
    while (done != 1) {
        u64 t = *(u64 *)tag;
        if ((t & 0x0C00000000000000ULL) == 0) {
            n = (int)((t & 0x7FFF) * (t >> 60) + 1);
        } else {
            n = (*(unsigned short *)tag & 0x7FFF) + 1;
        }
        {
            QW *src = (QW *)tag;
            for (i = 0; i < n; i++) {
                *(QW *)0x10006000 = src[i];
            }
        }
        if (*(u64 *)tag & 0x8000) {
            done = 1;
        } else {
            tag = (DLIB_GIFTAG *)((char *)tag + n * 16);
        }
    }
}
