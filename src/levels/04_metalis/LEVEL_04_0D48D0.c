/* LEVEL_04:0x0D48D0 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_0021C540;
extern Ent D_0021C828[];
extern Ent D_0021C558[];
extern Ent D_0021C6F0[];
extern int D_003471A0[];

extern int func_0DDCB8(int *set);
extern int func_0D4D38(Obj *o);
extern int func_0D4D78(Obj *o);
extern int func_0D4D58(Obj *o);

Ent *func_0D48D0(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0DDCB8(D_003471A0);
    if (o == 0) {
        return &D_0021C540;
    }
    if (func_0D4D38(o) != 0) {
        if (func_0D4D78(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_0021C828[i].key_00 == 0) {
                    return &D_0021C828[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_0021C828[i].key_00 == o->key_14) {
                    return &D_0021C828[i];
                }
            }
        }
    } else {
        if (func_0D4D58(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_0021C558[i].key_00 == o->key_14) {
                    return &D_0021C6F0[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_0021C558[i].key_00 == o->key_14) {
                    return &D_0021C558[i];
                }
            }
        }
    }
    return &D_0021C540;
}
