/* LEVEL_07:0x0D1098 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_00217380;
extern Ent D_00217668[];
extern Ent D_00217398[];
extern Ent D_00217530[];
extern int D_003422A0[];

extern int func_0DA458(int *set);
extern int func_0D1500(Obj *o);
extern int func_0D1540(Obj *o);
extern int func_0D1520(Obj *o);

Ent *func_0D1098(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0DA458(D_003422A0);
    if (o == 0) {
        return &D_00217380;
    }
    if (func_0D1500(o) != 0) {
        if (func_0D1540(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_00217668[i].key_00 == 0) {
                    return &D_00217668[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_00217668[i].key_00 == o->key_14) {
                    return &D_00217668[i];
                }
            }
        }
    } else {
        if (func_0D1520(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_00217398[i].key_00 == o->key_14) {
                    return &D_00217530[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_00217398[i].key_00 == o->key_14) {
                    return &D_00217398[i];
                }
            }
        }
    }
    return &D_00217380;
}
