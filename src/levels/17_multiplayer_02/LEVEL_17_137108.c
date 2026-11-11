/* LEVEL_17:0x137108 -- placement copy of LEVEL_16_13B6F8.c: when the object is active, spawns a linked record carrying its position and slot data. */

extern char D_001D5390[];

extern void func_137A10(char *a0, int a1, int a2);
extern void func_176B98(char *a0);
extern char *func_111F10(float *a0, int a1);
extern char *func_137240(char *a0, unsigned char *a1, char *a2);
extern char *func_021A90(unsigned int a0, int a1);
extern void func_137398(char *a0, int a1, int a2, int a3);

static __inline__ void Copy4(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

int func_137108(char *obj, int a1, int a2, int a3)
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
        func_137A10(obj, 4, 0);
        func_176B98(obj);
    }
    pos = (float *)(obj + 0x30);
    def = func_111F10(pos, 0);
    if (def == 0) {
        def = D_001D5390;
    }
    spawn = func_137240(obj, &slot, def);
    info = func_021A90(slot, *(int *)(def + 0xF8));
    if (spawn != 0) {
        link = *(char **)(spawn + 0x54);
        link[0x19] = info[0x3C];
        link[0x18] = slot;
        Copy4((float *)(spawn + 0x30), pos);
        *(float *)(spawn + 0x34) += 0.2f;
    }
    func_137398(obj, a1, (int)spawn, a3);
    return 1;
}
