/* USA LEVEL_04.REL:0x19B810, 180-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 2 differing words; first difference at 0x3C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern char *D_00221E34;
extern int D_0020D138;
extern char *D_00221E2C;

void SND_PlayPositionalSound(void *snd, void *pos, float vol, void *pp, unsigned int flags)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_0F6E68(int a0, char *a1);
void func_1D5200(char *a0, int a1, char *a2, int a3, float f12, float f13, float f14, int t0);
void func_07FAE8(char *obj, int a1);

void func_19B810(char *obj)
{
    char *s2;
    char *g;
    unsigned int flags;

    s2 = *(char **)(obj + 0x58);
    func_0F6E68(0, obj + 0x30);
    flags = D_0020D138;
    SND_PlayPositionalSound(D_00221E34, obj + 0x30, 0.0f, 0, flags);
    g = D_00221E2C;
    func_1D5200(*(char **)(*(char **)(g + 0x54) + 0x20) ,
                *(int *)(s2 + 0x38), obj + 0x30, *(int *)(s2 + 0x38),
                2.0f, 1.0f, 0.0f, 0);
    func_07FAE8(obj, 1);
}
