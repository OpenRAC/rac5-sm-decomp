/* LEVEL_05:0x0B1850 -- placement copy of LEVEL_01_0B3290.c: advances the cursor sprite of one menu slot: loads its frame, then steps the slot state machine and returns the slot's step result. */
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

extern Slot D_00313A10[];
extern Vec16 D_00313AF8[];
extern int D_001EB658[];
extern float D_001EB660[];
extern int D_001EB690[];
extern int D_001EB698[];

extern void func_0ACCC8(int id, float zero, Vec16 *out);
extern int func_0A6C40(Vec16 *p);
extern int func_0A6C70(Vec16 *p);
extern int func_0A6CA0(Vec16 *p);
extern int func_0A6D58(Vec16 *p);
extern void func_0A99A0(Slot *s, short a, short b, short c, short d, unsigned int e);
extern void func_0AA228(float a, float b, Slot *s);
extern int func_0A7E38(int arg);

int func_0B1850(int idx, int arg)
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
    obj = (Vec16 *)((char *)D_00313AF8 + o16);
    o4 = idx * 4;
    func_0ACCC8(0x6D, 0.0f, obj);
    o84 = idx * 0x54;
    slot = (Slot *)((char *)D_00313A10 + o84);
    result = 2;
    func_0A99A0(slot, func_0A6C40(obj), func_0A6C70(obj), func_0A6CA0(obj), func_0A6D58(obj), 0x60402020);
    flags = (unsigned int *)((char *)D_00313A10 + 0x20 + o84);
    *(int *)((char *)D_00313A10 + 0x14 + o84) = *(int *)((char *)D_001EB658 + o4);
    scale = (float *)((char *)D_001EB660 + o4);
    *flags |= 0x60;
    func_0AA228(*scale, *scale, slot);
    if (slot->state < 2) {
        result = 0;
        *flags |= 3;
        *(int *)((char *)D_001EB690 + o4) = func_0A7E38(arg);
    } else if (slot->state < 3) {
        result = 0;
    } else {
        func_0ACCC8(0x6E, 0.0f, obj);
        slot->pos = *obj;
        func_0AA228(*scale, *scale, slot);
        if (slot->state < 4) {
            result = 1;
        } else {
            func_0ACCC8(0x6F, 0.0f, obj);
            slot->pos = *obj;
        }
    }
    D_001EB698[idx] = func_0A6D58(&D_00313AF8[idx]);
    D_00313A10[idx].flags &= 0xFFFFFF9F;
    return result;
}
