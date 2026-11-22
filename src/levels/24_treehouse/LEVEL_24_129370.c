/* LEVEL_24:0x129370 -- placement copy of LEVEL_01_133870.c: stores the result of func_12B0D8 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_001D7CCC;
extern int *func_12B0D8(int *p);

int func_129370(int *p)
{
    D_001D7CCC->value = func_12B0D8(p);
    return 1;
}
