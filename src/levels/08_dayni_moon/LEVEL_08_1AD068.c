/* LEVEL_08:0x1AD068 -- looks up the object's record in the shared block; when found, starts the first-time effect (once per state change) and the follow-ups, then stores the lookup result as the object's state byte. */
typedef struct Rec {
    int w00;
} Rec;

typedef struct Obj {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Rec *rec;
} Obj;

extern char D_002843D0[];

extern int func_08C780(int key, char *block);
extern void func_0C01D8(void *value);
extern int func_1439E8(int id);
extern void func_0C0280(void *arg0, void *arg1, void *arg2, void *arg3);
extern int func_08FFD8(int n);
extern int func_01B220(int a0, int a1);

void func_1AD068(Obj *o)
{
    char *base = D_002843D0;
    int found = func_08C780(o->rec->w00, base + 0x30);

    if (found != 0) {
        if (o->state == 0) {
            func_0C01D8(0);
        }
        func_0C0280(0, (void *)func_1439E8(0x220), 0, 0);
        if (func_08FFD8(2) & 0x1000) {
            func_01B220(9, 1);
        }
    }
    o->state = found;
}
