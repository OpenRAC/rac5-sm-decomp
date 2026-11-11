/* LEVEL_10:0x088500 -- returns a field, negated when the flag query says so. */
typedef struct {
    char pad[0x30];
    float f30;
} Obj;

extern int func_02A1C8(int);

float func_088500(Obj *self)
{
    if (func_02A1C8(4) != 0)
        return -self->f30;
    return self->f30;
}
