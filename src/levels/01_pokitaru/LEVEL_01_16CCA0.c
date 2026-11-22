/* LEVEL_01:0x16CCA0 -- per-frame update of an object's attached effect: stops its record slots when the target is hit, otherwise builds and refreshes the effect from the owner. */
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

extern void func_01A2A0(Vec4 *a0);
extern int func_084708(void *a, float *p);
extern void func_07C670(char *record, int k);
extern void func_16CE68(Obj *o);
extern void func_16F3D0(Own *own, Info *info);
extern char *func_16D078(Own *own, char *buf, float dt, unsigned char *flag);
extern void func_16D468(char *buf, char *e);
extern void func_16DFD8(char *buf, char *e, char *a, int flag);
extern void func_16D1E0(char *buf, char *e);

void func_16CCA0(Obj *o, float dt)
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
        func_01A2A0(&v);
        if (func_084708(info->target, &v.x) != 0) {
            for (i = 0; i < 12; i++) {
                if (own->slots[i].rec != 0) {
                    func_07C670(own->slots[i].rec, 0);
                }
            }
            if (info->f16 != 0) {
                func_07C670((char *)o, 0);
                return;
            }
        }
    }
    func_16CE68(o);
    if (o->state == 2)
        return;
    flag = 0;
    if (own->f158 != 0) {
        func_16F3D0(own, info);
    }
    e = func_16D078(own, buf, dt, &flag);
    if (e != 0) {
        func_16D468(buf, e);
        if (info->f14 != 0) {
            func_16DFD8(buf, e, own->f159, flag);
        }
        func_16D1E0(buf, e);
    }
}
