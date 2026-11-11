/* LEVEL_16:0x0BE738 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_001B0F30;
extern Ent D_001B1218[];
extern Ent D_001B0F48[];
extern Ent D_001B10E0[];
extern int D_0027AA20[];

extern int func_0C7AF0(int *set);
extern int func_0BEB98(Obj *o);
extern int func_0BEBD8(Obj *o);
extern int func_0BEBB8(Obj *o);

Ent *func_0BE738(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0C7AF0(D_0027AA20);
    if (o == 0) {
        return &D_001B0F30;
    }
    if (func_0BEB98(o) != 0) {
        if (func_0BEBD8(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_001B1218[i].key_00 == 0) {
                    return &D_001B1218[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_001B1218[i].key_00 == o->key_14) {
                    return &D_001B1218[i];
                }
            }
        }
    } else {
        if (func_0BEBB8(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_001B0F48[i].key_00 == o->key_14) {
                    return &D_001B10E0[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_001B0F48[i].key_00 == o->key_14) {
                    return &D_001B0F48[i];
                }
            }
        }
    }
    return &D_001B0F30;
}
