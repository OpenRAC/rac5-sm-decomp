/* LEVEL_18:0x0533E0 -- placement copy of LEVEL_16_0548D8.c: resets a timer field, then plays a positional sound when a sound slot is set; a second helper follows. */

extern void SND_PlayPositionalSound(void *snd, void *pos, float vol, void *pp, unsigned int flags)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

extern void *D_001A3844;
extern unsigned int D_001A2F64;

char *func_111AA0(int idx);
void func_0D3560(char *obj);

void func_0533E0(char *obj)
{
    *(float *)(obj + 0x588) = 90.00179290771484f;
    *(unsigned char *)(obj + 0x594) = *(int *)(obj + 0x584) = 1;
    if (D_001A3844 != 0) {
        SND_PlayPositionalSound(D_001A3844, obj + 0x30, 0.0f, 0, D_001A2F64);
    }
}

void func_053438(char *obj)
{
    char *p;
    char *r;

    p = obj + 0x24;
    r = func_111AA0(*(signed char *)(p + 0x32));
    *(float *)(obj + 0x0C) = *(float *)(r + 0x30) + *(float *)(p + 0x34);
    *(float *)(obj + 0x14) = *(float *)(r + 0x38) + *(float *)(p + 0x38);
    func_0D3560(obj);
}
