/* LEVEL_04:0x177B20 -- placement copy of LEVEL_01_16CCA0.c: per-frame update of an object's attached effect: stops its record slots when the target is hit, otherwise builds and refreshes the effect from the owner. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char *rec;
    char pad04[0x18];
} Slot;

typedef struct {
    Slot slots[12];
    char pad150[8];
    unsigned char f158;
    char f159[1];
} Own;

typedef struct {
    char pad00[8];
    void *target;
    char pad0C[8];
    unsigned char f14;
    char pad15;
    unsigned char f16;
} Info;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Info *info;
    Own *own;
} Obj;

extern void func_019F78(Vec4 *a0);
extern int func_087C38(void *a, float *p);
extern void func_07FAE8(char *record, int k);
extern void func_177CE8(Obj *o);
extern void func_17A158(Own *own, Info *info);
extern char *func_177EF8(Own *own, char *buf, float dt, unsigned char *flag);
extern void func_1782E8(char *buf, char *e);
extern void func_178E58(char *buf, char *e, char *a, int flag);
extern void func_178060(char *buf, char *e);

void func_177B20(Obj *o, float dt)
{
    Vec4 v;
    char buf[0x180];
    unsigned char flag;
    Info *info;
    Own *own;
    unsigned int i;
    char *e;

    info = o->info;
    own = o->own;
    if (info->target != 0) {
        func_019F78(&v);
        if (func_087C38(info->target, &v.x) != 0) {
            for (i = 0; i < 12; i++) {
                if (own->slots[i].rec != 0) {
                    func_07FAE8(own->slots[i].rec, 0);
                }
            }
            if (info->f16 != 0) {
                func_07FAE8((char *)o, 0);
                return;
            }
        }
    }
    func_177CE8(o);
    if (o->state == 2)
        return;
    flag = 0;
    if (own->f158 != 0) {
        func_17A158(own, info);
    }
    e = func_177EF8(own, buf, dt, &flag);
    if (e != 0) {
        func_1782E8(buf, e);
        if (info->f14 != 0) {
            func_178E58(buf, e, own->f159, flag);
        }
        func_178060(buf, e);
    }
}
