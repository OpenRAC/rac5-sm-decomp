/* USA SCUS_976.15 boot: SND_PlayATRAC__FPCcPifb, 0x01E92570.
 * Observed body: 460 bytes, followed by one zero alignment word.
 * Measured 15 November 2026, -O2 -G0, default GNU assembler, independent SN
 * link at the retail address:
 * - gnu-ee-trial and gnu-ee-trial-divpad-blockmove: 460 compiled bytes, 350
 *   equal positions, first differing byte +0xE0.
 * - rebuilt default GNU route: 460 bytes, 324 equal, first byte +0x08.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Starts or refreshes an ATRAC stream: resolves the stream identifier from
 * the name when none is given, fades an instance already playing it, or
 * takes a free instance, records name, volume and identifier and starts the
 * stream from the two VAG table entries the identifier selects.
 * Control flow, calls and stores are retail's. The difference is the
 * scheduling of the twelve-argument call: retail multiplies the low index
 * first and loads the table pointer and the base location once each.
 * Naming the two table words as locals changes nothing. The second
 * parameter is an identifier here; its mangled type is a pointer to int.
 * Reopen with evidence for the original argument expressions.
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

extern VagEntry *g_VagWadEntries;
extern unsigned int g_VAGWADLOC;
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

    if (g_VagWadEntries) {
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
            slot->playing = 0xFFFFFFFF;
            snd_PlayVAGStreamByLocEx_CB(
                g_VAGWADLOC + (g_VagWadEntries[id & 0xFFFF].loc >> 11),
                g_VAGWADLOC + (g_VagWadEntries[id >> 16].loc >> 11),
                g_VagWadEntries[id & 0xFFFF].loc & 0x7FF,
                g_VagWadEntries[id >> 16].loc & 0x7FF,
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
