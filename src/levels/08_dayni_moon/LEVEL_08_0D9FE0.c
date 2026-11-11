/* LEVEL_08:0x0D9FE0 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_0024BF40;
extern Ent D_0024C228[];
extern Ent D_0024BF58[];
extern Ent D_0024C0F0[];
extern int D_0037BC20[];

extern int func_0E33C8(int *set);
extern int func_0DA448(Obj *o);
extern int func_0DA488(Obj *o);
extern int func_0DA468(Obj *o);

Ent *func_0D9FE0(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0E33C8(D_0037BC20);
    if (o == 0) {
        return &D_0024BF40;
    }
    if (func_0DA448(o) != 0) {
        if (func_0DA488(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_0024C228[i].key_00 == 0) {
                    return &D_0024C228[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_0024C228[i].key_00 == o->key_14) {
                    return &D_0024C228[i];
                }
            }
        }
    } else {
        if (func_0DA468(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_0024BF58[i].key_00 == o->key_14) {
                    return &D_0024C0F0[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_0024BF58[i].key_00 == o->key_14) {
                    return &D_0024BF58[i];
                }
            }
        }
    }
    return &D_0024BF40;
}
