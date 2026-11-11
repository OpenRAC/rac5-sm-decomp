/* LEVEL_23:0x0AA070 -- placement copy of LEVEL_01_0B3290.c: advances the cursor sprite of one menu slot: loads its frame, then steps the slot state machine and returns the slot's step result. */
typedef struct Vec16 {
    int w[4];
} Vec16;

typedef struct Slot {
    Vec16 pos;
    int f10;
    int f14;
    int pad_18[2];
    unsigned int flags;
    char pad_24;
    unsigned char state;
    char pad_26[0x2E];
} Slot;

extern Slot D_002F8F90[];
extern Vec16 D_002F9078[];
extern int D_001CF6D8[];
extern float D_001CF6E0[];
extern int D_001CF710[];
extern int D_001CF718[];

extern void func_0A5478(int id, float zero, Vec16 *out);
extern int func_09F3F0(Vec16 *p);
extern int func_09F420(Vec16 *p);
extern int func_09F450(Vec16 *p);
extern int func_09F508(Vec16 *p);
extern void func_0A2150(Slot *s, short a, short b, short c, short d, unsigned int e);
extern void func_0A29D8(float a, float b, Slot *s);
extern int func_0A05E8(int arg);

int func_0AA070(int idx, int arg)
{
    int o16;
    int o4;
    int o84;
    Vec16 *obj;
    Slot *slot;
    unsigned int *flags;
    float *scale;
    int result;

    o16 = idx * 0x10;
    obj = (Vec16 *)((char *)D_002F9078 + o16);
    o4 = idx * 4;
    func_0A5478(0x6D, 0.0f, obj);
    o84 = idx * 0x54;
    slot = (Slot *)((char *)D_002F8F90 + o84);
    result = 2;
    func_0A2150(slot, func_09F3F0(obj), func_09F420(obj), func_09F450(obj), func_09F508(obj), 0x60402020);
    flags = (unsigned int *)((char *)D_002F8F90 + 0x20 + o84);
    *(int *)((char *)D_002F8F90 + 0x14 + o84) = *(int *)((char *)D_001CF6D8 + o4);
    scale = (float *)((char *)D_001CF6E0 + o4);
    *flags |= 0x60;
    func_0A29D8(*scale, *scale, slot);
    if (slot->state < 2) {
        result = 0;
        *flags |= 3;
        *(int *)((char *)D_001CF710 + o4) = func_0A05E8(arg);
    } else if (slot->state < 3) {
        result = 0;
    } else {
        func_0A5478(0x6E, 0.0f, obj);
        slot->pos = *obj;
        func_0A29D8(*scale, *scale, slot);
        if (slot->state < 4) {
            result = 1;
        } else {
            func_0A5478(0x6F, 0.0f, obj);
            slot->pos = *obj;
        }
    }
    D_001CF718[idx] = func_09F508(&D_002F9078[idx]);
    D_002F8F90[idx].flags &= 0xFFFFFF9F;
    return result;
}
