/* LEVEL_07:0x0B52F0 -- placement copy of LEVEL_01_0B3290.c: advances the cursor sprite of one menu slot: loads its frame, then steps the slot state machine and returns the slot's step result. */
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

extern Slot D_0033D450[];
extern Vec16 D_0033D538[];
extern int D_002105D8[];
extern float D_002105E0[];
extern int D_00210610[];
extern int D_00210618[];

extern void func_0B0708(int id, float zero, Vec16 *out);
extern int func_0AA680(Vec16 *p);
extern int func_0AA6B0(Vec16 *p);
extern int func_0AA6E0(Vec16 *p);
extern int func_0AA798(Vec16 *p);
extern void func_0AD3E0(Slot *s, short a, short b, short c, short d, unsigned int e);
extern void func_0ADC68(float a, float b, Slot *s);
extern int func_0AB878(int arg);

int func_0B52F0(int idx, int arg)
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
    obj = (Vec16 *)((char *)D_0033D538 + o16);
    o4 = idx * 4;
    func_0B0708(0x6D, 0.0f, obj);
    o84 = idx * 0x54;
    slot = (Slot *)((char *)D_0033D450 + o84);
    result = 2;
    func_0AD3E0(slot, func_0AA680(obj), func_0AA6B0(obj), func_0AA6E0(obj), func_0AA798(obj), 0x60402020);
    flags = (unsigned int *)((char *)D_0033D450 + 0x20 + o84);
    *(int *)((char *)D_0033D450 + 0x14 + o84) = *(int *)((char *)D_002105D8 + o4);
    scale = (float *)((char *)D_002105E0 + o4);
    *flags |= 0x60;
    func_0ADC68(*scale, *scale, slot);
    if (slot->state < 2) {
        result = 0;
        *flags |= 3;
        *(int *)((char *)D_00210610 + o4) = func_0AB878(arg);
    } else if (slot->state < 3) {
        result = 0;
    } else {
        func_0B0708(0x6E, 0.0f, obj);
        slot->pos = *obj;
        func_0ADC68(*scale, *scale, slot);
        if (slot->state < 4) {
            result = 1;
        } else {
            func_0B0708(0x6F, 0.0f, obj);
            slot->pos = *obj;
        }
    }
    D_00210618[idx] = func_0AA798(&D_0033D538[idx]);
    D_0033D450[idx].flags &= 0xFFFFFF9F;
    return result;
}
