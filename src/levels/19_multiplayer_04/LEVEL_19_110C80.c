/* LEVEL_19:0x110C80 -- placement copy of LEVEL_01_133870.c: stores the result of func_112348 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_001B5CDC;
extern int *func_112348(int *p);

int func_110C80(int *p)
{
    D_001B5CDC->value = func_112348(p);
    return 1;
}
