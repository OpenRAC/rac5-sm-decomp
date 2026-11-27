/* LEVEL_16:0x134CC0 -- emits two effect bursts when the other object is the owner's current target. */
typedef struct {
    int id;
    char pad[0x60 - 4];
    unsigned int flags;
} Sub;
typedef struct {
    char pad[0x58];
    Sub *sub;
} Obj;
typedef struct {
    int id;
    int pad;
    int slot;
} Other;

extern char D_001BD610;
extern void func_0CB760(int a, void *b, unsigned int c, int d, int e, int f, int mask, float x, float y, float z);
extern void func_1044F0(void *out, Obj *o, char *tbl);

void func_134CC0(Obj *o, Other *other)
{
    Sub *s;
    int bit;
    int buf[4];

    s = o->sub;
    if (s->flags & 1) {
        if (s->id == other->id) {
            bit = 1;
            func_0CB760(0, 0, 0xFFFFFFFFu, 0xAA, 7, 0, bit << other->slot, 5.0f, 3.0000002384185791f, 0.75f);
            func_1044F0(buf, o, &D_001BD610);
            func_0CB760(0, buf, 0xFFFFFFFFu, 0xAA, 7, 0, (bit << other->slot) ^ 3, 5.0f, 3.0000002384185791f, 0.75f);
        }
    }
}
