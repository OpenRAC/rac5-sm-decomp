/* LEVEL_22:0x12FBD8 -- per-frame update of a scripted actor: dispatches the current state's handler, runs the common updates and then points the camera at the selected attachment or the player. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad_00[0x30];
    V3 pos;
} Obj;

typedef struct {
    char pad_00[0x40];
    Obj *slots_40[1];
} Ext;

typedef struct {
    char pad_00[0x45];
    unsigned char state_45;
    char pad_46[0x58 - 0x46];
    Ext *ext_58;
} Actor;

extern int D_001668AC;
extern int D_00153CFC;
extern Obj *D_001872DC;

extern void func_130418(Actor *a);
extern void func_130000(Actor *a);
extern void func_1305B8(Actor *a);
extern void func_130360(Actor *a);
extern void func_1302B8(Actor *a);
extern void func_130510(Actor *a);
extern void func_1300D8(Actor *a);
extern void func_1309C0(Actor *a);
extern void func_1314B8(Actor *a);
extern void func_131710(Actor *a);
extern int func_057DD8(void);
extern void func_002EE0(float a, V3 *p, int b);

void func_12FBD8(Actor *a)
{
    Ext *e;
    Obj *o;
    V3 p;
    unsigned char st;

    e = a->ext_58;
    if (D_001668AC != 0) {
        st = a->state_45;
        if (st == 2)
            func_130418(a);
        else if (st == 3)
            func_130000(a);
        else if (st == 4)
            func_1305B8(a);
        else if (st == 6)
            func_130360(a);
        else if (st == 8)
            func_1302B8(a);
        else if (st == 7)
            func_130510(a);
        else if (st == 5)
            func_1300D8(a);
        else if (st == 9)
            func_1309C0(a);
        func_1314B8(a);
        func_131710(a);
        if (D_00153CFC >= 0 && D_00153CFC != ((unsigned char *)e)[0xAD] && (o = e->slots_40[D_00153CFC]) != 0) {
            func_002EE0(0.0f, &o->pos, 0);
        } else if (func_057DD8() != 0) {
            V3 *q = &D_001872DC->pos;

            p.x = q->x;
            p.y = q->y;
            p.z = q->z;
            p.y = p.y + 0.75f;
            func_002EE0(0.0f, &p, 0);
        }
    }
}
