/*
 * USA boot (SCUS_976.15), address-based candidate func_1E92B40,
 * proposed body 0x01E92B40..0x01E92D70 (560 bytes).
 *
 * Local SN-linked comparison: 560/560 bytes with rebuilt GNU EE
 * gnu-ee-trial-divpad, -O2 -G0. That profile is documented for levels;
 * its use at this boot placement is experimental, not a qualified route.
 * This source is not accepted C. Promotion requires profile-scope review,
 * pinned-tool complete-program qualification and semantic boundary/ABI review.
 * Default rebuilt GNU control: 552 compiled bytes, 453 equal bytes in the
 * 552-byte compared prefix, first byte difference +0x10. Reopen integration
 * after a narrowly reviewed boot profile extension and full qualification;
 * do not replace the global compiler route to accommodate this body.
 * The following eight bytes remain unassigned in the assembly baseline.
 *
 * The two observed callers pass one pointer and ignore the return value,
 * iterating 64 records with stride 0x58. Fields name observed offsets only;
 * the handle is reconstructed as a 32-bit unsigned value with an all-ones
 * sentinel. The callback's long parameter is a target-specific 64-bit carrier,
 * not a recovered original declaration. Driver declarations follow the
 * accepted word-based API; original signedness and field semantics remain
 * provisional. Callback and record addresses are passed as target-sized words.
 *
 * Blocker 09's existing profile reproduces the observed division spacing. The
 * unsigned sentinel, separate volume lifetimes and output initialization
 * order reproduce this body without instruction injection. Keep these local
 * views separate from other provisional record layouts pending reconciliation.
 */
typedef struct SND_Positional {
    int state;
    void *sound;
    unsigned int result;
    char pad0c[4];
    struct SND_Positional **link;
    float field14;
    float field18;
    unsigned char field1c;
    unsigned char field1d;
    unsigned char field1e;
    unsigned char field1f;
    unsigned char field20;
    unsigned char field21;
    unsigned char field22;
    char pad23;
    float position[3];
    float field30;
    float field34;
    float field38;
    float field3c;
    float field40;
    float field44;
    float field48;
    int field4c;
    int field50;
    unsigned char field54;
    char pad55[3];
} SND_Positional;

typedef char B40_record_size_is_0x58[sizeof(SND_Positional) == 0x58 ? 1 : -1];
typedef char B40_userdata_is_64[sizeof(long) == 8 ? 1 : -1];

extern void snd_StopSound(int);
extern void snd_PauseSound(int);
extern void func_1E92DE8(int, long);
extern void snd_SoundIsStillPlaying_CB(int, int, int);
extern int func_1E92E98(float);
extern int func_1E92F40(float);
extern void func_1E92FC0(SND_Positional *, int *, int *);
extern void snd_SetSoundParams_A(int, int, int, int, int, int);

void func_1E92B40(SND_Positional *p)
{
    int pitch;
    float ratio, filtered, multiplier;

    if (!p)
        return;
    if (p->field1e == 1) {
        snd_StopSound(p->result);
        p->field1e = 0;
    }
    if (p->field1d == 1) {
        if (p->field1c != 0)
            snd_PauseSound(p->result);
        p->field1d = 0;
    }
    if (p->state == 6) {
        if (p->result != 0xFFFFFFFFu && p->field1f == 0) {
            p->field1f = 1;
            snd_SoundIsStillPlaying_CB(p->result, (int)func_1E92DE8, (int)p);
        }
    } else if (p->state == 3 && p->result != 0xFFFFFFFFu) {
        if (p->field1f == 0) {
            p->field1f = 1;
            snd_SoundIsStillPlaying_CB(p->result, (int)func_1E92DE8, (int)p);
        }
        if (p->field22) {
            int volume;
            volume = func_1E92E98(p->field14 * 0.8935546875f);
            pitch = func_1E92F40(p->field18);
            snd_SetSoundParams_A(p->result, 9, volume, 0, pitch, 0);
        } else if (p->field20) {
            int volume, pan;
            pan = 0;
            volume = 0;
            func_1E92FC0(p, &volume, &pan);
            ratio = p->field18;
            if (p->field21) {
                filtered = p->field38 - (p->field38 - (p->field30 - p->field34) * 30.0f) * 0.1f;
                p->field34 = p->field30;
                p->field38 = filtered;
                multiplier = (p->field44 * 250.0f) / (filtered + 250.0f);
                if (multiplier > 1.0f + p->field48)
                    multiplier = 1.0f + p->field48;
                if (multiplier < 1.0f - p->field48)
                    multiplier = 1.0f - p->field48;
                ratio *= multiplier;
            }
            pitch = func_1E92F40(ratio);
            snd_SetSoundParams_A(p->result, 13, volume, pan, pitch, 0);
        }
    }
}
