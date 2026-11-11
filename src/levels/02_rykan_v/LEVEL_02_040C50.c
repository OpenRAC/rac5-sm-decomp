/* 040C50 -- two returns. */
typedef struct { char pad[0x568]; float f_568; } Obj;
extern int func_040C00(void);
float func_040C50(Obj *a0)
{
    if (func_040C00() != 0)
        return a0->f_568;
    return 0.0f;
}
