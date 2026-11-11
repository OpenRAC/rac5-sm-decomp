/* LEVEL_21:0x0AF680 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_00157D00;
extern Ent D_00157FE8[];
extern Ent D_00157D18[];
extern Ent D_00157EB0[];
extern int D_002441E0[];

extern int func_0B8A38(int *set);
extern int func_0AFAE0(Obj *o);
extern int func_0AFB20(Obj *o);
extern int func_0AFB00(Obj *o);

Ent *func_0AF680(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0B8A38(D_002441E0);
    if (o == 0) {
        return &D_00157D00;
    }
    if (func_0AFAE0(o) != 0) {
        if (func_0AFB20(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_00157FE8[i].key_00 == 0) {
                    return &D_00157FE8[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_00157FE8[i].key_00 == o->key_14) {
                    return &D_00157FE8[i];
                }
            }
        }
    } else {
        if (func_0AFB00(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_00157D18[i].key_00 == o->key_14) {
                    return &D_00157EB0[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_00157D18[i].key_00 == o->key_14) {
                    return &D_00157D18[i];
                }
            }
        }
    }
    return &D_00157D00;
}
