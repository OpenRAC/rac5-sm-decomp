/* USA SCUS_976.15 boot: SND_Init__Fv, 0x01E90D70.
 * Observed body: 704 bytes; it fills its interval.
 * Measured 15 November 2026, -O2 -G0, default GNU assembler, independent SN
 * link at the retail address:
 * - rebuilt default GNU route: 704 compiled bytes, 420 equal positions,
 *   first differing byte +0x2A.
 * - gnu-ee-trial-divpad-blockmove: 688 bytes, 328 equal, first byte +0x14.
 *   Only this profile emits retail's alignment-tested record-copy loops.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * On first call: installs the identity matrix, a zero vector and the value 1
 * in the first sound-state record, copies that record to the third and the
 * third to the second, sets the state flag, and releases the 64 positional
 * records under the array lock. Always returns 1.
 * Retail computes the second record's address before the first copy's
 * alignment test and reads the third record back through its own address.
 * A chained assignment of the three records, compiled by a C++ front end,
 * has that structure; the C front ends copy the first record to both.
 * Reopen when a C++ front end is qualified for boot sources, or with a C
 * form that evaluates the second record's address before the first copy.
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
    if (!D_01EF69C0) {
        g_snd.records[0].matrix = g_identityMatrix;
        g_snd.records[0].vector = g_zeroVec3;
        D_01EF69C0 = 1;
        g_snd.records[0].value_4c = 1.0f;
        g_snd.records[2] = g_snd.records[0];
        g_snd.records[1] = g_snd.records[2];
        g_snd.flag_f0 = 1;
        SND_LockPositionalArray__Fv();
        for (i = 0; i < 64; i++)
            func_1E92AB0(&gSounds[i]);
        SND_UnlockPositionalArray__Fv();
    }
    return 1;
}
