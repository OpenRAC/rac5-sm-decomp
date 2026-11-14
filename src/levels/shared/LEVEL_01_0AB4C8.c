/* LEVEL_01:0x0AB4C8 -- starts a timer: sets the active flag, the two time values and clears the next flag. */
typedef struct Obj {
    char pad00[0x3C];
    int f3C;
    int f40;
    char pad44[4];
    char b48;
    char b49;
} Obj;

void func_0AB4C8(Obj *o)
{
    o->b48 = 1;
    o->f3C = 60;
    o->b49 = 0;
    o->f40 = 30;
}
