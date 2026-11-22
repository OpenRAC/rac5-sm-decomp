/* LEVEL_06:0x0C7B80 -- placement copy of LEVEL_01_0CD280.c: looks up a slot by id, switches the active slot when it changed and toggles a flag bit on the global state. */
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

extern Slot D_00203090[];
extern char *D_0021E128;
extern char *D_001E2EAC;
extern State D_00221EC0;

extern int func_0B0848(int index);
extern void func_080C60(unsigned int value);
extern int func_0258B8(int kind, int mask);
extern void func_02D9A8(int a, int b);
extern void func_02DB30(void);
extern int func_067940(char *object);
extern void func_038740(void *value);

void func_0C7B80(void)
{
    unsigned int i;
    int id;
    Slot *s;
    State *g;

    func_0B0848(7);
    func_080C60(0x200);
    id = func_0258B8(0x9B, 0xFF);
    for (i = 0; i < 7; i++) {
        s = &D_00203090[i];
        if (s->id_0C == id) {
            if (s->value != D_0021E128[0x2E0]) {
                func_02D9A8(s->value, 1);
                func_02DB30();
            }
            D_001E2EAC[0x1C7E] = (char)s->value;
            break;
        }
    }
    g = &D_00221EC0;
    if (func_067940((char *)g)) {
        g->flags_960 |= (u64)1 << 50;
        ((Ctx *)g)->aux_59C->s_74 = 0xFFFF;
        func_038740((void *)0);
    } else if (D_001E2EAC[0x1C7E] == 0) {
        g->flags_960 &= ~((u64)1 << 50);
        ((Ctx *)g)->aux_59C->s_74 = g->h_10C;
        func_038740((void *)1);
    }
}
