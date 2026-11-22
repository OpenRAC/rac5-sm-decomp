/* LEVEL_09:0x12C808 -- placement copy of LEVEL_01_133870.c: stores the result of func_12E570 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_001F0B4C;
extern int *func_12E570(int *p);

int func_12C808(int *p)
{
    D_001F0B4C->value = func_12E570(p);
    return 1;
}
