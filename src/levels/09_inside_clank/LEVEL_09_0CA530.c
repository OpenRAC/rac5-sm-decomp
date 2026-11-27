/* LEVEL_09:0x0CA530 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
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

extern Slot D_001FDE10[];
extern char *D_00218B28;
extern char *D_001DDDAC;
extern State D_0021C8C0;

extern int func_0B32D0(int index);
extern void func_0847A0(unsigned int value);
extern int func_026410(int kind, int mask);
extern void func_02E428(int a, int b);
extern int func_02E5B0(void);
extern int func_067780(char *object);
extern void func_0384F8(void *value);

void func_0CA530(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_0B32D0(7);
    func_0847A0(0x200);
    id = func_026410(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_001FDE10[i];
        if (s->id_0C == id) {
            if (s->value != D_00218B28[0x2E0]) {
                func_02E428(s->value, 1);
                func_02E5B0();
            }
            D_001DDDAC[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_0021C8C0;
    if (func_067780((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_0384F8((void *)0);
    } else if (D_001DDDAC[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_0384F8((void *)1);
    }
}
