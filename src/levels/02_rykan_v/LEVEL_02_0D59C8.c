/* LEVEL_02:0x0D59C8 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_00218040;
extern Ent D_00218328[];
extern Ent D_00218058[];
extern Ent D_002181F0[];
extern int D_00343EA0[];

extern int func_0DED88(int *set);
extern int func_0D5E30(Obj *o);
extern int func_0D5E70(Obj *o);
extern int func_0D5E50(Obj *o);

Ent *func_0D59C8(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0DED88(D_00343EA0);
    if (o == 0) {
        return &D_00218040;
    }
    if (func_0D5E30(o) != 0) {
        if (func_0D5E70(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_00218328[i].key_00 == 0) {
                    return &D_00218328[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_00218328[i].key_00 == o->key_14) {
                    return &D_00218328[i];
                }
            }
        }
    } else {
        if (func_0D5E50(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_00218058[i].key_00 == o->key_14) {
                    return &D_002181F0[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_00218058[i].key_00 == o->key_14) {
                    return &D_00218058[i];
                }
            }
        }
    }
    return &D_00218040;
}
