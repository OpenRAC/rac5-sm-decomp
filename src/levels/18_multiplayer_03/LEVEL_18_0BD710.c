/* LEVEL_18:0x0BD710 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_001B23B0;
extern Ent D_001B2698[];
extern Ent D_001B23C8[];
extern Ent D_001B2560[];
extern int D_0027ADA0[];

extern int func_0C6AC8(int *set);
extern int func_0BDB70(Obj *o);
extern int func_0BDBB0(Obj *o);
extern int func_0BDB90(Obj *o);

Ent *func_0BD710(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0C6AC8(D_0027ADA0);
    if (o == 0) {
        return &D_001B23B0;
    }
    if (func_0BDB70(o) != 0) {
        if (func_0BDBB0(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_001B2698[i].key_00 == 0) {
                    return &D_001B2698[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_001B2698[i].key_00 == o->key_14) {
                    return &D_001B2698[i];
                }
            }
        }
    } else {
        if (func_0BDB90(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_001B23C8[i].key_00 == o->key_14) {
                    return &D_001B2560[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_001B23C8[i].key_00 == o->key_14) {
                    return &D_001B23C8[i];
                }
            }
        }
    }
    return &D_001B23B0;
}
