/* LEVEL_20:0x05EBD8 -- placement copy of LEVEL_01_07CB58.c: sets up one entry's matrix and blends it into the object's pose. */
typedef struct {
    char *tab;
    char *ents;
} Hdr;
typedef struct {
    char *mats;
    char pad4[4];
    unsigned char cnt;
} Ent;
typedef struct {
    char pad0[0x40];
    char *hdr;
    unsigned char sel;
    char pad45[3];
    float *pose;
    char pad4C[0x64 - 0x4C];
    unsigned flags;
} Obj;
extern void func_0635C0(Obj *o);
extern int func_068DF8(char *m, char *dst);
extern void func_067D68(float *pose, char *dst, float t);

void func_05EBD8(Obj *o, float t, unsigned idx)
{
    Ent *e;
    char *dst;
    e = *(Ent **)(*(char **)((char *)o->hdr + 4) + o->sel * 0x34 + 8);
    if (idx < e->cnt) {
        func_0635C0(o);
        dst = (char *)o->pose + 0x5C + ((o->flags >> 8) & 1) * 0x28;
        func_068DF8(e->mats + idx * 64, dst);
        func_067D68(o->pose, dst, t);
        o->pose[2] = 1.0f;
    }
}
