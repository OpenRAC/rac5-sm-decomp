/* LEVEL_04:0x1A8530 -- placement copy of LEVEL_01_19C738.c: message callback: when the record's flag is set and its id matches the message, shows the entry's text with a positional sound and a follow-up. */
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

extern char D_003B1B48[];
extern void *D_00222070;
extern unsigned int D_0020D138;

extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");
extern void func_0BCA48(unsigned int index, unsigned int value);
extern void func_0BC950(int index, int value);
extern void func_023C28(void *o, char *buf, int x, unsigned int kind, int n);
extern void func_13E780(unsigned char *text, unsigned int count);
extern void func_0BE6F0(void);
extern void func_0BE798(int index, char *name, int flag, int value);

void func_1A8530(Obj *o, Msg *msg)
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
    func_0BCA48(0, a->f40);
    func_0BC950(0, 0x5A);
    ((void (*)(void *, char *, int, unsigned int, int, int))func_023C28)(
        (void *)msg->id, D_003B1B48, r54->b18, a->f3C, r54->b20, 0x40);
    func_13E780((unsigned char *)D_003B1B48, 0x40);
    if (D_00222070 != 0) {
        SND_PlayPositionalSound(D_00222070, o->pos, 0.0f, 0, D_0020D138);
    }
    func_0BE6F0();
    func_0BE798(msg->f08, D_003B1B48, 0, 0x5A);
}
