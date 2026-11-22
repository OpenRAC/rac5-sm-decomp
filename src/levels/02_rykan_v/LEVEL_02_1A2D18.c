/* LEVEL_02:0x1A2D18 -- three-state countdown handler that arms, ticks and finishes a timed event. */
typedef struct { char pad[8]; unsigned char busy; } Rec;
typedef struct { char pad[0x54]; Rec *rec; } Peer;
typedef struct {
    char pad[8];
    Peer *a;
    Peer *b;
    char pad2[0x18 - 0x10];
    int handle;
} Sub;
typedef struct {
    char pad[0x45];
    unsigned char state;
    char pad2[0x54 - 0x46];
    Sub *sub;
    char pad3[0x70 - 0x58];
    float timer;
} Obj;

extern char D_00001370;
extern char D_00003008;
extern char *func_0010C0(int a);
extern void func_001088(int a, char *b, Obj *o);
extern void func_0D0928(int n);
extern int func_08E778(void);
extern void func_08E718(int h);
extern void func_082F58(Obj *o, int n);
extern void func_1A2E78(Obj *o);
extern int func_1A2EB0(Obj *o);
extern int func_1A3510(Obj *o);

void func_1A2D18(Obj *o)
{
    Sub *s;

    s = o->sub;
    if (o->state == 0) {
        if (s->a->rec->busy == 0 && s->b->rec->busy == 0) {
            if (func_0010C0(0) != &D_00001370) {
                func_0D0928(0x14);
                o->state = 1;
                o->timer = 5.0f;
            }
        }
    } else if (o->state == 1) {
        func_0D0928(0x14);
        o->timer = o->timer - 1.0f;
        if (o->timer <= 0.0f) {
            func_1A2E78(o);
            o->state = 2;
            s->handle = func_08E778();
            func_08E718(0);
            func_001088(0, &D_00001370, o);
        }
    } else if (o->state == 2) {
        func_0D0928(0x14);
        if (func_1A2EB0(o)) {
            if (func_1A3510(o) == 0) {
                func_001088(0, &D_00003008, 0);
                func_08E718(s->handle);
                func_082F58(o, 1);
            }
        }
    }
}
