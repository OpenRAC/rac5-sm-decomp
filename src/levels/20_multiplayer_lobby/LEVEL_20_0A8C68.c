/* LEVEL_20:0x0A8C68 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_00113610;
extern Ent D_001138F8[];
extern Ent D_00113628[];
extern Ent D_001137C0[];
extern int D_0019E260[];

extern int func_0B2020(int *set);
extern int func_0A90C8(Obj *o);
extern int func_0A9108(Obj *o);
extern int func_0A90E8(Obj *o);

Ent *func_0A8C68(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0B2020(D_0019E260);
    if (o == 0) {
        return &D_00113610;
    }
    if (func_0A90C8(o) != 0) {
        if (func_0A9108(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_001138F8[i].key_00 == 0) {
                    return &D_001138F8[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_001138F8[i].key_00 == o->key_14) {
                    return &D_001138F8[i];
                }
            }
        }
    } else {
        if (func_0A90E8(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_00113628[i].key_00 == o->key_14) {
                    return &D_001137C0[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_00113628[i].key_00 == o->key_14) {
                    return &D_00113628[i];
                }
            }
        }
    }
    return &D_00113610;
}
