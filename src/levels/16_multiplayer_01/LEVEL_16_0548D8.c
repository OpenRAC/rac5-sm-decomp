/* LEVEL_16:0x0548D8 -- resets a timer field, then plays a positional sound when a sound slot is set; a second helper follows. */

extern void SND_PlayPositionalSound(void *snd, void *pos, float vol, void *pp, unsigned int flags)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

extern void *D_001A23C4;
extern unsigned int D_001A1AE4;

char *func_112CE8(int idx);
void func_0D4588(char *obj);

void func_0548D8(char *obj)
{
    *(float *)(obj + 0x588) = 90.00179290771484f;
    *(unsigned char *)(obj + 0x594) = *(int *)(obj + 0x584) = 1;
    if (D_001A23C4 != 0) {
        SND_PlayPositionalSound(D_001A23C4, obj + 0x30, 0.0f, 0, D_001A1AE4);
    }
}

void func_054930(char *obj)
{
    char *p;
    char *r;

    p = obj + 0x24;
    r = func_112CE8(*(signed char *)(p + 0x32));
    *(float *)(obj + 0x0C) = *(float *)(r + 0x30) + *(float *)(p + 0x34);
    *(float *)(obj + 0x14) = *(float *)(r + 0x38) + *(float *)(p + 0x38);
    func_0D4588(obj);
}
