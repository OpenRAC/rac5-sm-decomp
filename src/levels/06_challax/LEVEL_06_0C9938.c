/* LEVEL_06:0x0C9938 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_001F1F80;
extern Ent D_001F2268[];
extern Ent D_001F1F98[];
extern Ent D_001F2130[];
extern int D_00319720[];

extern int func_0D2CF8(int *set);
extern int func_0C9DA0(Obj *o);
extern int func_0C9DE0(Obj *o);
extern int func_0C9DC0(Obj *o);

Ent *func_0C9938(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0D2CF8(D_00319720);
    if (o == 0) {
        return &D_001F1F80;
    }
    if (func_0C9DA0(o) != 0) {
        if (func_0C9DE0(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_001F2268[i].key_00 == 0) {
                    return &D_001F2268[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_001F2268[i].key_00 == o->key_14) {
                    return &D_001F2268[i];
                }
            }
        }
    } else {
        if (func_0C9DC0(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_001F1F98[i].key_00 == o->key_14) {
                    return &D_001F2130[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_001F1F98[i].key_00 == o->key_14) {
                    return &D_001F1F98[i];
                }
            }
        }
    }
    return &D_001F1F80;
}
