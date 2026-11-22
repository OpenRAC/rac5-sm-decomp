/* LEVEL_20:0x0A6EB0 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
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

extern Slot D_0012A150[];
extern char *D_00137A28;
extern char *D_00104194;
extern State D_0013BA10;

extern int func_08F6B0(int index);
extern void func_066F98(unsigned int value);
extern int func_021A20(int kind, int mask);
extern void func_0298E0(int a, int b);
extern void func_029A68(void);
extern int func_056C68(char *object);
extern void func_032288(void *value);

void func_0A6EB0(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_08F6B0(7);
    func_066F98(0x200);
    id = func_021A20(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_0012A150[i];
        if (s->id_0C == id) {
            if (s->value != D_00137A28[0x2E0]) {
                func_0298E0(s->value, 1);
                func_029A68();
            }
            D_00104194[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_0013BA10;
    if (func_056C68((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_032288((void *)0);
    } else if (D_00104194[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_032288((void *)1);
    }
}
