/* LEVEL_04:0x13FCF0 -- placement copy of LEVEL_01_133870.c: stores the result of func_141A58 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_0022046C;
extern int *func_141A58(int *p);

int func_13FCF0(int *p)
{
    D_0022046C->value = func_141A58(p);
    return 1;
}
