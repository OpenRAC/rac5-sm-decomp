/* LEVEL_18:0x175BF0 -- placement copy of LEVEL_01_1AAD98.c: clears the object's state record, initialises its four slots and its path, and hooks a sound; always returns 1. */
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

extern char D_001C5838[];
extern char D_001D8698[];
extern char D_001D8620[];
extern Owner *D_001A3594[1];
extern void func_0689A8(Slot *s, int a, int b, int c, char *d);
extern void func_05C418(Owner *a, char *b, char *c, int d, float x, float y, float z);
extern void func_020830(void *p, int a, int b, int c);

int func_175BF0(void *o)
{
    State *s;
    unsigned int i;

    s = ((ObjA *)o)->state;
    s->w00 = 0;
    for (i = 0; i < 4; i++) {
        func_0689A8(&s->slots[i], 0, 0x44, 0x45, D_001C5838);
    }
    s->w10 = 0;
    s->w1C = 0;
    s->b_C0 = 0;
    s->w14 = 0;
    s->w18 = 0;
    func_05C418(D_001A3594[0], D_001D8698, D_001D8620, 1, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    func_020830((char *)o + 0x74, 8, D_001A3594[0]->sound, -1);
    return 1;
}
