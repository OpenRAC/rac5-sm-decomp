/* LEVEL_03:0x131C38 -- placement copy of LEVEL_01_133870.c: stores the result of func_1339A0 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_0021F6CC;
extern int *func_1339A0(int *p);

int func_131C38(int *p)
{
    D_0021F6CC->value = func_1339A0(p);
    return 1;
}
