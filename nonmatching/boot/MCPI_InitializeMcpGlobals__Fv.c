/* USA SCUS_976.15 boot: MCPI_InitializeMcpGlobals__Fv, 0x01E64D38.
 * Observed body: 344 bytes; it fills its interval.
 * Measured 17 November 2026: not exact. Compiled 344 bytes under the pinned route,
 * 82/86 words equal; independent linking gives 326/344 bytes equal, first difference at byte 244 (gnu-ee-trial: 194/344, first at byte 120).
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Reconstructed from the retail boot. Initialises the memory-card global block: state
 * fields, the current thread id, two -1 slots, resets a queue, clears the callback array,
 * stores five table pointers and finally calls HEROSKIN_Init.
 * The remaining difference is only instruction scheduling: retail materialises the five
 * table address halves together before the low halves and puts the 0x10000 base addition
 * after the first pointer store; the compiled code interleaves them, and retail recomputes
 * the global base after the loop and loads the queue address low half later.
 * Reopen with a source shape that changes that address-generation order.
 */
typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    char f28;
    char pad29[0x34 - 0x29];
    char f34;
    char pad35[3];
    int f38;
    unsigned int f3C;
    int f40;
    int f44;
    int f48;
    int f4C;
    int f50;
    char pad54[0x60 - 0x54];
    int f60;
    int f64;
    int f68;
    int f6C;
    int f70;
    char f74;
    char pad75[0x174 - 0x75];
    int f174;
    int f178;
    char f17C;
    char pad17D[0x184 - 0x17D];
    int f184;
    int f188;
    int f18C;
    int f190;
    int f194;
    int f198[2];
    char pad1A0[0x1AC - 0x1A0];
    void *f1AC;
    void *f1B0;
    void *f1B4;
    void *f1B8;
    void *f1BC;
    char pad1C0[0x1C4 - 0x1C0];
    char f1C4[0x2D0 - 0x1C4];
    int f2D0;
    char pad2D4[0x3AB - 0x2D4];
    char f3AB;
    char pad3AC[0x3C0 - 0x3AC];
    char f3C0;
    char pad3C1[0x15148 - 0x3C1];
    char f15148;
} McpGlobals;

extern McpGlobals g_McpGlobals;
extern char D_01F5F814[];
extern char D_01EEDB20[];
extern char D_01EEDF20[];
extern char MCPTRANS_planetNames[];
extern char MCPTRANS_cityNames[];
extern char MCPTRANS_mpHelpHints[];
extern int GetThreadId(void);
extern void Reset__t5Queue2Z14tHUDPROMQ_NODEUi8(void *q);
extern void CB_ARRAY_Init__FP14tCB_ARRAY_DATA(void *d);
extern int HEROSKIN_Init__Fv(void);

void MCPI_InitializeMcpGlobals__Fv(void) {
    unsigned int i;

    g_McpGlobals.f0 = 3;
    g_McpGlobals.fC = 2;
    g_McpGlobals.f3AB = 0;
    g_McpGlobals.f4 = 0;
    g_McpGlobals.f10 = GetThreadId();
    g_McpGlobals.f194 = -1;
    g_McpGlobals.f18 = 0;
    g_McpGlobals.f17C = 0;
    g_McpGlobals.f6C = 0;
    g_McpGlobals.f184 = 0;
    g_McpGlobals.f188 = 0;
    g_McpGlobals.f18C = 0;
    g_McpGlobals.f190 = 0;
    for (i = 0; i < 2; i++)
        g_McpGlobals.f198[i] = -1;
    g_McpGlobals.f34 = 1;
    g_McpGlobals.f174 = -1;
    g_McpGlobals.f178 = -1;
    g_McpGlobals.f70 = 0;
    g_McpGlobals.f74 = 0;
    g_McpGlobals.f28 = 0;
    g_McpGlobals.f20 = 0;
    g_McpGlobals.f24 = 0;
    g_McpGlobals.f2D0 = 0;
    Reset__t5Queue2Z14tHUDPROMQ_NODEUi8(D_01F5F814);
    g_McpGlobals.f38 = 0;
    g_McpGlobals.f3C = 0xFFFFFFFF;
    g_McpGlobals.f40 = 0;
    g_McpGlobals.f44 = 0;
    g_McpGlobals.f68 = 0;
    g_McpGlobals.f64 = 0;
    g_McpGlobals.f60 = 0;
    g_McpGlobals.f50 = 0;
    g_McpGlobals.f4C = 0;
    g_McpGlobals.f48 = 0;
    CB_ARRAY_Init__FP14tCB_ARRAY_DATA(g_McpGlobals.f1C4);
    g_McpGlobals.f1AC = D_01EEDB20;
    g_McpGlobals.f1B0 = D_01EEDF20;
    g_McpGlobals.f1B4 = MCPTRANS_planetNames;
    g_McpGlobals.f1B8 = MCPTRANS_cityNames;
    g_McpGlobals.f1BC = MCPTRANS_mpHelpHints;
    g_McpGlobals.f15148 = 0;
    g_McpGlobals.f3C0 = 0;
    HEROSKIN_Init__Fv();
}
