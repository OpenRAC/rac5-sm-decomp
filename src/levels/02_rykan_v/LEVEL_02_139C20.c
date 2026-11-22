/* LEVEL_02:0x139C20 -- placement copy of LEVEL_01_133870.c: stores the result of func_13B988 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_0021C00C;
extern int *func_13B988(int *p);

int func_139C20(int *p)
{
    D_0021C00C->value = func_13B988(p);
    return 1;
}
