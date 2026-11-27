/* LEVEL_03:0x1A30E8 -- initialises the object: sets the packed state field and flag bits, registers the handler in its owner, clears the 0x18-byte sub-record and links it back to the object. */
extern void *memset(void *p, int c, unsigned int n);

typedef struct {
    char pad0[0xDC];
    void *handler;
} Owner;

typedef struct {
    unsigned int w0;
    char pad4[0xA];
    unsigned char b0E;
    char pad0F;
    void *back;
    unsigned int w14;
} Sub;

typedef struct {
    char pad0[0x48];
    Owner *owner;
    char pad4C[8];
    char *p54;
    Sub *sub;
    char pad5C[8];
    unsigned int flags;
    char pad68[0x10];
    unsigned int packed;
} Obj;

extern int func_02F6C0(char *p);
extern void func_1A5BF0(void);

int func_1A30E8(Obj *o)
{
    Sub *s;

    o->packed = (o->packed & 0xFFF0FFFF) | 0x10000;
    ((int (*)(char *p, Obj *o))func_02F6C0)(o->p54 + 0x14, o);
    o->flags |= 0x430;
    o->owner->handler = (void *)func_1A5BF0;
    o->packed = (o->packed & 0xFFF0FFFF) | 0x10000;
    s = o->sub;
    memset(s, 0, 0x18);
    s->back = o;
    s->b0E = 2;
    s->w14 = 0;
    s->w0 = 0;
    return 1;
}
