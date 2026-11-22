/* LEVEL_08:0x144DA8 -- placement copy of LEVEL_01_133870.c: stores the result of func_146B10 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_0024FF0C;
extern int *func_146B10(int *p);

int func_144DA8(int *p)
{
    D_0024FF0C->value = func_146B10(p);
    return 1;
}
