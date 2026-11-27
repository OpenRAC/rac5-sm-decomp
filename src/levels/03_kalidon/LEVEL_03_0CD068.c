/* LEVEL_03:0x0CD068 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
typedef unsigned long long u64;

typedef struct {
    int value;
    char pad_04[8];
    unsigned char id_0C;
    char pad_0D[3];
} Slot;

typedef struct {
    char pad_00[0x74];
    unsigned short s_74;
} Aux;

typedef struct {
    char pad_000[0x10C];
    unsigned short h_10C;
    char pad_10E[0x852];
    u64 flags_960;
} State;

typedef struct {
    char pad_000[0x59C];
    Aux *aux_59C;
} Ctx;

extern Slot D_0022D110[];
extern char *D_0024C228;
extern char *D_0020C62C;
extern State D_0024FFC0;

extern int func_0B5E08(int index);
extern void func_087C40(unsigned int value);
extern int func_0272E8(int kind, int mask);
extern void func_02F3B8(int a, int b);
extern int func_02F540(void);
extern int func_069508(char *object);
extern void func_03A2D8(void *value);

void func_0CD068(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_0B5E08(7);
    func_087C40(0x200);
    id = func_0272E8(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_0022D110[i];
        if (s->id_0C == id) {
            if (s->value != D_0024C228[0x2E0]) {
                func_02F3B8(s->value, 1);
                func_02F540();
            }
            D_0020C62C[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_0024FFC0;
    if (func_069508((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_03A2D8((void *)0);
    } else if (D_0020C62C[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_03A2D8((void *)1);
    }
}
