/* USA SCUS_976.15 boot: CAMERA_SetCurrentCamera__FUi, 0x01E68A78.
 * Observed body: 32 bytes through its return. The next-label interval is 56
 * bytes; the 24 bytes after the return are nonzero and are not claimed.
 * Measured 15 November 2026: all 32 body bytes are exact after independent
 * SN linking at the retail address under both the rebuilt default GNU route
 * and gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot: selects one of the 0x118-byte camera
 * records at 0x01F61BC0, which has no name in the symbol table. camera_state
 * is the word at 0x01EDE330 that accepted sources call camera_current,
 * declared as the member of a record so that later member stores reload it
 * (blocker 05); a plain pointer declaration gives the same 32 bytes here.
 */
typedef struct {
    unsigned char bytes[0x118];
} tCAMERA;

typedef struct {
    tCAMERA *current;
} tCAMERA_STATE;

extern tCAMERA D_01F61BC0[];
extern tCAMERA_STATE camera_state;

void CAMERA_SetCurrentCamera__FUi(unsigned int index) {
    camera_state.current = &D_01F61BC0[index];
}