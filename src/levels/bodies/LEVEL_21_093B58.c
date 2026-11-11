/* LEVEL_21:0x093B58 -- placement copy of LEVEL_01_0B3290.c: advances the cursor sprite of one menu slot: loads its frame, then steps the slot state machine and returns the slot's step result. */
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

extern Slot D_0023FB90[];
extern Vec16 D_0023FC78[];
extern int D_00150F58[];
extern float D_00150F60[];
extern int D_00150F90[];
extern int D_00150F98[];

extern void func_08EFD0(int id, float zero, Vec16 *out);
extern int func_088F48(Vec16 *p);
extern int func_088F78(Vec16 *p);
extern int func_088FA8(Vec16 *p);
extern int func_089060(Vec16 *p);
extern void func_08BCA8(Slot *s, short a, short b, short c, short d, unsigned int e);
extern void func_08C530(float a, float b, Slot *s);
extern int func_08A140(int arg);

int func_093B58(int idx, int arg)
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
    obj = (Vec16 *)((char *)D_0023FC78 + o16);
    o4 = idx * 4;
    func_08EFD0(0x6D, 0.0f, obj);
    o84 = idx * 0x54;
    slot = (Slot *)((char *)D_0023FB90 + o84);
    result = 2;
    func_08BCA8(slot, func_088F48(obj), func_088F78(obj), func_088FA8(obj), func_089060(obj), 0x60402020);
    flags = (unsigned int *)((char *)D_0023FB90 + 0x20 + o84);
    *(int *)((char *)D_0023FB90 + 0x14 + o84) = *(int *)((char *)D_00150F58 + o4);
    scale = (float *)((char *)D_00150F60 + o4);
    *flags |= 0x60;
    func_08C530(*scale, *scale, slot);
    if (slot->state < 2) {
        result = 0;
        *flags |= 3;
        *(int *)((char *)D_00150F90 + o4) = func_08A140(arg);
    } else if (slot->state < 3) {
        result = 0;
    } else {
        func_08EFD0(0x6E, 0.0f, obj);
        slot->pos = *obj;
        func_08C530(*scale, *scale, slot);
        if (slot->state < 4) {
            result = 1;
        } else {
            func_08EFD0(0x6F, 0.0f, obj);
            slot->pos = *obj;
        }
    }
    D_00150F98[idx] = func_089060(&D_0023FC78[idx]);
    D_0023FB90[idx].flags &= 0xFFFFFF9F;
    return result;
}
