/* LEVEL_21:0x0AD8C8 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
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

extern Slot D_00168990[];
extern char *D_00179528;
extern char *D_00148C2C;
extern State D_0017D2C0;

extern int func_096530(int index);
extern void func_06C4C8(unsigned int value);
extern int func_0213F8(int kind, int mask);
extern void func_028B50(int a, int b);
extern int func_028CD8(void);
extern int func_05BCB8(char *object);
extern void func_02F8F0(void *value);

void func_0AD8C8(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_096530(7);
    func_06C4C8(0x200);
    id = func_0213F8(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_00168990[i];
        if (s->id_0C == id) {
            if (s->value != D_00179528[0x2E0]) {
                func_028B50(s->value, 1);
                func_028CD8();
            }
            D_00148C2C[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_0017D2C0;
    if (func_05BCB8((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_02F8F0((void *)0);
    } else if (D_00148C2C[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_02F8F0((void *)1);
    }
}
