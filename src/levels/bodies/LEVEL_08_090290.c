/* LEVEL_08:0x090290 -- returns a field, negated when the flag query says so. */
typedef struct {
    char pad[0x30];
    float f30;
} Obj;

extern int func_02A968(int);

float func_090290(Obj *self)
{
    if (func_02A968(4) != 0)
        return -self->f30;
    return self->f30;
}
