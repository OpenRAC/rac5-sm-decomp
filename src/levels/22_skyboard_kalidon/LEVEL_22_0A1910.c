/* LEVEL_22:0x0A1910 -- placement copy of LEVEL_01_0B3290.c: advances the cursor sprite of one menu slot: loads its frame, then steps the slot state machine and returns the slot's step result. */
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

extern Slot D_0027D710[];
extern Vec16 D_0027D7F8[];
extern int D_0015B658[];
extern float D_0015B660[];
extern int D_0015B690[];
extern int D_0015B698[];

extern void func_09CD18(int id, float zero, Vec16 *out);
extern int func_096C90(Vec16 *p);
extern int func_096CC0(Vec16 *p);
extern int func_096CF0(Vec16 *p);
extern int func_096DA8(Vec16 *p);
extern void func_0999F0(Slot *s, short a, short b, short c, short d, unsigned int e);
extern void func_09A278(float a, float b, Slot *s);
extern int func_097E88(int arg);

int func_0A1910(int idx, int arg)
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
    obj = (Vec16 *)((char *)D_0027D7F8 + o16);
    o4 = idx * 4;
    func_09CD18(0x6D, 0.0f, obj);
    o84 = idx * 0x54;
    slot = (Slot *)((char *)D_0027D710 + o84);
    result = 2;
    func_0999F0(slot, func_096C90(obj), func_096CC0(obj), func_096CF0(obj), func_096DA8(obj), 0x60402020);
    flags = (unsigned int *)((char *)D_0027D710 + 0x20 + o84);
    *(int *)((char *)D_0027D710 + 0x14 + o84) = *(int *)((char *)D_0015B658 + o4);
    scale = (float *)((char *)D_0015B660 + o4);
    *flags |= 0x60;
    func_09A278(*scale, *scale, slot);
    if (slot->state < 2) {
        result = 0;
        *flags |= 3;
        *(int *)((char *)D_0015B690 + o4) = func_097E88(arg);
    } else if (slot->state < 3) {
        result = 0;
    } else {
        func_09CD18(0x6E, 0.0f, obj);
        slot->pos = *obj;
        func_09A278(*scale, *scale, slot);
        if (slot->state < 4) {
            result = 1;
        } else {
            func_09CD18(0x6F, 0.0f, obj);
            slot->pos = *obj;
        }
    }
    D_0015B698[idx] = func_096DA8(&D_0027D7F8[idx]);
    D_0027D710[idx].flags &= 0xFFFFFF9F;
    return result;
}
