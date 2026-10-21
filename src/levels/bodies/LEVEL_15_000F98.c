/* LEVEL_15:0x000F98 -- copy one float field of a global object into the next. */
typedef struct {
    char pad[0xF8];
    float first;
    float second;
} Obj;

extern Obj *D_00143EB0;

void func_000F98(void)
{
    D_00143EB0->second = D_00143EB0->first;
}
