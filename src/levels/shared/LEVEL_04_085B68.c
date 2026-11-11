/* LEVEL_04:0x085B68 -- when a flag bit is set, stops this object's looping positional sounds and clears the bit. */
struct O085B68 {
    char pad0[0x64];
    unsigned int f64;
};

struct G085B68 {
    char pad0[0x4];
    void *f04;
    char pad08[0x4C - 0x08];
    struct O085B68 *f4C;
    void *f50;
};

extern void SND_LockPositionalArray__Fv(void) __asm__("SND_LockPositionalArray__Fv");
extern void SND_UnlockPositionalArray__Fv(void) __asm__("SND_UnlockPositionalArray__Fv");
extern unsigned int SND_GetNumPositionalSounds__Fv(void) __asm__("SND_GetNumPositionalSounds__Fv");
extern struct G085B68 *SND_GetPositionalSoundAt__FUi(unsigned int i) __asm__("SND_GetPositionalSoundAt__FUi");
extern int SND_IsLooping__FPC9GDE_Sound(void *p) __asm__("SND_IsLooping__FPC9GDE_Sound");
extern void SND_StopPositionalSound__FP14SND_Positionalb(struct G085B68 *p, int b) __asm__("SND_StopPositionalSound__FP14SND_Positionalb");

void func_085B68(struct O085B68 *self)
{
    unsigned int i;
    struct G085B68 *snd;

    if ((self->f64 & 0x00100000) != 0) {
        SND_LockPositionalArray__Fv();
        for (i = 0; i < SND_GetNumPositionalSounds__Fv(); i++) {
            snd = SND_GetPositionalSoundAt__FUi(i);
            if (snd->f4C == self && snd->f50 != 0) {
                if (SND_IsLooping__FPC9GDE_Sound(snd->f04) != 0) {
                    SND_StopPositionalSound__FP14SND_Positionalb(snd, 1);
                }
            }
        }
        SND_UnlockPositionalArray__Fv();
        self->f64 &= 0xFFEFFFFF;
    }
}
