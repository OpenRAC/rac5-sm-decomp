/* LEVEL_04:0x000580 -- returns one field of the object built on demand. */
typedef struct {
    char pad[0x10];
    float f_10;
} Obj;

extern void *D_24FF20;
extern Obj *func_0006B0(void *arg);

float func_000580(void)
{
    Obj *p = func_0006B0(D_24FF20);

    return p->f_10;
}
