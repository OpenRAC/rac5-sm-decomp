/* USA SCUS_976.15 boot: UTIL_GS_WRITE_FIFO__FP11DLIB_GIFTAG, 0x01E84050.
 * Observed body: 216 bytes, it fills its interval.
 * Measured 26 November 2026: all 216 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route, with
 * -O2 -G0 and the default GNU assembler (gnu-ee-trial: 159/216, first
 * difference at byte 100). The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. It walks a chain of GIF packets starting at
 * the tag: the quadword count of a packet is NLOOP*NREG+1 for the packed format
 * (FLG == 0, using a 64-bit multiply call) and NLOOP+1 otherwise, every quadword
 * is copied to the GIF FIFO at 0x10006000, and the walk stops after the packet
 * whose EOP bit is set.
 * The source shape that mattered: the FIFO is a hardware register, so the store
 * is through a volatile quadword lvalue. That keeps the store out of the branch
 * delay slot and lets the compiler fill a branch-likely with the next load.
 * Accepted boot sources access the 0x1000xxxx hardware registers the same way.
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
                *(volatile QW *)0x10006000 = src[i];
            }
        }
        if (*(u64 *)tag & 0x8000) {
            done = 1;
        } else {
            tag = (DLIB_GIFTAG *)((char *)tag + n * 16);
        }
    }
}
