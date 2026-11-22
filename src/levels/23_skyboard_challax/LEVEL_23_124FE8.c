/* LEVEL_23:0x124FE8 -- placement copy of LEVEL_01_133870.c: stores the result of func_126D50 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_001DA44C;
extern int *func_126D50(int *p);

int func_124FE8(int *p)
{
    D_001DA44C->value = func_126D50(p);
    return 1;
}
