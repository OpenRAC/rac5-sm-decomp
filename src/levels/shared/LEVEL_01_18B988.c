/* LEVEL_01:0x18B988 -- clears the slot of a positional sound emitter and stops its sound. */

struct SndSlot18B988 {
    int f00;
    char pad04[8];
    void *p0C;
};

struct SndEmitter18B988 {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x58 - 0x46];
    struct SndSlot18B988 *p58;
    char pad5C[0x64 - 0x5C];
    int f64;
};

extern void SND_StopPositionalSound(void *p, int b)
    __asm__("SND_StopPositionalSound__FP14SND_Positionalb");

void func_18B988(struct SndEmitter18B988 *e)
{
    struct SndSlot18B988 *s;

    if (e->f64 & 1) {
        s = e->p58;
        s->f00 = 0;
        e->b45 = 4;
        if (s->p0C != 0) {
            SND_StopPositionalSound(s->p0C, 1);
            s->p0C = 0;
        }
    }
}
