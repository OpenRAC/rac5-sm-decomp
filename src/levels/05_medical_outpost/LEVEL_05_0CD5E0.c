/* LEVEL_05:0x0CD5E0 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_001F2400;
extern Ent D_001F26E8[];
extern Ent D_001F2418[];
extern Ent D_001F25B0[];
extern int D_00318860[];

extern int func_0D69A0(int *set);
extern int func_0CDA48(Obj *o);
extern int func_0CDA88(Obj *o);
extern int func_0CDA68(Obj *o);

Ent *func_0CD5E0(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0D69A0(D_00318860);
    if (o == 0) {
        return &D_001F2400;
    }
    if (func_0CDA48(o) != 0) {
        if (func_0CDA88(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_001F26E8[i].key_00 == 0) {
                    return &D_001F26E8[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_001F26E8[i].key_00 == o->key_14) {
                    return &D_001F26E8[i];
                }
            }
        }
    } else {
        if (func_0CDA68(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_001F2418[i].key_00 == o->key_14) {
                    return &D_001F25B0[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_001F2418[i].key_00 == o->key_14) {
                    return &D_001F2418[i];
                }
            }
        }
    }
    return &D_001F2400;
}
