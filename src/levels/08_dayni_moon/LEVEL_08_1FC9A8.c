/* LEVEL_08:0x1FC9A8 -- placement copy of LEVEL_04_1D7A28.c: plays a positional sound at an object, spawns the object registered under a fixed id and seeds its state from the given vector. */

struct State_1D7A28 {
    int tag;
    float f4;
    float f8;
    float fC;
};

struct Spawn_1D7A28 {
    char pad0[0x45];
    unsigned char active;
    char pad1[0x12];
    struct State_1D7A28 *state;
};

struct Obj_1D7A28 {
    char pad0[0x20];
    float dir_x;
    char pad1[4];
    float dir_z;
    char pad2[4];
    float pos[3];
};

struct Entry_1D7A28 {
    char pad0[0x24];
    int id;
    char pad1[0x1C];
};

struct Table_1D7A28 {
    char pad[0x34];
    struct Entry_1D7A28 *entries;
    unsigned int count;
};

extern struct Table_1D7A28 *D_0024FC50;
extern void *D_003E5498;
extern unsigned int D_0023CB38;

extern void func_0FB378(int a0, float *a1);
extern struct Spawn_1D7A28 *func_0844E0(struct Entry_1D7A28 *a0, int a1, struct Obj_1D7A28 *a2, int a3);
extern void func_1FCB10(struct Spawn_1D7A28 *a0, int a1, float *a2, int a3, int a4);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

static __inline__ struct Entry_1D7A28 *FindEntry(struct Table_1D7A28 *tab, int id)
{
    unsigned int i;

    for (i = 0; i < tab->count; i++) {
        if (tab->entries[i].id == id) {
            return &tab->entries[i];
        }
    }
    return 0;
}

void func_1FC9A8(struct Obj_1D7A28 *obj, int a1, float *vec, int a3)
{
    float dir[2];
    struct Entry_1D7A28 *ent;
    struct Spawn_1D7A28 *sp;
    struct State_1D7A28 *st;

    func_0FB378(0, obj->pos);
    if (D_003E5498 != 0) {
        SND_PlayPositionalSound(D_003E5498, obj->pos, 0.0f, 0, D_0023CB38);
    }
    ent = FindEntry(D_0024FC50, 0x09A26A7A);
    if (ent == 0) {
        sp = 0;
    } else {
        sp = func_0844E0(ent, a3, obj, 0xFF);
    }
    if (sp != 0) {
        st = sp->state;
        st->tag = a1;
        sp->active = 1;
        st->f8 = vec[4];
        st->fC = vec[5];
        st->f4 = vec[3];
        dir[0] = vec[0] * obj->dir_x;
        dir[1] = vec[0] * obj->dir_z;
        func_1FCB10(sp, 0, dir, 0, 0);
    }
}
