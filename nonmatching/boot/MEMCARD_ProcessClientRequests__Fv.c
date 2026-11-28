/* USA SCUS_976.15 boot: MEMCARD_ProcessClientRequests__Fv, 0x01E64848.
 * Observed body: 372 bytes, followed by 4 bytes of alignment (the interval is 376).
 * Measured 28 November 2026: all 372 body bytes are exact after an independent link
 * at the retail address under the rebuilt default GNU route and gnu-ee-trial, -O2 -G0,
 * and the 15 jump-table words equal the retail table at 0x01F1C050 (offsets from the
 * function start). Local exactness with rebuilt tools is not qualification, promotion
 * or C matching credit; the table placement still needs the complete-program gate.
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
 * The four flag-test blocks stay separate when all four use the same positive form
 * (flag set: multiplayer handler; otherwise the detail handler when detail < 4) in the
 * source order 1, 3, 2, 4. Mixing polarities between the pairs lets the compiler
 * cross-jump them into two blocks (324 bytes, 81 instructions); the uniform form in
 * natural order 1, 2, 3, 4 keeps four blocks in the wrong order (333 of 372).
 * The handlers have no accepted definition yet, so their prototypes are unverified.
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
            if (memcard_multiplayer_save) func_1E645A8();
            else if ((unsigned int)CL[55] < 4) func_1E644E8(CL[55]);
            break;
        case 3:
            if (memcard_multiplayer_save) func_1E647F8();
            else if ((unsigned int)CL[55] < 4) func_1E647C0(CL[55]);
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
