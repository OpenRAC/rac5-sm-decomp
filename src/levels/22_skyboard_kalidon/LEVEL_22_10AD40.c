/* LEVEL_22:0x10AD40 -- placement copy of LEVEL_01_133870.c: stores the result of func_10CAA8 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_0016602C;
extern int *func_10CAA8(int *p);

int func_10AD40(int *p)
{
    D_0016602C->value = func_10CAA8(p);
    return 1;
}
