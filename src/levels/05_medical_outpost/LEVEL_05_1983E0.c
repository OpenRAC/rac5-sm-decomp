/* LEVEL_05:0x1983E0 -- placement copy of LEVEL_01_19C738.c: message callback: when the record's flag is set and its id matches the message, shows the entry's text with a positional sound and a follow-up. */
typedef struct {
    char pad00[0x3C];
    unsigned int f3C;
    int f40;
} Aux;

typedef struct {
    int id;
    unsigned int flags;
    Aux *aux;
} Rec58;

typedef struct {
    char pad00[0x18];
    unsigned char b18;
    char pad19[7];
    unsigned char b20;
} Rec54;

typedef struct {
    int id;
    int f04;
    int f08;
} Msg;

typedef struct {
    char pad00[0x30];
    float pos[9];
    Rec54 *rec54;
    Rec58 *rec58;
} Obj;

extern char D_0038E5B0[];
extern void *D_001F7B00;
extern unsigned int D_001E3338;

extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");
extern void func_0B57E8(unsigned int index, unsigned int value);
extern void func_0B56F0(int index, int value);
extern void func_022F40(void *o, char *buf, int x, unsigned int kind, int n);
extern void func_12DC78(unsigned char *text, unsigned int count);
extern void func_0B7490(void);
extern void func_0B7538(int index, char *name, int flag, int value);

void func_1983E0(Obj *o, Msg *msg)
{
    Rec58 *r58 = o->rec58;
    Rec54 *r54 = o->rec54;
    Aux *a = r58->aux;

    if ((r58->flags & 1) == 0) {
        return;
    }
    if (r58->id != msg->id) {
        return;
    }
    func_0B57E8(0, a->f40);
    func_0B56F0(0, 0x5A);
    ((void (*)(void *, char *, int, unsigned int, int, int))func_022F40)(
        (void *)msg->id, D_0038E5B0, r54->b18, a->f3C, r54->b20, 0x40);
    func_12DC78((unsigned char *)D_0038E5B0, 0x40);
    if (D_001F7B00 != 0) {
        SND_PlayPositionalSound(D_001F7B00, o->pos, 0.0f, 0, D_001E3338);
    }
    func_0B7490();
    func_0B7538(msg->f08, D_0038E5B0, 0, 0x5A);
}
