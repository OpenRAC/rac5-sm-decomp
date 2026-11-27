/* LEVEL_23:0x0C40B8 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
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

extern Slot D_001E7390[];
extern char *D_001FE828;
extern char *D_001C73AC;
extern State D_002025C0;

extern int func_0ACDE8(int index);
extern void func_07DCA8(unsigned int value);
extern int func_025160(int kind, int mask);
extern void func_02CF50(int a, int b);
extern int func_02D0D8(void);
extern int func_064338(char *object);
extern void func_0354B8(void *value);

void func_0C40B8(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_0ACDE8(7);
    func_07DCA8(0x200);
    id = func_025160(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_001E7390[i];
        if (s->id_0C == id) {
            if (s->value != D_001FE828[0x2E0]) {
                func_02CF50(s->value, 1);
                func_02D0D8();
            }
            D_001C73AC[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_002025C0;
    if (func_064338((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_0354B8((void *)0);
    } else if (D_001C73AC[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_0354B8((void *)1);
    }
}
