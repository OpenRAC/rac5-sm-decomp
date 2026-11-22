/* LEVEL_01:0x133870 -- stores the result of func_1355D8 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_0020704C;
extern int *func_1355D8(int *p);

int func_133870(int *p)
{
    D_0020704C->value = func_1355D8(p);
    return 1;
}
