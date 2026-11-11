/* LEVEL_01:0x0CF038 -- picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_00203080;
extern Ent D_00203368[];
extern Ent D_00203098[];
extern Ent D_00203230[];
extern int D_0032C9A0[];

extern int func_0D83F8(int *set);
extern int func_0CF4A0(Obj *o);
extern int func_0CF4E0(Obj *o);
extern int func_0CF4C0(Obj *o);

Ent *func_0CF038(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0D83F8(D_0032C9A0);
    if (o == 0) {
        return &D_00203080;
    }
    if (func_0CF4A0(o) != 0) {
        if (func_0CF4E0(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_00203368[i].key_00 == 0) {
                    return &D_00203368[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_00203368[i].key_00 == o->key_14) {
                    return &D_00203368[i];
                }
            }
        }
    } else {
        if (func_0CF4C0(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_00203098[i].key_00 == o->key_14) {
                    return &D_00203230[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_00203098[i].key_00 == o->key_14) {
                    return &D_00203098[i];
                }
            }
        }
    }
    return &D_00203080;
}
