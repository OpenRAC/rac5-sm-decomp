/* LEVEL_10:0x1770D8 -- reports -1 when the follow-up check fails in state 3, otherwise whether the object's float is above a small threshold. */
typedef struct {
    char pad[0x7C];
    float f7C;
} Obj;

extern int func_173020(char *object);
extern int func_173228(unsigned char *a0);

int func_1770D8(void *unused, Obj *o)
{
    if (func_173020((char *)o) != 3 || func_173228((unsigned char *)o) != 0)
        return o->f7C > 0.0001f;
    return -1;
}
