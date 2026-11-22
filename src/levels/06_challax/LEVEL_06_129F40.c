/* LEVEL_06:0x129F40 -- placement copy of LEVEL_01_133870.c: stores the result of func_12BCA8 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_001F5C4C;
extern int *func_12BCA8(int *p);

int func_129F40(int *p)
{
    D_001F5C4C->value = func_12BCA8(p);
    return 1;
}
