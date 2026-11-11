/* LEVEL_07:0x19B890 -- looks up an object by hash into a global pointer and sets two float fields on it. */
typedef struct {
    char pad00[0x18];
    float f18;
    float f1C;
} Obj;

typedef struct {
    Obj *obj;
} Holder;

extern Holder D_0021D064;
extern int func_12D068(unsigned int value);

void func_19B890(void)
{
    D_0021D064.obj = (Obj *)func_12D068(0x8EADB0D5u);
    if (D_0021D064.obj != 0) {
        D_0021D064.obj->f1C = 100000.0f;
        D_0021D064.obj->f18 = 100000.0f;
    }
}
