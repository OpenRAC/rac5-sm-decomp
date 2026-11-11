/* LEVEL_24:0x0ACB08 -- placement copy of LEVEL_01_0B3290.c: advances the cursor sprite of one menu slot: loads its frame, then steps the slot state machine and returns the slot's step result. */
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

extern Slot D_002F3A10[];
extern Vec16 D_002F3AF8[];
extern int D_001CCF58[];
extern float D_001CCF60[];
extern int D_001CCF90[];
extern int D_001CCF98[];

extern void func_0A7F80(int id, float zero, Vec16 *out);
extern int func_0A1EF8(Vec16 *p);
extern int func_0A1F28(Vec16 *p);
extern int func_0A1F58(Vec16 *p);
extern int func_0A2010(Vec16 *p);
extern void func_0A4C58(Slot *s, short a, short b, short c, short d, unsigned int e);
extern void func_0A54E0(float a, float b, Slot *s);
extern int func_0A30F0(int arg);

int func_0ACB08(int idx, int arg)
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
    obj = (Vec16 *)((char *)D_002F3AF8 + o16);
    o4 = idx * 4;
    func_0A7F80(0x6D, 0.0f, obj);
    o84 = idx * 0x54;
    slot = (Slot *)((char *)D_002F3A10 + o84);
    result = 2;
    func_0A4C58(slot, func_0A1EF8(obj), func_0A1F28(obj), func_0A1F58(obj), func_0A2010(obj), 0x60402020);
    flags = (unsigned int *)((char *)D_002F3A10 + 0x20 + o84);
    *(int *)((char *)D_002F3A10 + 0x14 + o84) = *(int *)((char *)D_001CCF58 + o4);
    scale = (float *)((char *)D_001CCF60 + o4);
    *flags |= 0x60;
    func_0A54E0(*scale, *scale, slot);
    if (slot->state < 2) {
        result = 0;
        *flags |= 3;
        *(int *)((char *)D_001CCF90 + o4) = func_0A30F0(arg);
    } else if (slot->state < 3) {
        result = 0;
    } else {
        func_0A7F80(0x6E, 0.0f, obj);
        slot->pos = *obj;
        func_0A54E0(*scale, *scale, slot);
        if (slot->state < 4) {
            result = 1;
        } else {
            func_0A7F80(0x6F, 0.0f, obj);
            slot->pos = *obj;
        }
    }
    D_001CCF98[idx] = func_0A2010(&D_002F3AF8[idx]);
    D_002F3A10[idx].flags &= 0xFFFFFF9F;
    return result;
}
