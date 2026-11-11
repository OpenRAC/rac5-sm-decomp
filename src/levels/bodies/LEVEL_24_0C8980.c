/* LEVEL_24:0x0C8980 -- placement copy of LEVEL_01_0CF038.c: picks a table entry for the current object: a free slot, a keyed slot, or a mapped slot, else a default entry. */

typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_001D3D00;
extern Ent D_001D3FE8[];
extern Ent D_001D3D18[];
extern Ent D_001D3EB0[];
extern int D_002F8860[];

extern int func_0D1D60(int *set);
extern int func_0C8DE0(Obj *o);
extern int func_0C8E20(Obj *o);
extern int func_0C8E00(Obj *o);

Ent *func_0C8980(void)
{
    Obj *o;
    unsigned int i;

    o = (Obj *)func_0D1D60(D_002F8860);
    if (o == 0) {
        return &D_001D3D00;
    }
    if (func_0C8DE0(o) != 0) {
        if (func_0C8E20(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_001D3FE8[i].key_00 == 0) {
                    return &D_001D3FE8[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_001D3FE8[i].key_00 == o->key_14) {
                    return &D_001D3FE8[i];
                }
            }
        }
    } else {
        if (func_0C8E00(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_001D3D18[i].key_00 == o->key_14) {
                    return &D_001D3EB0[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_001D3D18[i].key_00 == o->key_14) {
                    return &D_001D3D18[i];
                }
            }
        }
    }
    return &D_001D3D00;
}
