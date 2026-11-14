/* USA LEVEL_05.REL:0x17E210, 140-byte candidate (14 November 2026).
 * Measured pinned: 5 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    unsigned short id;
    char pad_02[1];
    unsigned char index;
    char pad_04[0x74 - 0x4];
    int h74;
    int h78;
} State;

typedef struct { char pad_00[0x68]; } Entry;
typedef struct { char pad_00[0x58]; State *state; } Obj;

extern Entry D_0021B3F8[];
extern void func_092F50(Entry *e, int id);
extern void func_07E1D8(int handle);

void func_17E210(Obj *o)
{
    State *s = o->state;
    Entry *e;

    e = D_0021B3F8;
    e = e + s->index;
    if (s->id != 0xFFFF) {
        func_092F50(e, s->id);
        s->id = 0xFFFF;
    }
    if (s->h74 != 0) {
        func_07E1D8(s->h74);
        s->h74 = 0;
    }
    if (s->h78 != 0) {
        func_07E1D8(s->h78);
        s->h78 = 0;
    }
}
