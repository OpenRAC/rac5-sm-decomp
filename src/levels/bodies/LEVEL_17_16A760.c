/* LEVEL_17:0x16A760 -- stores the value in the state's first empty word; the
   second word is only used when the state's flag is set. */
typedef struct {
    char pad[0x4];
    int first;
    int second;
    char padc[0x10];
    unsigned char dual;
} State;

typedef struct {
    char pad[0x58];
    State *state;
} Obj;

void func_16A760(Obj *obj, int value)
{
    State *s = obj->state;

    if (s->dual == 0) {
        if (s->first == 0)
            s->first = value;
    } else if (s->first == 0) {
        s->first = value;
    } else if (s->second == 0) {
        s->second = value;
    }
}
