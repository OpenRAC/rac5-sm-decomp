/* LEVEL_20:0x0E33C8 -- placement copy of LEVEL_01_133870.c: stores the result of func_0E4A90 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_0011721C;
extern int *func_0E4A90(int *p);

int func_0E33C8(int *p)
{
    D_0011721C->value = func_0E4A90(p);
    return 1;
}
