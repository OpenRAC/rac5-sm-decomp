/* LEVEL_22:0x0BB7C8 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
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

extern Slot D_00171690[];
extern char *D_00182FA8;
extern char *D_0015332C;
extern State D_00186D40;

extern int func_0A4570(int index);
extern void func_079200(unsigned int value);
extern int func_021D98(int kind, int mask);
extern void func_029970(int a, int b);
extern int func_029AF8(void);
extern int func_060788(char *object);
extern void func_031BD8(void *value);

void func_0BB7C8(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_0A4570(7);
    func_079200(0x200);
    id = func_021D98(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_00171690[i];
        if (s->id_0C == id) {
            if (s->value != D_00182FA8[0x2E0]) {
                func_029970(s->value, 1);
                func_029AF8();
            }
            D_0015332C[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_00186D40;
    if (func_060788((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_031BD8((void *)0);
    } else if (D_0015332C[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_031BD8((void *)1);
    }
}
