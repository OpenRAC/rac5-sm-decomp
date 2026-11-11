/* LEVEL_03:0x0CEE20 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_0021B700;
extern Ent D_0021B9E8[];
extern Ent D_0021B718[];
extern Ent D_0021B8B0[];
extern int D_00347820[];

extern int func_0D81E0(int *set);
extern int func_0CF288(Obj *o);
extern int func_0CF2C8(Obj *o);
extern int func_0CF2A8(Obj *o);

Ent *func_0CEE20(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0D81E0(D_00347820);
    if (o == 0) {
        return &D_0021B700;
    }
    if (func_0CF288(o) != 0) {
        if (func_0CF2C8(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_0021B9E8[i].key_00 == 0) {
                    return &D_0021B9E8[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_0021B9E8[i].key_00 == o->key_14) {
                    return &D_0021B9E8[i];
                }
            }
        }
    } else {
        if (func_0CF2A8(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_0021B718[i].key_00 == o->key_14) {
                    return &D_0021B8B0[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_0021B718[i].key_00 == o->key_14) {
                    return &D_0021B718[i];
                }
            }
        }
    }
    return &D_0021B700;
}
