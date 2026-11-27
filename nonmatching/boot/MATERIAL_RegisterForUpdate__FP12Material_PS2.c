/* USA SCUS_976.15 boot: MATERIAL_RegisterForUpdate__FP12Material_PS2, 0x01E8A998.
 * Observed body: 320 bytes, it fills its interval.
 * Measured 17 November 2026 under the rebuilt default GNU route and
 * gnu-ee-trial (independent SN link at the retail address): 320 bytes
 * compiled, 113 of 320 bytes equal at the same position, first differing
 * byte 38. Not exact; no complete-program gate, promotion or C matching credit.
 * Reconstructed from the retail boot. It scans the per-material float pairs
 * (stride 0x3C, count at +0x6C): when the absolute value of either float,
 * widened to double, is above the float 1e-5, the material is appended to the
 * update list (64 slots) and the list counter is incremented. The second value
 * of a pair is only examined when the first one did not qualify. The double
 * arithmetic goes through the soft-float library (fptodp, dpcmp, dpsub) in
 * both retail and our output.
 * The counter material_current is compared unsigned here (sltiu in retail);
 * the accepted MATERIAL_Init source declares it int. Checked 25 November
 * 2026: the boot program accesses that word in only these two functions;
 * MATERIAL_Init only stores zero, which is the same for either type, so this
 * comparison is the only evidence of its signedness.
 * Remaining difference in words: retail builds the double comparison constant
 * in integer registers before each comparison call, while our output loads it
 * from memory; retail sets the found flag with a likely branch where ours uses
 * a conditional move held in an extra saved register, which shifts the frame
 * by one save slot. Writing the library calls explicitly with the constant as
 * a 64-bit integer reaches 282 of 320 equal bytes, but needs prototypes that
 * contradict the accepted dpcmp source and was not kept.
 * Reopen when a profile or flag that keeps double constants in integer
 * registers for a soft-float double comparison is measured for this boot.
 */
typedef struct {
    float a;
    float b;
    char pad[0x34];
} MatEntry;
typedef struct {
    char pad0[0x6C];
    unsigned int count;
    char pad1[0x2C];
    MatEntry e[1];
} Material_PS2;

extern unsigned int material_current;
extern Material_PS2 *D_01F7E2E0[64];

void MATERIAL_RegisterForUpdate__FP12Material_PS2(Material_PS2 *m) {
    int found = 0;
    unsigned int i;
    for (i = 0; i < m->count; i++) {
        double a = m->e[i].a;
        double b;
        if (a < 0) a = -a;
        if (a > 1e-5f) {
            found = 1;
            continue;
        }
        b = m->e[i].b;
        if (b < 0) b = -b;
        if (b > 1e-5f) found = 1;
    }
    if (found && material_current < 64) D_01F7E2E0[material_current++] = m;
}
