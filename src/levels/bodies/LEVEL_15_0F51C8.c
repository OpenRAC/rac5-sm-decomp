/* LEVEL_15:0x0F51C8 -- writes a float and an int into a global block. */
typedef struct {
    char pad[0x44040];
    int i;
    float f;
} Big;

extern Big D_002A8B58;

void func_0F51C8(void *a0)
{
    Big *p = &D_002A8B58;
    p->i = 3;
    p->f = 90.0f;
}
