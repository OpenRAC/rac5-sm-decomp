/* LEVEL_15:0x138440 -- returns the first word of the table the object's link points to. */
typedef struct {
    int w00;
} Tab;

typedef struct {
    char pad00[0x54];
    Tab *tab;
} Obj;

int func_138440(Obj *o)
{
    return o->tab->w00;
}
