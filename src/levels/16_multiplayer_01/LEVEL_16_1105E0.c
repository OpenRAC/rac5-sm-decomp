/* LEVEL_16:0x1105E0 -- placement copy of LEVEL_01_133870.c: stores the result of func_111CA8 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_001B4B5C;
extern int *func_111CA8(int *p);

int func_1105E0(int *p)
{
    D_001B4B5C->value = func_111CA8(p);
    return 1;
}
