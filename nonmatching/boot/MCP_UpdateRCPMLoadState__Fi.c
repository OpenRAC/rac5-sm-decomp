/* USA SCUS_976.15 boot: MCP_UpdateRCPMLoadState__Fi, 0x01E674C0.
 * Observed body: 164 bytes, followed by one alignment word; the rest of the
 * 448-byte interval holds other routines (not covered here).
 * Measured 26 November 2026: all 164 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Selects which player wad is resident for
 * the given state. States 0x10..0x14 want the secondary player wad: when it is
 * not loaded yet the single player skin is terminated, the current player wad
 * released, wad 2 loaded and the loaded flag set. Any other state clears the
 * flag (releasing the wad) and, when the level index is positive, loads wad 1
 * and initialises the single player skin. Returns 1, or 0 when that skin
 * initialisation fails.
 * The flag is cleared before the release call is made (retail stores it in the
 * call delay slot); the level index is a signed int here (signed compare), unlike
 * the unsigned declaration in the accepted MCP_StartLevelModule__Fv.
 */
extern int D_01EDDAF0;
extern int g_level_index;
extern void HEROSKIN_TermSinglePlayer__Fv(void);
extern int HEROSKIN_InitSinglePlayer__Fv(void);
extern void GLOBALWAD_ReleasePlayerWad__Fv(void);
extern int GLOBALWAD_LoadPlayerWad__F13PlayerWadType(int type);

int MCP_UpdateRCPMLoadState__Fi(int state) {
    if ((unsigned int)(state - 0x10) < 5) {
        if (D_01EDDAF0 == 0) {
            HEROSKIN_TermSinglePlayer__Fv();
            GLOBALWAD_ReleasePlayerWad__Fv();
            GLOBALWAD_LoadPlayerWad__F13PlayerWadType(2);
            D_01EDDAF0 = 1;
        }
        return 1;
    }
    if (D_01EDDAF0 != 0) {
        D_01EDDAF0 = 0;
        GLOBALWAD_ReleasePlayerWad__Fv();
    }
    if (g_level_index > 0) {
        GLOBALWAD_LoadPlayerWad__F13PlayerWadType(1);
        if (HEROSKIN_InitSinglePlayer__Fv() == 0) {
            return 0;
        }
    }
    return 1;
}
