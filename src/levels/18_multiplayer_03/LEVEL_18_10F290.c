/* LEVEL_18:0x10F290 -- placement copy of LEVEL_01_133870.c: stores the result of func_110958 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_001B5FDC;
extern int *func_110958(int *p);

int func_10F290(int *p)
{
    D_001B5FDC->value = func_110958(p);
    return 1;
}
