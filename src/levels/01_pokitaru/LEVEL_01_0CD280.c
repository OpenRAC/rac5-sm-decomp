/* LEVEL_01:0x0CD280 -- looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
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

extern Slot D_00214210[];
extern char *D_002313A8;
extern char *D_001F3FAC;
extern State D_00235140;

extern int func_0B6020(int index);
extern void func_087DE8(unsigned int value);
extern int func_027408(int kind, int mask);
extern void func_02F5C8(int a, int b);
extern int func_02F750(void);
extern int func_06AB80(char *object);
extern void func_03C038(void *value);

void func_0CD280(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_0B6020(7);
    func_087DE8(0x200);
    id = func_027408(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_00214210[i];
        if (s->id_0C == id) {
            if (s->value != D_002313A8[0x2E0]) {
                func_02F5C8(s->value, 1);
                func_02F750();
            }
            D_001F3FAC[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_00235140;
    if (func_06AB80((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_03C038((void *)0);
    } else if (D_001F3FAC[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_03C038((void *)1);
    }
}
