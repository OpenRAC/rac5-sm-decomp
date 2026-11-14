/* LEVEL_08:0x1FD0D8 -- placement copy of LEVEL_04_1D8158.c: when the object is in mode 1, starts its sound with the shared data's first word and sets the next state. */
typedef struct Data {
    char pad00[8];
    int f08;
} Data;

typedef struct Obj {
    char pad00[0x45];
    unsigned char mode;
    char pad46[0x58 - 0x46];
    Data *data;
} Obj;

extern void func_1FAC80(int a, Obj *o);
extern void func_0845F8(Obj *o, int n);

void func_1FD0D8(Obj *o)
{
    if (o->mode == 1) {
        func_1FAC80(o->data->f08, o);
        func_0845F8(o, 1);
    }
}
