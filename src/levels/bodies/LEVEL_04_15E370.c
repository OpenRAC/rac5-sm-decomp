/* LEVEL_04:0x15E370 -- arms the object's two sub-lists with a minute timer. */
typedef struct {
    char pad[0x80];
    float f_80;
} Obj;

extern char D_003AC59C[];
extern char D_003AC2F8[];

extern void func_02E278(void *a0, char *a1, char *a2, int a3, int a4);

void func_15E370(Obj *a0, int a1, int a2)
{
    *(short *)a0 = 0;
    func_02E278((char *)a0 + 0x48, D_003AC59C, D_003AC2F8, a1, a2);
    a0->f_80 = 60.0f;
}
