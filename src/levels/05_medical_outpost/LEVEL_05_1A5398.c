/* LEVEL_05:0x1A5398 -- placement copy of LEVEL_01_1AAD98.c: clears the object's state record, initialises its four slots and its path, and hooks a sound; always returns 1. */
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

extern char D_001FE488[];
extern char D_00214020[];
extern char D_00213FA8[];
extern Owner *D_001E3964[1];
extern void func_0747F0(Slot *s, int a, int b, int c, char *d);
extern void func_068A20(Owner *a, char *b, char *c, int d, float x, float y, float z);
extern void func_0227D0(void *p, int a, int b, int c);

int func_1A5398(void *o)
{
    State *s;
    unsigned int i;

    s = ((ObjA *)o)->state;
    s->w00 = 0;
    for (i = 0; i < 4; i++) {
        func_0747F0(&s->slots[i], 0, 0x44, 0x45, D_001FE488);
    }
    s->w10 = 0;
    s->w1C = 0;
    s->b_C0 = 0;
    s->w14 = 0;
    s->w18 = 0;
    func_068A20(D_001E3964[0], D_00214020, D_00213FA8, 1, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    func_0227D0((char *)o + 0x74, 8, D_001E3964[0]->sound, -1);
    return 1;
}
