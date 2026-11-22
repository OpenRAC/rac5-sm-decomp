/* LEVEL_10:0x1316F0 -- placement copy of LEVEL_01_133870.c: stores the result of func_133458 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_0020FCAC;
extern int *func_133458(int *p);

int func_1316F0(int *p)
{
    D_0020FCAC->value = func_133458(p);
    return 1;
}
