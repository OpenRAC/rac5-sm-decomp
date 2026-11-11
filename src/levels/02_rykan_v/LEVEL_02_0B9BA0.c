/* LEVEL_02:0x0B9BA0 -- placement copy of LEVEL_01_0B3290.c: advances the cursor sprite of one menu slot: loads its frame, then steps the slot state machine and returns the slot's step result. */
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

extern Slot D_0033F050[];
extern Vec16 D_0033F138[];
extern int D_00211298[];
extern float D_002112A0[];
extern int D_002112D0[];
extern int D_002112D8[];

extern void func_0B5018(int id, float zero, Vec16 *out);
extern int func_0AEF90(Vec16 *p);
extern int func_0AEFC0(Vec16 *p);
extern int func_0AEFF0(Vec16 *p);
extern int func_0AF0A8(Vec16 *p);
extern void func_0B1CF0(Slot *s, short a, short b, short c, short d, unsigned int e);
extern void func_0B2578(float a, float b, Slot *s);
extern int func_0B0188(int arg);

int func_0B9BA0(int idx, int arg)
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
    obj = (Vec16 *)((char *)D_0033F138 + o16);
    o4 = idx * 4;
    func_0B5018(0x6D, 0.0f, obj);
    o84 = idx * 0x54;
    slot = (Slot *)((char *)D_0033F050 + o84);
    result = 2;
    func_0B1CF0(slot, func_0AEF90(obj), func_0AEFC0(obj), func_0AEFF0(obj), func_0AF0A8(obj), 0x60402020);
    flags = (unsigned int *)((char *)D_0033F050 + 0x20 + o84);
    *(int *)((char *)D_0033F050 + 0x14 + o84) = *(int *)((char *)D_00211298 + o4);
    scale = (float *)((char *)D_002112A0 + o4);
    *flags |= 0x60;
    func_0B2578(*scale, *scale, slot);
    if (slot->state < 2) {
        result = 0;
        *flags |= 3;
        *(int *)((char *)D_002112D0 + o4) = func_0B0188(arg);
    } else if (slot->state < 3) {
        result = 0;
    } else {
        func_0B5018(0x6E, 0.0f, obj);
        slot->pos = *obj;
        func_0B2578(*scale, *scale, slot);
        if (slot->state < 4) {
            result = 1;
        } else {
            func_0B5018(0x6F, 0.0f, obj);
            slot->pos = *obj;
        }
    }
    D_002112D8[idx] = func_0AF0A8(&D_0033F138[idx]);
    D_0033F050[idx].flags &= 0xFFFFFF9F;
    return result;
}
