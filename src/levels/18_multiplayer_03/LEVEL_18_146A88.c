/* LEVEL_18:0x146A88 -- placement copy of LEVEL_01_16CCA0.c: per-frame update of an object's attached effect: stops its record slots when the target is hit, otherwise builds and refreshes the effect from the owner. */
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

extern void func_017D60(Vec4 *a0);
extern int func_075B30(void *a, float *p);
extern void func_06F008(char *record, int k);
extern void func_146BD8(Obj *o);
extern void func_1491C8(Own *own, Info *info);
extern char *func_146DE8(Own *own, char *buf, float dt, unsigned char *flag);
extern void func_1471D8(char *buf, char *e);
extern void func_147D48(char *buf, char *e, char *a, int flag);
extern void func_146F50(char *buf, char *e);

void func_146A88(Obj *o, float dt)
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
        func_017D60(&v);
        if (func_075B30(info->target, &v.x) != 0) {
            for (i = 0; i < 12; i++) {
                if (own->slots[i].rec != 0) {
                    func_06F008(own->slots[i].rec, 0);
                }
            }
            if (info->f16 != 0) {
                func_06F008((char *)o, 0);
                return;
            }
        }
    }
    func_146BD8(o);
    if (o->state == 2)
        return;
    flag = 0;
    if (own->f158 != 0) {
        func_1491C8(own, info);
    }
    e = func_146DE8(own, buf, dt, &flag);
    if (e != 0) {
        func_1471D8(buf, e);
        if (info->f14 != 0) {
            func_147D48(buf, e, own->f159, flag);
        }
        func_146F50(buf, e);
    }
}
