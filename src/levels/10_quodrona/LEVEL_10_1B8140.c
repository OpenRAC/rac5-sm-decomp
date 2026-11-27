/* LEVEL_10:0x1B8140 -- placement copy of LEVEL_01_1AAD98.c: clears the object's state record, initialises its four slots and its path, and hooks a sound; always returns 1. */
typedef struct {
    char pad00[0x28];
} Slot;

typedef struct {
    int w00;
    char pad04[0xC];
    int w10;
    int w14;
    int w18;
    int w1C;
    char pad20[0];
    Slot slots[4];
    unsigned char b_C0;
} State;

typedef struct {
    char pad00[0x58];
    State *state;
} ObjA;

typedef struct {
    char pad00[0xF8];
    int sound;
} Owner;

extern char D_00218508[];
extern char D_00230D60[];
extern char D_00230CE8[];
extern Owner *D_001FD5E4[1];
extern void func_078878(Slot *s, int a, int b, int c, char *d);
extern void func_069BE8(Owner *a, char *b, char *c, int d, float x, float y, float z);
extern void func_023038(void *p, int a, int b, int c);

int func_1B8140(void *o)
{
    State *s;
    unsigned int i;

    s = ((ObjA *)o)->state;
    s->w00 = 0;
    for (i = 0; i < 4; i++) {
        func_078878(&s->slots[i], 0, 0x44, 0x45, D_00218508);
    }
    s->w10 = 0;
    s->w1C = 0;
    s->b_C0 = 0;
    s->w14 = 0;
    s->w18 = 0;
    func_069BE8(D_001FD5E4[0], D_00230D60, D_00230CE8, 1, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    func_023038((char *)o + 0x74, 8, D_001FD5E4[0]->sound, -1);
    return 1;
}
