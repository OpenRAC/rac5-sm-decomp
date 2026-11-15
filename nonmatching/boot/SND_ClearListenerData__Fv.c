/* USA SCUS_976.15 boot: SND_ClearListenerData__Fv, 0x01E91138.
 * Observed body: 196 bytes, followed by one zero alignment word.
 * Measured 15 November 2026 with the rebuilt default GNU route, gnu-ee-trial
 * and gnu-ee-trial-divpad-blockmove, -O2 -G0, default GNU assembler and
 * independent SN link at the retail address: 196 compiled bytes, 188 equal
 * positions, first differing byte +0x10. The three routes agree.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Resets the second and third 0x50-byte records of the sound state: three
 * zero words at +0x40, the value 1 at +0x4C and the identity matrix.
 * Retail keeps a counter running from 1 down to 0 next to a pointer that
 * starts at the first record plus one element, computed as two additions.
 * A descending index reproduces both; the remaining difference is the order
 * of two loop initialisations (the counter before the pointer here). An
 * ascending index is replaced by an end-pointer comparison, and a pointer
 * initialised to the second record folds the two additions into one.
 * Reopen with a loop form that initialises the pointer first.
 */
typedef struct { float elements[16]; } MATRIX4;
typedef struct {
    MATRIX4 matrix;
    int field40;
    int field44;
    int field48;
    float gain;
} SND_Record;
typedef struct {
    SND_Record records[3];
    int flag_f0;
} SND_State;
extern SND_State g_snd;
extern MATRIX4 g_identityMatrix;

void SND_ClearListenerData__Fv(void)
{
    int i;

    for (i = 1; i >= 0; i--) {
        SND_Record *r = &g_snd.records[2 - i];

        r->field40 = 0;
        r->field44 = 0;
        r->field48 = 0;
        r->gain = 1.0f;
        r->matrix = g_identityMatrix;
    }
}
