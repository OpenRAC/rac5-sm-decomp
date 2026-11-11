/* LEVEL_19:0x0BE010 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_001B20B0;
extern Ent D_001B2398[];
extern Ent D_001B20C8[];
extern Ent D_001B2260[];
extern int D_0027ABA0[];

extern int func_0C73C8(int *set);
extern int func_0BE470(Obj *o);
extern int func_0BE4B0(Obj *o);
extern int func_0BE490(Obj *o);

Ent *func_0BE010(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0C73C8(D_0027ABA0);
    if (o == 0) {
        return &D_001B20B0;
    }
    if (func_0BE470(o) != 0) {
        if (func_0BE4B0(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_001B2398[i].key_00 == 0) {
                    return &D_001B2398[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_001B2398[i].key_00 == o->key_14) {
                    return &D_001B2398[i];
                }
            }
        }
    } else {
        if (func_0BE490(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_001B20C8[i].key_00 == o->key_14) {
                    return &D_001B2260[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_001B20C8[i].key_00 == o->key_14) {
                    return &D_001B20C8[i];
                }
            }
        }
    }
    return &D_001B20B0;
}
