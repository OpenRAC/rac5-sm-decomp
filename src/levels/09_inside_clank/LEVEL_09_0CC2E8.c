/* LEVEL_09:0x0CC2E8 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_001ECE80;
extern Ent D_001ED168[];
extern Ent D_001ECE98[];
extern Ent D_001ED030[];
extern int D_00314120[];

extern int func_0D56A8(int *set);
extern int func_0CC750(Obj *o);
extern int func_0CC790(Obj *o);
extern int func_0CC770(Obj *o);

Ent *func_0CC2E8(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0D56A8(D_00314120);
    if (o == 0) {
        return &D_001ECE80;
    }
    if (func_0CC750(o) != 0) {
        if (func_0CC790(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_001ED168[i].key_00 == 0) {
                    return &D_001ED168[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_001ED168[i].key_00 == o->key_14) {
                    return &D_001ED168[i];
                }
            }
        }
    } else {
        if (func_0CC770(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_001ECE98[i].key_00 == o->key_14) {
                    return &D_001ED030[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_001ECE98[i].key_00 == o->key_14) {
                    return &D_001ECE98[i];
                }
            }
        }
    }
    return &D_001ECE80;
}
