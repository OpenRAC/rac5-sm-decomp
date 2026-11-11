/* LEVEL_22:0x0BD580 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_00162400;
extern Ent D_001626E8[];
extern Ent D_00162418[];
extern Ent D_001625B0[];
extern int D_00282560[];

extern int func_0C6938(int *set);
extern int func_0BD9E0(Obj *o);
extern int func_0BDA20(Obj *o);
extern int func_0BDA00(Obj *o);

Ent *func_0BD580(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0C6938(D_00282560);
    if (o == 0) {
        return &D_00162400;
    }
    if (func_0BD9E0(o) != 0) {
        if (func_0BDA20(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_001626E8[i].key_00 == 0) {
                    return &D_001626E8[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_001626E8[i].key_00 == o->key_14) {
                    return &D_001626E8[i];
                }
            }
        }
    } else {
        if (func_0BDA00(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_00162418[i].key_00 == o->key_14) {
                    return &D_001625B0[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_00162418[i].key_00 == o->key_14) {
                    return &D_00162418[i];
                }
            }
        }
    }
    return &D_00162400;
}
