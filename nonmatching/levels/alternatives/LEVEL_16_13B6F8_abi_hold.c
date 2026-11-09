/* LEVEL_16.REL:0x13B6F8: reviewed 308-byte candidate, held for ABI review.
 * When the object is active, spawns a linked record carrying its position and
 * slot data.
 * pinned C with gnu-ee-trial links 308/308 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_001E4090[];

extern void func_13C000(char *a0, int a1, int a2);
extern void func_183550(char *a0);
extern char *func_112998(float *a0, int a1);
extern char *func_13B830(char *a0, unsigned char *a1, char *a2);
extern char *func_022110(unsigned int a0, int a1);
extern void func_13B988(char *a0, int a1, int a2, int a3);

static __inline__ void Copy4(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

int func_13B6F8(char *obj, int a1, int a2, int a3)
{
    unsigned char slot;
    float *pos;
    char *def;
    char *spawn;
    char *info;
    char *link;

    slot = 0;
    if ((*(unsigned int *)(obj + 0x64) & 1) == 0) {
        return 0;
    }
    if (a2 == 0) {
        func_13C000(obj, 4, 0);
        func_183550(obj);
    }
    pos = (float *)(obj + 0x30);
    def = func_112998(pos, 0);
    if (def == 0) {
        def = D_001E4090;
    }
    spawn = func_13B830(obj, &slot, def);
    info = func_022110(slot, *(int *)(def + 0xF8));
    if (spawn != 0) {
        link = *(char **)(spawn + 0x54);
        link[0x19] = info[0x3C];
        link[0x18] = slot;
        Copy4((float *)(spawn + 0x30), pos);
        *(float *)(spawn + 0x34) += 0.2f;
    }
    func_13B988(obj, a1, (int)spawn, a3);
    return 1;
}
