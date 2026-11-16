/* USA SCUS_976.15 boot: SND_ClearListenerData__Fv, 0x01E91138.
 * Observed body: 196 bytes, followed by one zero alignment word.
 * Measured 16 November 2026: all 196 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Resets the second and third 0x50-byte
 * records of the sound state: three zero words at +0x40, the value 1 at
 * +0x4C and the identity matrix.
 * The record pointer starts at the first record and is stepped once before
 * the loop; an ascending counter that only counts drives two rounds. Retail
 * has exactly this: the address of the first record plus one element as two
 * additions, and a counter the compiler reversed to run from 1 down to 0.
 * A pointer initialised to the second record folds the two additions (188
 * bytes); a record indexed by the counter becomes an end-pointer comparison;
 * a counter written as descending puts its initialisation before the
 * pointer step (188 of 196 equal). Field names are placeholders.
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
    SND_Record *r = g_snd.records;
    int i;

    r++;
    for (i = 0; i < 2; i++) {
        r->field40 = 0;
        r->field44 = 0;
        r->field48 = 0;
        r->gain = 1.0f;
        r->matrix = g_identityMatrix;
        r++;
    }
}
