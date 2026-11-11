/* LEVEL_01:0x0B3290 -- advances the cursor sprite of one menu slot: loads its frame, then steps the slot state machine and returns the slot's step result. */
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

extern Slot D_00327B50[];
extern Vec16 D_00327C38[];
extern int D_001FC2D8[];
extern float D_001FC2E0[];
extern int D_001FC310[];
extern int D_001FC318[];

extern void func_0AE708(int id, float zero, Vec16 *out);
extern int func_0A8680(Vec16 *p);
extern int func_0A86B0(Vec16 *p);
extern int func_0A86E0(Vec16 *p);
extern int func_0A8798(Vec16 *p);
extern void func_0AB3E0(Slot *s, short a, short b, short c, short d, unsigned int e);
extern void func_0ABC68(float a, float b, Slot *s);
extern int func_0A9878(int arg);

int func_0B3290(int idx, int arg)
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
    obj = (Vec16 *)((char *)D_00327C38 + o16);
    o4 = idx * 4;
    func_0AE708(0x6D, 0.0f, obj);
    o84 = idx * 0x54;
    slot = (Slot *)((char *)D_00327B50 + o84);
    result = 2;
    func_0AB3E0(slot, func_0A8680(obj), func_0A86B0(obj), func_0A86E0(obj), func_0A8798(obj), 0x60402020);
    flags = (unsigned int *)((char *)D_00327B50 + 0x20 + o84);
    *(int *)((char *)D_00327B50 + 0x14 + o84) = *(int *)((char *)D_001FC2D8 + o4);
    scale = (float *)((char *)D_001FC2E0 + o4);
    *flags |= 0x60;
    func_0ABC68(*scale, *scale, slot);
    if (slot->state < 2) {
        result = 0;
        *flags |= 3;
        *(int *)((char *)D_001FC310 + o4) = func_0A9878(arg);
    } else if (slot->state < 3) {
        result = 0;
    } else {
        func_0AE708(0x6E, 0.0f, obj);
        slot->pos = *obj;
        func_0ABC68(*scale, *scale, slot);
        if (slot->state < 4) {
            result = 1;
        } else {
            func_0AE708(0x6F, 0.0f, obj);
            slot->pos = *obj;
        }
    }
    D_001FC318[idx] = func_0A8798(&D_00327C38[idx]);
    D_00327B50[idx].flags &= 0xFFFFFF9F;
    return result;
}
