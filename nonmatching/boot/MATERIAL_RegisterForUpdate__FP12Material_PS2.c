/* USA SCUS_976.15 boot: MATERIAL_RegisterForUpdate__FP12Material_PS2, 0x01E8A998.
 * Observed body: 320 bytes, it fills its interval.
 * Measured 28 November 2026: all 320 body bytes are exact after an
 * independent link at the retail address under the rebuilt default GNU route
 * and gnu-ee-trial, -O2 -G0, with the per-source SN Ps2EeAs assembler route
 * (as=ps2eeas, already pinned for other boot sources). Local exactness with
 * rebuilt tools is not qualification, promotion or C matching credit. The
 * 17 November form gave 113 of 320 bytes under the default GNU assembler.
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
 * The double comparison constant is built in integer registers by the
 * assembler: cc1 emits li.d, and Ps2EeAs expands it inline where the GNU
 * assembler uses a literal-pool load, so this was an assembler difference,
 * not a compiler one. The loop tests the second value only when the first
 * does not qualify; written with !(v > limit) it keeps the > comparison and
 * its NaN behaviour. Measured alternatives: setting the flag in each test
 * or nesting if/else (83 of 336, conditional-move form), an || test (211
 * of 328), abs as a macro, ternary or helper (46 to 56), and a <= form,
 * exact but rejected because it changes the NaN case.
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
        double v = m->e[i].a;
        if (v < 0) v = -v;
        if (!(v > 1e-5f)) {
            v = m->e[i].b;
            if (v < 0) v = -v;
            if (!(v > 1e-5f)) continue;
        }
        found = 1;
    }
    if (found && material_current < 64) D_01F7E2E0[material_current++] = m;
}
