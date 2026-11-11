/* LEVEL_10:0x0D0478 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_0020C080;
extern Ent D_0020C368[];
extern Ent D_0020C098[];
extern Ent D_0020C230[];
extern int D_00335DA0[];

extern int func_0D9838(int *set);
extern int func_0D08E0(Obj *o);
extern int func_0D0920(Obj *o);
extern int func_0D0900(Obj *o);

Ent *func_0D0478(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0D9838(D_00335DA0);
    if (o == 0) {
        return &D_0020C080;
    }
    if (func_0D08E0(o) != 0) {
        if (func_0D0920(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_0020C368[i].key_00 == 0) {
                    return &D_0020C368[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_0020C368[i].key_00 == o->key_14) {
                    return &D_0020C368[i];
                }
            }
        }
    } else {
        if (func_0D0900(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_0020C098[i].key_00 == o->key_14) {
                    return &D_0020C230[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_0020C098[i].key_00 == o->key_14) {
                    return &D_0020C098[i];
                }
            }
        }
    }
    return &D_0020C080;
}
