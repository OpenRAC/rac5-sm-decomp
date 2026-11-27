/* USA SCUS_976.15 boot: MEMCARD_ProcessClientRequests__Fv, 0x01E64848.
 * Observed body: 372 bytes, followed by 4 bytes of alignment (the interval is 376).
 * Measured 26 November 2026: 324 compiled bytes (81 instructions against 93), 114 of 372
 * bytes equal and the first differing byte at 20 (independent SN link), under the
 * pinned and gnu-ee-trial profiles.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Reconstructed from the retail boot. When the card layer is idle it dispatches on
 * the pending client request (a 15-entry jump table): states 1 and 2 call the
 * first handler pair and states 3 and 4 the second pair, choosing by the
 * multiplayer-save flag; without the flag the handler is called only when the request
 * detail (client word 55) is below 4, and it receives that detail. States 8 and 9 do the
 * same without the flag test, state 12 calls a fixed handler, states 13 and 14 set the
 * region substate to 15 or 16. Afterwards, if a request is pending, it clears one field,
 * marks the layer busy, moves the request into a second field, clears it and sets
 * the operation-flow-started flag. The client pointer is reloaded after every store.
 * The pointer reload (variable held in a struct so int stores may alias it) and the
 * jump-table range (case 0 present) are reproduced. The handler arguments were checked
 * against the retail body: the four flag-test blocks pass the same detail value, so the
 * bodies really are identical per pair. The flag is the accepted global
 * memcard_multiplayer_save (0x01F4A65F); it is ordinary memory here, not volatile.
 * Remaining difference: retail keeps four separate flag-test blocks, in the order of
 * states 1, 3, 2, 4 (states 1 and 3 test with the call as the branch target and fall into
 * a jump to the state 8 or 9 body, states 2 and 4 with the call falling through), 93
 * instructions in all, while the compiler cross-jumps the identical state pairs into two
 * test blocks (81 instructions). Polarity forms (both assignments to the pairs), case order 1,3,2,4,
 * early-break forms, fall-through, goto into the state 8/9 bodies, int-returning handler
 * declarations and a separate flag global were tried without effect.
 * Reopen when a source shape is found that keeps the test blocks of states 1 and 3 from
 * being merged into those of 2 and 4; the handlers have no accepted definition yet, so
 * their prototypes are unverified.
 */
typedef struct {
    unsigned char pad[0x14];
    int busy;
    unsigned char pad18[3];
    unsigned char substate;
    unsigned char pad1C[3];
    unsigned char multiplayer;
} tMemcardRegion;


extern tMemcardRegion memcard_region;
extern unsigned char memcard_multiplayer_save;
typedef struct { int client; } tMemcardClientRef;
extern tMemcardClientRef memcard_unk1EDC7B8;
extern unsigned char memcard_opFlowStarted;
#define CL ((int *)memcard_unk1EDC7B8.client)
extern int MEMCARD_Idle__Fv(void);
extern void func_1E645A8(void);
extern void func_1E647F8(void);
extern void func_1E644E8(unsigned int);
extern void func_1E647C0(unsigned int);
extern void func_1E644B0(void);

void MEMCARD_ProcessClientRequests__Fv(void) {
    if (MEMCARD_Idle__Fv()) {
        switch (CL[1]) {
        case 0:
            break;
        case 1:
            if (!memcard_multiplayer_save) {
                if ((unsigned int)CL[55] < 4) func_1E644E8(CL[55]);
            } else func_1E645A8();
            break;
        case 3:
            if (!memcard_multiplayer_save) {
                if ((unsigned int)CL[55] < 4) func_1E647C0(CL[55]);
            } else func_1E647F8();
            break;
        case 2:
            if (memcard_multiplayer_save) func_1E645A8();
            else if ((unsigned int)CL[55] < 4) func_1E644E8(CL[55]);
            break;
        case 4:
            if (memcard_multiplayer_save) func_1E647F8();
            else if ((unsigned int)CL[55] < 4) func_1E647C0(CL[55]);
            break;
        case 8:
            if ((unsigned int)CL[55] < 4) func_1E644E8(CL[55]);
            break;
        case 9:
            if ((unsigned int)CL[55] < 4) func_1E647C0(CL[55]);
            break;
        case 12:
            func_1E644B0();
            break;
        case 13:
            memcard_region.substate = 15;
            break;
        case 14:
            memcard_region.substate = 16;
            break;
        }
        if (CL[1] != 0) {
            CL[43] = 0;
            memcard_region.busy = 1;
            CL[44] = CL[1];
            CL[1] = 0;
            memcard_opFlowStarted = 1;
        }
    }
}
