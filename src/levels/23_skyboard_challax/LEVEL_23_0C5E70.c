/* LEVEL_23:0x0C5E70 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_001D6480;
extern Ent D_001D6768[];
extern Ent D_001D6498[];
extern Ent D_001D6630[];
extern int D_002FDDE0[];

extern int func_0CF228(int *set);
extern int func_0C62D0(Obj *o);
extern int func_0C6310(Obj *o);
extern int func_0C62F0(Obj *o);

Ent *func_0C5E70(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0CF228(D_002FDDE0);
    if (o == 0) {
        return &D_001D6480;
    }
    if (func_0C62D0(o) != 0) {
        if (func_0C6310(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_001D6768[i].key_00 == 0) {
                    return &D_001D6768[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_001D6768[i].key_00 == o->key_14) {
                    return &D_001D6768[i];
                }
            }
        }
    } else {
        if (func_0C62F0(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_001D6498[i].key_00 == o->key_14) {
                    return &D_001D6630[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_001D6498[i].key_00 == o->key_14) {
                    return &D_001D6498[i];
                }
            }
        }
    }
    return &D_001D6480;
}
