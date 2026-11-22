/* FRONTEND:0x021210 -- placement copy of LEVEL_01_133870.c: stores the result of func_0227C8 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_00032814;
extern int *func_0227C8(int *p);

int func_021210(int *p)
{
    D_00032814->value = func_0227C8(p);
    return 1;
}
