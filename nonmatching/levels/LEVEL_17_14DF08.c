/* LEVEL_17.REL:0x14DF08: reviewed 180-byte candidate, held for ABI review.
 * Sets a state record from a source pointer, then plays a positional sound.
 * pinned C with gnu-ee-trial links 180/180 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_037A48 returning void with (pointer, pointer), but the
 * accepted LEVEL_17_037A48.c defines it returning void with (pointer, int).
 * It declares func_16A7A8 returning void with (pointer, pointer), but the
 * accepted LEVEL_17_16A7A8.c defines it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void *D_001B11AC;
extern int D_001950E4;

extern void func_037A48(void *a0, void *a1);
extern void func_16A7A8(void *a0, void *a1);
extern void func_116C28(void *a0);
extern void SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi(void *snd, void *pos, float f, void *pp, unsigned int u);

void func_14DF08(void *a0, void *a1)
{
    unsigned char *obj = (unsigned char *)a0;
    unsigned char *rec = *(unsigned char **)(obj + 0x58);

    if (a1 != 0) {
        func_037A48(a1, a0);
        if (obj[0x45] == 3) {
            func_16A7A8(*(void **)(rec + 4), a0);
            *(int *)(rec + 4) = 0;
        }
        *(void **)rec = a1;
        obj[0x45] = 1;
        func_116C28(a1);
        *(int *)(rec + 0x34) = 0;
        *(int *)(rec + 0x40) = *(int *)(rec + 0x40) | 1;
    }
    if (D_001B11AC != 0) {
        SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi(D_001B11AC, obj + 0x30, 0.0f, 0, D_001950E4);
    }
    rec[0x49] = 0;
}
