/* USA SCUS_976.15 boot: SND_PlayATRAC__FPCcPifb, 0x01E92570.
 * Observed body: 460 bytes, followed by one zero alignment word.
 * Measured 16 November 2026: all 460 body bytes are exact after independent
 * SN linking at the retail address under gnu-ee-trial, gnu-ee-trial-divpad
 * and gnu-ee-trial-divpad-blockmove, with -O2 -G0 and the default GNU
 * assembler. The rebuilt default GNU route is not exact (it saves the
 * registers in the other order).
 * The tools are rebuilt, not hash-qualified. This is an unaccepted witness:
 * complete-program integration, boundaries, types and qualification require
 * separate review. No promotion or matching credit is claimed here.
 * Starts or refreshes an ATRAC stream: resolves the stream identifier from
 * the name when none is given, fades an instance already playing it, or
 * takes a free instance, records name, volume and identifier and starts the
 * stream from the two VAG table entries the identifier selects.
 * Source shape, each point measured:
 * - The table pointer and the base location are each the member of a
 *   record. Retail reads both after the stores into the instance, which a
 *   plain scalar global does not require; as scalars the compiler reads the
 *   table pointer before those stores and multiplies the high index first
 *   (350 of 460 equal).
 * - The base location and the two table words are read into locals before
 *   the playing mark is stored: retail stores that mark after the two table
 *   reads. Reading them inside the call's arguments stores it first.
 * The second parameter is an identifier here; its mangled type is a pointer
 * to int. The two record types are placeholders: the two globals are 8
 * bytes apart and may be members of one record.
 */
typedef struct {
    unsigned int field00;
    char name[0x5C];
    float field60;
    int pad64;
    float volume;
    unsigned char loop;
    char _pad6D[3];
    unsigned int playing;
    int field74;
    unsigned char field78;
    unsigned char field79;
    unsigned char field7A;
    unsigned char field7B;
} ATRACInstance;

typedef struct {
    int a;
    int b;
    unsigned int loc;
} VagEntry;

typedef struct { VagEntry *entries; } VagEntryTable;
typedef struct { unsigned int sector; } VagWadLocation;
extern VagEntryTable g_VagWadEntries;
extern VagWadLocation g_VAGWADLOC;
extern ATRACInstance g_AtracInstances[];
extern unsigned int SND_AtracOpen__FPCc(const char *name);
extern int SND_IsATRACPlaying__FP13ATRACInstance(ATRACInstance *p);
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(ATRACInstance *p, float start, float duration);
extern char *strncpy(char *dst, const char *src, unsigned int n);
extern void func_1E92E48(int result, long data);
extern void snd_PlayVAGStreamByLocEx_CB(int a0, int a1, int a2, int a3, int a4, int a5,
                                        int a6, int a7, int a8, int a9, int a10,
                                        long long a11);

ATRACInstance *SND_PlayATRAC__FPCcPifb(const char *name, unsigned int id, float volume, int loop) {
    ATRACInstance *p;
    ATRACInstance *end;
    ATRACInstance *slot;
    unsigned int loLoc;
    unsigned int hiLoc;
    unsigned int base;

    if (g_VagWadEntries.entries) {
        slot = 0;
        if (!id) {
            id = SND_AtracOpen__FPCc(name);
            if (!id) {
                return 0;
            }
        }
        p = g_AtracInstances;
        end = p + 2;
        do {
            if (SND_IsATRACPlaying__FP13ATRACInstance(p)) {
                if (p->field00 == id) {
                    SND_FadeATRACInstance__FP13ATRACInstanceff(p, 0.2f, 1.0f);
                    return p;
                }
            } else {
                slot = p;
            }
            p++;
        } while (p < end);
        if (slot) {
            if (name) {
                strncpy(slot->name, name, 0x50);
            } else {
                slot->name[0] = 0;
            }
            slot->volume = volume;
            slot->field60 = 0.0f;
            slot->field00 = id;
            base = g_VAGWADLOC.sector;
            loLoc = g_VagWadEntries.entries[id & 0xFFFF].loc;
            hiLoc = g_VagWadEntries.entries[id >> 16].loc;
            slot->playing = 0xFFFFFFFF;
            snd_PlayVAGStreamByLocEx_CB(
                base + (loLoc >> 11), base + (hiLoc >> 11), loLoc & 0x7FF, hiLoc & 0x7FF,
                0x400, 0, loop ? 2 : 1, 0, 0, loop ? 0 : 4,
                (int)func_1E92E48, (long long)slot);
            slot->loop = loop;
            slot->field78 = 0;
            slot->field7A = 0;
            slot->field7B = 0;
            return slot;
        }
    }
    return 0;
}
