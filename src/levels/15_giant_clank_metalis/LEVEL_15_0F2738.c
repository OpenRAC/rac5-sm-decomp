/* LEVEL_15:0x0F2738 -- placement copy of LEVEL_01_133870.c: stores the result of func_0F44A0 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_0015B9AC;
extern int *func_0F44A0(int *p);

int func_0F2738(int *p)
{
    D_0015B9AC->value = func_0F44A0(p);
    return 1;
}
