/* LEVEL_24:0x187870 -- placement copy of LEVEL_01_1AAD98.c: clears the object's state record, initialises its four slots and its path, and hooks a sound; always returns 1. */
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

extern char D_001E0308[];
extern char D_001F3AB0[];
extern char D_001F3A38[];
extern Owner *D_001C5264[1];
extern void func_072940(Slot *s, int a, int b, int c, char *d);
extern void func_064408(Owner *a, char *b, char *c, int d, float x, float y, float z);
extern void func_0215B0(void *p, int a, int b, int c);

int func_187870(void *o)
{
    State *s;
    unsigned int i;

    s = ((ObjA *)o)->state;
    s->w00 = 0;
    for (i = 0; i < 4; i++) {
        func_072940(&s->slots[i], 0, 0x44, 0x45, D_001E0308);
    }
    s->w10 = 0;
    s->w1C = 0;
    s->b_C0 = 0;
    s->w14 = 0;
    s->w18 = 0;
    func_064408(D_001C5264[0], D_001F3AB0, D_001F3A38, 1, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    func_0215B0((char *)o + 0x74, 8, D_001C5264[0]->sound, -1);
    return 1;
}
