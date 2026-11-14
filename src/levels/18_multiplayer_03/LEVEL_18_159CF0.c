/* LEVEL_18:0x159CF0 -- true when the owner ratio is at least 150, a helper check passes and a flag byte is clear. */
typedef struct { char pad00[0x168]; float ratio; char pad16C[0x1F]; unsigned char blocked; } State;
typedef struct { char pad00[0x58]; State *state; } Obj;
extern int func_159C10(Obj *o);

int func_159CF0(Obj *o)
{
    State *s = o->state;

    if (s->ratio < 150.0f || !func_159C10(o) || s->blocked) {
        return 0;
    }
    return 1;
}
