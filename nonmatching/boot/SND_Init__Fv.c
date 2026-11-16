/* USA SCUS_976.15 boot: SND_Init__Fv, 0x01E90D70.
 * Observed body: 704 bytes; it fills its interval.
 * Measured 16 November 2026, -O2 -G0, default GNU assembler, independent SN
 * link at the retail address:
 * - gnu-ee-trial-divpad-blockmove: all 704 body bytes are exact.
 * - rebuilt default GNU route, gnu-ee-trial and gnu-ee-trial-divpad: 720
 *   bytes. They differ from retail only by one padding instruction before
 *   the closing branch of each of the four record-copy loops, the count
 *   the block-move profile corrects for level bodies.
 * - a private rebuild of the default route's compiler source with only that
 *   count applied (the project's block-move loop-count patch): all 704 body
 *   bytes are exact. A measurement, not a pinned profile.
 * The exact profile is qualified for level bodies only; the boot gate has
 * no route for it. This is an unaccepted trial: no complete-program gate,
 * boundary or type review, promotion or C matching credit.
 * On first call: installs the identity matrix, a zero vector and the value 1
 * in the first sound-state record, copies that record to the third and the
 * third to the second, sets the state flag, and releases the 64 positional
 * records under the array lock. Always returns 1.
 * Source shape, each point measured:
 * - The second record's address is taken before the first copy and the
 *   third record's address again after it. Retail computes the former
 *   before the first copy's alignment test and forms the latter afresh
 *   after that copy. Writing the two copies as plain record assignments
 *   derives the third record's address from the base register (420 of 704
 *   equal on the default route). A C++ chained assignment of the three
 *   records has the same order of evaluation, but no C++ front end is
 *   needed.
 * - The already-initialised case returns at once and the function ends
 *   with its own return. A single return places the result after the first
 *   register restore.
 * Field names are placeholders.
 */
typedef struct { float values[16]; } MATRIX4;
typedef struct { float x, y, z; } VEC3;
typedef struct { MATRIX4 matrix; VEC3 vector; float value_4c; } SND_Record;
typedef struct { SND_Record records[3]; int flag_f0; } SND_State;
typedef struct { char bytes[0x58]; } SND_Positional;

extern const MATRIX4 g_identityMatrix;
extern const VEC3 g_zeroVec3;
extern SND_State g_snd;
extern SND_Positional gSounds[];
extern int D_01EF69C0;
extern void SND_LockPositionalArray__Fv(void);
extern void SND_UnlockPositionalArray__Fv(void);
extern void func_1E92AB0(SND_Positional *sound);

int SND_Init__Fv(void) {
    int i;
    SND_Record *second;
    SND_Record *third;
    if (D_01EF69C0)
        return 1;
    g_snd.records[0].matrix = g_identityMatrix;
    g_snd.records[0].vector = g_zeroVec3;
    D_01EF69C0 = 1;
    g_snd.records[0].value_4c = 1.0f;
    second = &g_snd.records[1];
    g_snd.records[2] = g_snd.records[0];
    third = &g_snd.records[2];
    *second = *third;
    g_snd.flag_f0 = 1;
    SND_LockPositionalArray__Fv();
    for (i = 0; i < 64; i++)
        func_1E92AB0(&gSounds[i]);
    SND_UnlockPositionalArray__Fv();
    return 1;
}
