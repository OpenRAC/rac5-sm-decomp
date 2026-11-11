/* LEVEL_08:0x1F5048 -- pushes the same float to the two handles of a record. */
typedef struct {
    int h0;
    int h4;
} Pair;

typedef struct {
    char pad[0x58];
    Pair *p;
} Obj;

extern int func_1F51B0(int handle, float value);

void func_1F5048(Obj *self, float value)
{
    Pair *p = self->p;

    func_1F51B0(p->h0, value);
    func_1F51B0(p->h4, value);
}
