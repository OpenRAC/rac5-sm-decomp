/* USA SCUS_976.15 boot: MEMCARD_ProcessClientRequests__Fv, 0x01E64848.
 * Observed body: 372 bytes, followed by 4 bytes of alignment (the interval is 376).
 * Measured 17 November 2026: 324 compiled bytes, 114 of 372 bytes equal and the
 * first differing byte at 20 (independent SN link), under the pinned and gnu-ee-trial profiles.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Reconstructed from the retail boot. When the card layer is idle it dispatches on
 * the pending client request (a 15-entry jump table): states 1-4 and 8-9 call one of
 * four handlers, choosing by the multiplayer-save flag and by whether the request
 * detail is below 4, state 12 calls a fixed handler, states 13 and 14 set the region
 * substate to 15 or 16. Afterwards, if a request is pending, it clears one field,
 * marks the layer busy, moves the request into a second field, clears it and sets
 * the operation-flow-started flag. The client pointer is reloaded after every store.
 * The pointer reload (variable held in a struct so int stores may alias it) and the
 * jump-table range (case 0 present) are reproduced. Remaining difference: retail keeps
 * four separate flag-test blocks for states 1, 3, 2 and 4 (the first two branch into
 * the handler call of the later pair), 93 instructions in all, while the compiler
 * merges the identical state pairs into two blocks (81 instructions). Polarity forms,
 * case order, early-break forms and fall-through were tried without effect.
 * Reopen when a source shape is found that keeps the identical state bodies from
 * being cross-jumped (the handler arguments, if any, are also unverified).
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
            if (!memcard_region.multiplayer) {
                if ((unsigned int)CL[55] < 4) func_1E644E8(CL[55]);
            } else func_1E645A8();
            break;
        case 2:
            if (memcard_region.multiplayer) func_1E645A8();
            else if ((unsigned int)CL[55] < 4) func_1E644E8(CL[55]);
            break;
        case 3:
            if (!memcard_region.multiplayer) {
                if ((unsigned int)CL[55] < 4) func_1E647C0(CL[55]);
            } else func_1E647F8();
            break;
        case 4:
            if (memcard_region.multiplayer) func_1E647F8();
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
