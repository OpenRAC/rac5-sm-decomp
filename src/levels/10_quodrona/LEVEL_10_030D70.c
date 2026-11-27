/* LEVEL_10:0x030D70 -- placement copy of LEVEL_01_030AB8.c: runs the object's two optional helpers on the position, then returns 1 or the result of the final check. */
typedef struct {
    char pad_00[0x10];
    char *f_10;
    char pad_14[0x18 - 0x14];
    char *f_18;
} Obj;

extern int func_084E90(char *vol, float *pos);
extern int func_1C8350(char *context, char *argument);
extern int func_0142C8(int a0, int a1, int a2, float f);

int func_030D70(Obj *o, float *pos, int flag)
{
    if (o->f_10 != 0)
        func_084E90(o->f_10, pos);
    if (o->f_18 != 0)
        func_1C8350(o->f_18, (char *)pos);
    if (flag != 0)
        return func_0142C8((int)pos, 0, 1, 0.75f);
    return 1;
}
