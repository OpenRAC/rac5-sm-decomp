/* LEVEL_09.REL:0x084B50 -- asks the game (flag 4) whether the value at
   +0x30 is already negated, and returns it with the sign the caller wants. */
typedef struct {
    char pad[0x30];
    float f_30;
} Obj;

extern int func_029258(int);

float func_084B50(Obj *a0)
{
    float v;

    if (func_029258(4) == 0)
        v = a0->f_30;
    else
        v = -a0->f_30;
    return v;
}
