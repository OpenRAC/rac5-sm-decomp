/* LEVEL_17:0x10FB58 -- placement copy of LEVEL_01_133870.c: stores the result of func_111220 for the incoming pointer in the global object's field and returns 1. */
typedef struct {
    char pad00[0xE4];
    int *value;
} Obj;

extern Obj *D_001A815C;
extern int *func_111220(int *p);

int func_10FB58(int *p)
{
    D_001A815C->value = func_111220(p);
    return 1;
}
