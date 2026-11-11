/* LEVEL_17:0x0BDC78 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_001A4530;
extern Ent D_001A4818[];
extern Ent D_001A4548[];
extern Ent D_001A46E0[];
extern int D_0026BD20[];

extern int func_0C7030(int *set);
extern int func_0BE0D8(Obj *o);
extern int func_0BE118(Obj *o);
extern int func_0BE0F8(Obj *o);

Ent *func_0BDC78(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0C7030(D_0026BD20);
    if (o == 0) {
        return &D_001A4530;
    }
    if (func_0BE0D8(o) != 0) {
        if (func_0BE118(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_001A4818[i].key_00 == 0) {
                    return &D_001A4818[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_001A4818[i].key_00 == o->key_14) {
                    return &D_001A4818[i];
                }
            }
        }
    } else {
        if (func_0BE0F8(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_001A4548[i].key_00 == o->key_14) {
                    return &D_001A46E0[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_001A4548[i].key_00 == o->key_14) {
                    return &D_001A4548[i];
                }
            }
        }
    }
    return &D_001A4530;
}
