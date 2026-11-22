/* LEVEL_23:0x17C8B8 -- placement copy of LEVEL_22_12FBD8.c: per-frame update of a scripted actor: dispatches the current state's handler, runs the common updates and then points the camera at the selected attachment or the player. */
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

extern int D_001DBE2C;
extern int D_001C7D7C;
extern Obj *D_00202B5C;

extern void func_17D0F8(Actor *a);
extern void func_17CCE0(Actor *a);
extern void func_17D298(Actor *a);
extern void func_17D040(Actor *a);
extern void func_17CF98(Actor *a);
extern void func_17D1F0(Actor *a);
extern void func_17CDB8(Actor *a);
extern void func_17D6A0(Actor *a);
extern void func_17E198(Actor *a);
extern void func_17E3F0(Actor *a);
extern int func_05B988(void);
extern void func_003170(float a, V3 *p, int b);

void func_17C8B8(Actor *a)
{
    Ext *e;
    Obj *o;
    V3 p;
    unsigned char st;

    e = a->ext_58;
    if (D_001DBE2C != 0) {
        st = a->state_45;
        if (st == 2)
            func_17D0F8(a);
        else if (st == 3)
            func_17CCE0(a);
        else if (st == 4)
            func_17D298(a);
        else if (st == 6)
            func_17D040(a);
        else if (st == 8)
            func_17CF98(a);
        else if (st == 7)
            func_17D1F0(a);
        else if (st == 5)
            func_17CDB8(a);
        else if (st == 9)
            func_17D6A0(a);
        func_17E198(a);
        func_17E3F0(a);
        if (D_001C7D7C >= 0 && D_001C7D7C != ((unsigned char *)e)[0xAD] && (o = e->slots_40[D_001C7D7C]) != 0) {
            func_003170(0.0f, &o->pos, 0);
        } else if (func_05B988() != 0) {
            V3 *q = &D_00202B5C->pos;

            p.x = q->x;
            p.y = q->y;
            p.z = q->z;
            p.y = p.y + 0.75f;
            func_003170(0.0f, &p, 0);
        }
    }
}
