/* LEVEL_07:0x0CF2E0 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
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

extern Slot D_00228F10[];
extern char *D_00246CA8;
extern char *D_002082AC;
extern State D_0024AA40;

extern int func_0B8080(int index);
extern void func_089EB8(unsigned int value);
extern int func_027768(int kind, int mask);
extern void func_02F900(int a, int b);
extern void func_02FA88(void);
extern int func_06B888(char *object);
extern void func_03C5E8(void *value);

void func_0CF2E0(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_0B8080(7);
    func_089EB8(0x200);
    id = func_027768(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_00228F10[i];
        if (s->id_0C == id) {
            if (s->value != D_00246CA8[0x2E0]) {
                func_02F900(s->value, 1);
                func_02FA88();
            }
            D_002082AC[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_0024AA40;
    if (func_06B888((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_03C5E8((void *)0);
    } else if (D_002082AC[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_03C5E8((void *)1);
    }
}
