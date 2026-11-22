/* USA LEVEL_08.REL:0x1C9AB8, 372-byte candidate (21 November 2026).
 * Measured pinned: 17 differing words; first difference at 0x3C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float D_00279148;
extern void *D_00252060;
extern unsigned int D_0023CB38;

extern int func_187168(char *a);
extern int func_16D8C0(void *o);
extern void func_1C9868(char *object, int ref, int arg);
extern int SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

static __inline__ int Classify(char *a)
{
    int type;

    type = *(int *)(*(char **)(a + 0x40) + 0x24);
    if (type == 0x5A59F5CB || type == 0xCF5F16FF) {
        if (*(unsigned char *)(*(char **)(a + 0x58) + 0x3E) == 3 && D_00279148 <= *(float *)(*(char **)(a + 0x48) + 8)) {
            return 1;
        }
        return 0;
    }
    if (type == 0x34BED4A8) {
        return func_187168(a);
    }
    if (type == 0xA1B8379C) {
        return func_16D8C0(a);
    }
    return 0;
}

int func_1C9AB8(char *object, int *ref, char *rec, float *dir, int arg)
{
    if (*(unsigned char *)(object + 0x45) == 0) {
        if (Classify((char *)*ref)) {
            func_1C9868(object, *ref, arg);
        } else if (*(float *)(rec + 0x10) * (*(float *)(rec + 8) * dir[0] + *(float *)(rec + 0xC) * dir[1]) <= -0.06666667f) {
            SND_PlayPositionalSound(D_00252060, (float *)(object + 0x30), 0.0f, 0, D_0023CB38);
        }
    }
    return 0;
}
