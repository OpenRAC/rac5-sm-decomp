/* LEVEL_05:0x12F1E8 -- placement copy of LEVEL_01_133870.c: stores the result of func_130F50 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_001F60CC;
extern int *func_130F50(int *p);

int func_12F1E8(int *p)
{
    D_001F60CC->value = func_130F50(p);
    return 1;
}
