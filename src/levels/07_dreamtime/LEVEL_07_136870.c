/* LEVEL_07:0x136870 -- placement copy of LEVEL_01_133870.c: stores the result of func_1385D8 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_0021B34C;
extern int *func_1385D8(int *p);

int func_136870(int *p)
{
    D_0021B34C->value = func_1385D8(p);
    return 1;
}
