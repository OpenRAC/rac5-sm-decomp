/* USA SCUS_976.15 boot: HEROSKIN_Init__Fv, 0x01E65A18.
 * Observed body: 380 bytes, followed by one alignment word inside its 384-byte interval.
 * Measured 17 November 2026: all 380 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. It prepares the hero-skin name tables:
 * for 7 entries of the first table and 13 entries of the second table it
 * hashes names with SIG_CalcCaseInsensitiveSignature (only when the entry's own
 * name pointer is set, but the hashed string is read from the parallel source
 * table, as in retail), clears the result slots, then publishes both tables and
 * resets the state byte to -1 in the global block.
 * What mattered: naming the end pointer of each outer loop in its own variable
 * (aend, bend), and an unsigned counter for the three-slot inner loop so the
 * bound check is an unsigned compare. The table pointers sit at 0x2D4 and
 * 0x2D8, inside the padding the accepted HeroSkin sources leave ahead of the
 * single-player pointer at 0x2DC.
 * Layout check, 25 November 2026 (master ef75f8a07): the state byte at
 * 0x2E0 is signed char, as in the accepted HEROSKIN_TermSinglePlayer__Fv,
 * which also stores -1 into it with a byte store. The accepted
 * HEROSKIN_InitSinglePlayer__Fv declares that member int but never reads or
 * writes it. Remeasured with signed char: still 380/380 on both routes.
 */
typedef struct {
    int pad0;
    int pad4;
    const char *name;
    unsigned int sig;
    int f10;
    int f14;
} HsEntryA;
typedef struct {
    char pad[0x10];
    const char *name10;
    const char *names[3];
    unsigned int sig10;
    unsigned int sigs[3];
    int f30;
    int f34[3];
} HsEntryB;
typedef struct {
    char pad[0x2D4];
    HsEntryA *tabA;
    HsEntryB *tabB;
    void *singlePlayer;
    signed char state2E0;
} tHeroSkin;

extern tHeroSkin g_McpGlobals;
extern HsEntryA D_01EDCC10[7];
extern HsEntryA D_01EDC828[7];
extern HsEntryB D_01EDCCB8[13];
extern HsEntryB D_01EDC8D0[13];
extern unsigned int SIG_CalcCaseInsensitiveSignature__FPCc(const char *);

void HEROSKIN_Init__Fv(void) {
    HsEntryA *a;
    HsEntryA *sa;
    HsEntryB *b;
    HsEntryB *sb;
    unsigned int k;
    HsEntryA *aend;
    HsEntryB *bend;
    sa = D_01EDC828;
    a = D_01EDCC10;
    aend = a + 7;
    for (; a < aend; a++, sa++) {
        a->sig = a->name ? SIG_CalcCaseInsensitiveSignature__FPCc(sa->name) : 0;
        a->f10 = 0;
        a->f14 = 0;
    }
    sb = D_01EDC8D0;
    b = D_01EDCCB8;
    bend = b + 13;
    for (; b < bend; b++, sb++) {
        b->sig10 = SIG_CalcCaseInsensitiveSignature__FPCc(sb->name10);
        b->f30 = 0;
        for (k = 0; k < 3; k++) {
            b->sigs[k] = b->names[k] ? SIG_CalcCaseInsensitiveSignature__FPCc(sb->names[k]) : 0;
            b->f34[k] = 0;
        }
    }
    g_McpGlobals.tabA = D_01EDCC10;
    g_McpGlobals.tabB = D_01EDCCB8;
    g_McpGlobals.singlePlayer = 0;
    g_McpGlobals.state2E0 = -1;
}
