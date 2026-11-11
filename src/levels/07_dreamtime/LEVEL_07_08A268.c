/* LEVEL_07:0x08A268 -- two returns. */
typedef struct {
    char pad[0x30];
    float f_30;
} Obj;

extern int func_02A730(int a0);

float func_08A268(Obj *a0)
{
    if (func_02A730(4) != 0)
        return -a0->f_30;
    return a0->f_30;
}
