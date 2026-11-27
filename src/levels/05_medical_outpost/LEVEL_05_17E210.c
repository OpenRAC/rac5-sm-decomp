/* LEVEL_05:0x17E210 -- releases the object's state: frees its table slot by id, then frees and clears its two records. */
typedef struct {
    unsigned short id;
    char pad_02[1];
    unsigned char index;
    char pad_04[0x74 - 0x4];
    char *h74;
    char *h78;
} State;

typedef struct { char pad_00[0x68]; } Entry;
typedef struct { char pad_00[0x58]; State *state; } Obj;

extern Entry D_0021B3F8[];
extern void func_092F50(Entry *e, unsigned int id);
extern void func_07E1D8(char *record);

static __inline__ void Release(Entry *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_092F50(pool, *h);
        *h = 0xFFFF;
    }
}

void func_17E210(Obj *o)
{
    State *s = o->state;

    Release(&D_0021B3F8[s->index], &s->id);
    if (s->h74 != 0) {
        func_07E1D8(s->h74);
        s->h74 = 0;
    }
    if (s->h78 != 0) {
        func_07E1D8(s->h78);
        s->h78 = 0;
    }
}
