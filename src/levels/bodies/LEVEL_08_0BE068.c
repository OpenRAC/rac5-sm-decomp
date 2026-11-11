/* LEVEL_08:0x0BE068 -- placement copy of LEVEL_01_0B3290.c: advances the cursor sprite of one menu slot: loads its frame, then steps the slot state machine and returns the slot's step result. */
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

extern Slot D_00376DD0[];
extern Vec16 D_00376EB8[];
extern int D_00245198[];
extern float D_002451A0[];
extern int D_002451D0[];
extern int D_002451D8[];

extern void func_0B9040(int id, float zero, Vec16 *out);
extern int func_0B2F78(Vec16 *p);
extern int func_0B2FA8(Vec16 *p);
extern int func_0B2FD8(Vec16 *p);
extern int func_0B3090(Vec16 *p);
extern void func_0B5D18(Slot *s, short a, short b, short c, short d, unsigned int e);
extern void func_0B65A0(float a, float b, Slot *s);
extern int func_0B41B0(int arg);

int func_0BE068(int idx, int arg)
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
    obj = (Vec16 *)((char *)D_00376EB8 + o16);
    o4 = idx * 4;
    func_0B9040(0x6D, 0.0f, obj);
    o84 = idx * 0x54;
    slot = (Slot *)((char *)D_00376DD0 + o84);
    result = 2;
    func_0B5D18(slot, func_0B2F78(obj), func_0B2FA8(obj), func_0B2FD8(obj), func_0B3090(obj), 0x60402020);
    flags = (unsigned int *)((char *)D_00376DD0 + 0x20 + o84);
    *(int *)((char *)D_00376DD0 + 0x14 + o84) = *(int *)((char *)D_00245198 + o4);
    scale = (float *)((char *)D_002451A0 + o4);
    *flags |= 0x60;
    func_0B65A0(*scale, *scale, slot);
    if (slot->state < 2) {
        result = 0;
        *flags |= 3;
        *(int *)((char *)D_002451D0 + o4) = func_0B41B0(arg);
    } else if (slot->state < 3) {
        result = 0;
    } else {
        func_0B9040(0x6E, 0.0f, obj);
        slot->pos = *obj;
        func_0B65A0(*scale, *scale, slot);
        if (slot->state < 4) {
            result = 1;
        } else {
            func_0B9040(0x6F, 0.0f, obj);
            slot->pos = *obj;
        }
    }
    D_002451D8[idx] = func_0B3090(&D_00376EB8[idx]);
    D_00376DD0[idx].flags &= 0xFFFFFF9F;
    return result;
}
